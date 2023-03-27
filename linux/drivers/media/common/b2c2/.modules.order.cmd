cmd_drivers/media/common/b2c2/modules.order := {   echo drivers/media/common/b2c2/b2c2-flexcop.ko; :; } | awk '!x[$$0]++' - > drivers/media/common/b2c2/modules.order
