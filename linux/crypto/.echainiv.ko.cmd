cmd_crypto/echainiv.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/echainiv.ko crypto/echainiv.o crypto/echainiv.mod.o;  true
