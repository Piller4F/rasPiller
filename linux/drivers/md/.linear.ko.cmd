cmd_drivers/md/linear.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/md/linear.ko drivers/md/linear.o drivers/md/linear.mod.o;  true
