cmd_crypto/ccm.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/ccm.ko crypto/ccm.o crypto/ccm.mod.o;  true
