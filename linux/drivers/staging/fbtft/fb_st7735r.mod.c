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
	{ 0xa38288fc, "fbtft_probe_common" },
	{ 0xcb7e6297, "fbtft_remove_common" },
};

MODULE_INFO(depends, "fbtft");

MODULE_ALIAS("of:N*T*Csitronix,st7735r");
MODULE_ALIAS("of:N*T*Csitronix,st7735rC*");
MODULE_ALIAS("of:N*T*Cfbtft,sainsmart18");
MODULE_ALIAS("of:N*T*Cfbtft,sainsmart18C*");
MODULE_ALIAS("of:N*T*Cfbtft,adafruit18");
MODULE_ALIAS("of:N*T*Cfbtft,adafruit18C*");
MODULE_ALIAS("of:N*T*Cfbtft,adafruit18_green");
MODULE_ALIAS("of:N*T*Cfbtft,adafruit18_greenC*");

MODULE_INFO(srcversion, "F033853755132B8C2ADFCDA");
