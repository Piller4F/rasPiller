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
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x44239691, "_dev_info" },
	{ 0x73b71578, "spi_setup" },
	{ 0x7cc30d74, "__devm_regmap_init_spi" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x21635e33, "devm_rtc_nvmem_register" },
	{ 0x50388cf6, "devm_rtc_device_register" },
	{ 0x5e0161af, "devm_hwmon_device_register_with_info" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xea764101, "regmap_bulk_read" },
	{ 0xfb8880, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x67ddba8d, "rtc_update_irq" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "regmap-spi,regmap-i2c");

MODULE_ALIAS("of:N*T*Cdallas,ds3232");
MODULE_ALIAS("of:N*T*Cdallas,ds3232C*");
MODULE_ALIAS("i2c:ds3232");

MODULE_INFO(srcversion, "FB51BE04D66A9252F686C58");
