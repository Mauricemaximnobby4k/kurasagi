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

with open('ntoskrnl.exe', 'rb') as f:
    data = f.read()

    sections = parse_pe_sections(data)
    if not sections:
        print("Error: Invalid PE file")
        exit(1)

    offsets = []
    start = 0
    pattern = b'\xe8\xb4\xc8\x91\x58\x3f\xa0\xa3'
    while True:
        index = data.find(pattern, start)
        if index == -1:
            break
        offsets.append(index)
        start = index + 1
    
    if offsets:
        for offset in offsets:
            rva = file_offset_to_rva(offset, sections)
            if rva:
                print(f"Found at file offset: {hex(offset)}, RVA: {hex(rva)}")
            else:
                print(f"Found at file offset: {hex(offset)}, RVA: N/A (not in mapped section)")
    else:
        print("Not found")