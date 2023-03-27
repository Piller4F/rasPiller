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
	{ 0x44239691, "_dev_info" },
	{ 0xc3909657, "ieee802154_register_hw" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x2313ab84, "gpiod_set_raw_value_cansleep" },
	{ 0xb48e5cec, "devm_gpio_request_one" },
	{ 0x3b02ae0d, "irq_get_irq_data" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x7cc30d74, "__devm_regmap_init_spi" },
	{ 0xe460bb1, "ieee802154_alloc_hw" },
	{ 0xf9994925, "of_property_read_variable_u8_array" },
	{ 0x95fc5f46, "of_get_named_gpio_flags" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x82f9e55e, "ieee802154_free_hw" },
	{ 0x2818e26f, "ieee802154_unregister_hw" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9ddce221, "gpiod_set_raw_value" },
	{ 0x3a109e75, "gpio_to_desc" },
	{ 0x7fb91435, "ieee802154_rx_irqsafe" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xdcb764ad, "memset" },
	{ 0xa6257a2f, "complete" },
	{ 0xcfc16136, "ieee802154_wake_queue" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0x37a0cba, "kfree" },
	{ 0x765b0c1f, "ieee802154_xmit_complete" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3fd5981f, "spi_async" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3055d20, "usleep_range_state" },
};

MODULE_INFO(depends, "mac802154,regmap-spi");

MODULE_ALIAS("spi:at86rf230");
MODULE_ALIAS("spi:at86rf231");
MODULE_ALIAS("spi:at86rf233");
MODULE_ALIAS("spi:at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf230");
MODULE_ALIAS("of:N*T*Catmel,at86rf230C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf231");
MODULE_ALIAS("of:N*T*Catmel,at86rf231C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf233");
MODULE_ALIAS("of:N*T*Catmel,at86rf233C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf212C*");

MODULE_INFO(srcversion, "0EC75018B40662F48ADF739");
