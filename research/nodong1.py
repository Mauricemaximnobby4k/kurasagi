import idaapi
import idc
import ida_dbg
import ida_idd
import time

def main():
    print("[+] Starting GDB connection and setup...")
    print("[+] Connecting to GDB server on localhost:1234...")
    
    if ida_dbg.load_debugger("gdb", True) != True:
        print("[-] Failed to load GDB debugger")
        return False
    
    ida_dbg.set_remote_debugger("localhost", "", 1234)
    
    if ida_dbg.start_process("", "", "") != 1:
        print("[-] Failed to start debugging session")
        return False
    
    print("[+] Connected to GDB successfully")

    print("[+] Mapping memory region 0x0 - 0xFFFFFFFFFFFFFFFE...")
    
    start_addr = 0x0
    end_addr = 0xFFFFFFFFFFFFFFFE
    
    r = ida_idd.meminfo_vec_t()
    mi = ida_idd.memory_info_t()
    mi.start_ea = start_addr
    mi.end_ea = end_addr
    mi.perm = 7 # Read, Write, Execute
    mi.bitness = 2
    r.push_back(mi)
    ida_dbg.set_manual_regions(r)
    return True

if __name__ == "__main__":
    if main():
        print("[+] Script executed without errors")
    else:
        print("[-] Script encountered errors during execution")
