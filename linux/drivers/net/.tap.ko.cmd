cmd_drivers/net/tap.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/net/tap.ko drivers/net/tap.o drivers/net/tap.mod.o;  true
