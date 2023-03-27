cmd_drivers/staging/media/modules.order := {   cat drivers/staging/media/rpivid/modules.order; :; } | awk '!x[$$0]++' - > drivers/staging/media/modules.order
