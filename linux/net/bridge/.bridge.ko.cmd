cmd_net/bridge/bridge.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/bridge/bridge.ko net/bridge/bridge.o net/bridge/bridge.mod.o;  true
