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
	{ 0x7cc30d74, "__devm_regmap_init_spi" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0x820210fe, "ad193x_regmap_config" },
	{ 0x6d49cb2a, "ad193x_probe" },
	{ 0x20105980, "driver_unregister" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc8cbd20d, "spi_get_device_id" },
};

MODULE_INFO(depends, "regmap-spi,snd-soc-ad193x");

MODULE_ALIAS("spi:ad193x");
MODULE_ALIAS("spi:ad1933");
MODULE_ALIAS("spi:ad1934");
MODULE_ALIAS("spi:ad1938");
MODULE_ALIAS("spi:ad1939");
MODULE_ALIAS("spi:adau1328");

MODULE_INFO(srcversion, "F938E9C64A9EEE843713493");
