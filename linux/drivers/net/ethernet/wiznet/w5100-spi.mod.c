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
	{ 0x1a07476e, "w5100_pm_ops" },
	{ 0x20105980, "driver_unregister" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2715240, "spi_sync" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdcb764ad, "memset" },
	{ 0x36043ee3, "spi_write_then_read" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x561dd5df, "w5100_ops_priv" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc8cbd20d, "spi_get_device_id" },
	{ 0x58ce94ff, "w5100_probe" },
	{ 0x26559349, "of_match_device" },
	{ 0xe896f0d, "of_get_mac_address" },
	{ 0xee3a80c7, "w5100_remove" },
};

MODULE_INFO(depends, "w5100");

MODULE_ALIAS("spi:w5100");
MODULE_ALIAS("spi:w5200");
MODULE_ALIAS("spi:w5500");
MODULE_ALIAS("of:N*T*Cwiznet,w5100");
MODULE_ALIAS("of:N*T*Cwiznet,w5100C*");
MODULE_ALIAS("of:N*T*Cwiznet,w5200");
MODULE_ALIAS("of:N*T*Cwiznet,w5200C*");
MODULE_ALIAS("of:N*T*Cwiznet,w5500");
MODULE_ALIAS("of:N*T*Cwiznet,w5500C*");

MODULE_INFO(srcversion, "A97CED91287426DDD44BA79");
