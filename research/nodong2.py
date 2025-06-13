import ida_dbg
import ida_idd
import time

def nodong2():

    if ida_dbg.add_bpt(0xFFFFF78000000000, 8, ida_idd.BPT_RDWR) == True:
        print(f"[+] Hardware breakpoint set successfully")
    else:
        print("[-] Failed to set hardware breakpoint")
        return False
    
    print("[+] Starting execution...")
    if ida_dbg.continue_process() == 1:
        print("[+] Process execution started")
    else:
        print("[-] Failed to continue process execution")
        return False


    return True

if __name__ == "__main__":
    print(nodong2())