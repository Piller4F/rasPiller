cmd_drivers/net/wireless/realtek/modules.order := {   cat drivers/net/wireless/realtek/rtl818x/modules.order;   cat drivers/net/wireless/realtek/rtlwifi/modules.order;   cat drivers/net/wireless/realtek/rtl8xxxu/modules.order; :; } | awk '!x[$$0]++' - > drivers/net/wireless/realtek/modules.order