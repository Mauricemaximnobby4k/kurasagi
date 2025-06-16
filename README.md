# kurasagi

`kurasagi` is full POC of PatchGuard bypass for Windows 24H2, Build 26100.4351.

For more information, please refer to the `product` branch, which contains the PDF paper detailing the bypass.

## Disclaimers

1. **PLEASE USE IT FOR ONLY EDUCATIONAL PURPOSES!**
2. Do not turn on hypervisor-based security factors when running! (It will BSOD!)
3. Use [kdmapper](https://github.com/TheCruZ/kdmapper) for driver loading.
4. We just found that if we hook well-used functions, it will cause unknown BSOD. Just don't do that.

# Images

![proof](assets/proof.png)