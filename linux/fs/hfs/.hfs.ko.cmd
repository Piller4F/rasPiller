cmd_fs/hfs/hfs.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/hfs/hfs.ko fs/hfs/hfs.o fs/hfs/hfs.mod.o;  true
