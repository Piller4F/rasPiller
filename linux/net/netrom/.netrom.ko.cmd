cmd_net/netrom/netrom.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/netrom/netrom.ko net/netrom/netrom.o net/netrom/netrom.mod.o;  true
