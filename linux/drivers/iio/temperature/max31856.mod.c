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
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x11089ac7, "_ctype" },
	{ 0x44239691, "_dev_info" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x2b29befb, "__devm_iio_device_register" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0x8a21ba91, "devm_iio_device_alloc" },
	{ 0xc8cbd20d, "spi_get_device_id" },
	{ 0x2715240, "spi_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x36043ee3, "spi_write_then_read" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cmaxim,max31856");
MODULE_ALIAS("of:N*T*Cmaxim,max31856C*");
MODULE_ALIAS("spi:max31856");

MODULE_INFO(srcversion, "C6DDEADB5DD00AAE8010D83");
