cmd_drivers/md/dm-mod.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/md/dm-mod.ko drivers/md/dm-mod.o drivers/md/dm-mod.mod.o;  true
