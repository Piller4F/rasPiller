cmd_net/mac802154/mac802154.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o net/mac802154/mac802154.ko net/mac802154/mac802154.o net/mac802154/mac802154.mod.o;  true