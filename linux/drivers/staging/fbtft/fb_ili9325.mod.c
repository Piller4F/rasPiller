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
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x20105980, "driver_unregister" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa38288fc, "fbtft_probe_common" },
	{ 0xcb7e6297, "fbtft_remove_common" },
};

MODULE_INFO(depends, "fbtft");

MODULE_ALIAS("of:N*T*Cilitek,ili9325");
MODULE_ALIAS("of:N*T*Cilitek,ili9325C*");

MODULE_INFO(srcversion, "45463F4E206E76430C4CD3E");
