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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x20105980, "driver_unregister" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0xb78414b4, "fbtft_unregister_backlight" },
	{ 0x825e7cc5, "backlight_device_register" },
	{ 0xa44c2eb0, "dev_driver_string" },
	{ 0x44239691, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xa38288fc, "fbtft_probe_common" },
	{ 0xcb7e6297, "fbtft_remove_common" },
};

MODULE_INFO(depends, "fbtft,backlight");

MODULE_ALIAS("of:N*T*Csolomon,ssd1351");
MODULE_ALIAS("of:N*T*Csolomon,ssd1351C*");

MODULE_INFO(srcversion, "A0EDF1A2D61813E78FC8064");
