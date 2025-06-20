# kurasagi

`kurasagi` is full POC of PatchGuard bypass for Windows 24H2, Build 26100.4351.

For more information, please refer to the `product` branch, which contains the PDF paper detailing the bypass.

## Disclaimers

1. **PLEASE USE IT FOR ONLY EDUCATIONAL PURPOSES!**
2. Do not turn on hypervisor-based security factors when running! (It will BSOD!)
3. Use [kdmapper](https://github.com/TheCruZ/kdmapper) for driver loading.
4. ~~We just found that if we hook well-used functions, it will cause unknown BSOD. Just don't do that.~~ NonPagedPoolExecute를 할당할 때 `kurasagi`가 로딩되어 있을 경우 PTE에 갑자기 NX 비트가 설정되는 것을 확인했습니다. 이유는 모르겠네요. 해결했습니다.

# Images

![proof](assets/proof.png)