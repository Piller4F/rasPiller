cmd_drivers/ssb/ssb.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/ssb/ssb.ko drivers/ssb/ssb.o drivers/ssb/ssb.mod.o;  true
