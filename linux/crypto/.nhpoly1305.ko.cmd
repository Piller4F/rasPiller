cmd_crypto/nhpoly1305.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/nhpoly1305.ko crypto/nhpoly1305.o crypto/nhpoly1305.mod.o;  true
