import idaapi

def page_align(address):
    return(address&~(0x1000-1))

kgs = idaapi.get_reg_val("k_gs_base")
pcr = read_dbg_qword(kgs+0x18) # gs:[0x18] = KeGetPcr
idt_base = read_dbg_qword(pcr+0x38) # pcr[0x38] = Idt entries

# get 0th handler
i0e_low = read_dbg_word(idt_base)
i0e_mid = read_dbg_word(idt_base+0x6)
i0e_high = read_dbg_dword(idt_base+0x8)
idt_zero_entry = (i0e_low) | (i0e_mid << 16) | (i0e_high << 32)
print(f"IDT 0th handler: {hex(idt_zero_entry)}")

DosHeader = page_align(idt_zero_entry)
while(True):
    e_magic = read_dbg_word(DosHeader+0)
    if e_magic == 0x5A4D:
        print("Base address located at {}".format(hex(DosHeader)))
        break
    DosHeader -= 0x1000
    
e_lfanew = read_dbg_dword(DosHeader+0x3c)
if read_dbg_dword(DosHeader+e_lfanew) != 0x4550:
    raise ValueError("couldnt verify pe")

opt_offset = DosHeader+e_lfanew+0x18
if read_dbg_word(opt_offset) != 0x20b:
    raise ValueError("couldnt verify pe+")

SizeOfImage = read_dbg_dword(opt_offset+0x18)
print(f"SizeOfImage: {hex(SizeOfImage)}")

print(f"Start: {hex(DosHeader)}")
print(f"End: {hex(DosHeader+SizeOfImage)}")