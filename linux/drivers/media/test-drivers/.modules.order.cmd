cmd_drivers/media/test-drivers/modules.order := {   cat drivers/media/test-drivers/vimc/modules.order;   cat drivers/media/test-drivers/vivid/modules.order;   echo drivers/media/test-drivers/vim2m.ko;   cat drivers/media/test-drivers/vicodec/modules.order; :; } | awk '!x[$$0]++' - > drivers/media/test-drivers/modules.order