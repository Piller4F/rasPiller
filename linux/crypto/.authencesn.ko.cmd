cmd_crypto/authencesn.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/authencesn.ko crypto/authencesn.o crypto/authencesn.mod.o;  true
