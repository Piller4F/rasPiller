cmd_fs/cifs/cifs.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/cifs/cifs.ko fs/cifs/cifs.o fs/cifs/cifs.mod.o;  true
