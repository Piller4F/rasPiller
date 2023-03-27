#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0x20105980, "driver_unregister" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0xc3909657, "ieee802154_register_hw" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x3b02ae0d, "irq_get_irq_data" },
	{ 0xc8cbd20d, "spi_get_device_id" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xedc84a05, "__devm_regmap_init" },
	{ 0x7cc30d74, "__devm_regmap_init_spi" },
	{ 0xe460bb1, "ieee802154_alloc_hw" },
	{ 0x44239691, "_dev_info" },
	{ 0x7fb91435, "ieee802154_rx_irqsafe" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2715240, "spi_sync" },
	{ 0xb8f6e136, "regmap_write_async" },
	{ 0x765b0c1f, "ieee802154_xmit_complete" },
	{ 0x92997ed8, "_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf89a697a, "regmap_write" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0xdcb764ad, "memset" },
	{ 0x36043ee3, "spi_write_then_read" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3fd5981f, "spi_async" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x82f9e55e, "ieee802154_free_hw" },
	{ 0x2818e26f, "ieee802154_unregister_hw" },
};

MODULE_INFO(depends, "mac802154,regmap-spi");

MODULE_ALIAS("spi:mrf24j40");
MODULE_ALIAS("spi:mrf24j40ma");
MODULE_ALIAS("spi:mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40ma");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40maC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mcC*");

MODULE_INFO(srcversion, "0A808BC1EC678E2F8FAFC1E");
