cmd_drivers/hid/uhid.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/hid/uhid.ko drivers/hid/uhid.o drivers/hid/uhid.mod.o;  true
