cmd_crypto/ecc.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/ecc.ko crypto/ecc.o crypto/ecc.mod.o;  true
