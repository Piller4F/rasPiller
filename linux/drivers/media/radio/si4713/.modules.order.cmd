cmd_drivers/media/radio/si4713/modules.order := {   echo drivers/media/radio/si4713/si4713.ko; :; } | awk '!x[$$0]++' - > drivers/media/radio/si4713/modules.order
