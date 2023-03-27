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
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x44239691, "_dev_info" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x50388cf6, "devm_rtc_device_register" },
	{ 0x36043ee3, "spi_write_then_read" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:rx4581");

MODULE_INFO(srcversion, "24B9B4A242E0CAAEDFA11E7");
