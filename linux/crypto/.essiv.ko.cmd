cmd_crypto/essiv.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/essiv.ko crypto/essiv.o crypto/essiv.mod.o;  true
