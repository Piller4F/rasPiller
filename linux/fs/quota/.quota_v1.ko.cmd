cmd_fs/quota/quota_v1.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/quota/quota_v1.ko fs/quota/quota_v1.o fs/quota/quota_v1.mod.o;  true
