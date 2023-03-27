cmd_drivers/mtd/nand/spi/modules.order := {   echo drivers/mtd/nand/spi/spinand.ko; :; } | awk '!x[$$0]++' - > drivers/mtd/nand/spi/modules.order
