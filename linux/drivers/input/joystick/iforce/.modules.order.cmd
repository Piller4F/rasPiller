cmd_drivers/input/joystick/iforce/modules.order := {   echo drivers/input/joystick/iforce/iforce.ko;   echo drivers/input/joystick/iforce/iforce-usb.ko; :; } | awk '!x[$$0]++' - > drivers/input/joystick/iforce/modules.order