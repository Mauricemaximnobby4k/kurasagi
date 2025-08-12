# kurasagi

`kurasagi` is full POC of PatchGuard bypass for Windows 24H2, Build 26100.4351.

For more information, please refer to the `product` branch, which contains the PDF paper detailing the bypass.

## Changelog

(2025/08/03) **Caution**: Upgraded to 26100.4652. for 26100.4351 version bypass, refer to commit `80650b9cb71855042659137ecd8936f8a9336a61`.

## Disclaimers

1. **PLEASE USE IT FOR ONLY EDUCATIONAL PURPOSES!**
2. Do not turn on hypervisor-based security factors when running! (It will BSOD!)
3. Use [kdmapper](https://github.com/TheCruZ/kdmapper) for driver loading.
4. ~~We just found that if we hook well-used functions, it will cause unknown BSOD. Just don't do that.~~ NonPagedPoolExecute를 할당할 때 `kurasagi`가 로딩되어 있을 경우 PTE에 갑자기 NX 비트가 설정되는 것을 확인했습니다. 이유는 모르겠네요. 해결했습니다.

# Images

![proof](assets/proof.png)

## Credit
Here are the helpful resources I referred to in completing this project. I appreciate these works, ideas, and source codes. Thanks
+ https://blog.tetrane.com/downloads/Tetrane_PatchGuard_Analysis_RS4_v1.01.pdf
+ https://blog.can.ac/2024/06/28/pgc-garbage-collecting-patchguard/
+ https://shhoya.github.io/windows_pgintro.html
