cmd_drivers/net/tun.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/net/tun.ko drivers/net/tun.o drivers/net/tun.mod.o;  true
