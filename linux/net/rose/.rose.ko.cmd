cmd_net/rose/rose.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/rose/rose.ko net/rose/rose.o net/rose/rose.mod.o;  true
