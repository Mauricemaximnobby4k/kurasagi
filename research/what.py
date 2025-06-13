a = bytes.fromhex("""40
5C 24 18 48 89 7C 24 20  48 9C 48 83 EC 20 4C 8B
D2 0F AE E8 4C 33 51 40  BB 19 00 00 00 8B 44 24""")


with open('ntoskrnl.exe', 'rb') as f:
    data = f.read()

offset = data.find(a)

print(hex(offset))

import struct

def parse_pe_sections(data):
    if data[:2] != b'MZ':
        return None
    
    pe_offset = struct.unpack('<I', data[0x3c:0x40])[0]
    
    if data[pe_offset:pe_offset+4] != b'PE\x00\x00':
        return None
    
    num_sections = struct.unpack('<H', data[pe_offset+6:pe_offset+8])[0]
    opt_header_size = struct.unpack('<H', data[pe_offset+20:pe_offset+22])[0]
    sections_offset = pe_offset + 24 + opt_header_size
    
    sections = []
    for i in range(num_sections):
        section_offset = sections_offset + (i * 40)
        virtual_addr = struct.unpack('<I', data[section_offset+12:section_offset+16])[0]
        raw_size = struct.unpack('<I', data[section_offset+16:section_offset+20])[0]
        raw_offset = struct.unpack('<I', data[section_offset+20:section_offset+24])[0]
        
        sections.append({
            'virtual_addr': virtual_addr,
            'raw_offset': raw_offset,
            'raw_size': raw_size
        })
    
    return sections

def file_offset_to_rva(file_offset, sections):
    for section in sections:
        if (section['raw_offset'] <= file_offset < 
            section['raw_offset'] + section['raw_size']):
            return section['virtual_addr'] + (file_offset - section['raw_offset'])
    return None

sections = parse_pe_sections(data)
rva = file_offset_to_rva(offset, sections)
print(f"RVA: {hex(rva)}" if rva else "RVA: N/A (not in mapped section)")