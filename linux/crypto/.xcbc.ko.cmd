cmd_crypto/xcbc.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/xcbc.ko crypto/xcbc.o crypto/xcbc.mod.o;  true
