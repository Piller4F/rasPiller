cmd_drivers/md/dm-bio-prison.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/md/dm-bio-prison.ko drivers/md/dm-bio-prison.o drivers/md/dm-bio-prison.mod.o;  true