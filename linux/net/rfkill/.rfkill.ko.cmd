cmd_net/rfkill/rfkill.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/rfkill/rfkill.ko net/rfkill/rfkill.o net/rfkill/rfkill.mod.o;  true
