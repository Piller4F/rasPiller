cmd_drivers/bcma/bcma.ko := aarch64-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/bcma/bcma.ko drivers/bcma/bcma.o drivers/bcma/bcma.mod.o;  true
