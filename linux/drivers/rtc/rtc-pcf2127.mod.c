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
	{ 0x67ddba8d, "rtc_update_irq" },
	{ 0xedc84a05, "__devm_regmap_init" },
	{ 0xc8cbd20d, "spi_get_device_id" },
	{ 0x7cc30d74, "__devm_regmap_init_spi" },
	{ 0xf9a482f9, "msleep" },
	{ 0x21635e33, "devm_rtc_nvmem_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x329f6a5b, "__devm_rtc_register_device" },
	{ 0x9ce1e901, "rtc_add_group" },
	{ 0x7cbda652, "devm_watchdog_register_device" },
	{ 0xa387f57e, "device_property_present" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x91dee67f, "devm_rtc_allocate_device" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0x44239691, "_dev_info" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xfb8880, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xea764101, "regmap_bulk_read" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
};

MODULE_INFO(depends, "regmap-spi");

MODULE_ALIAS("spi:pcf2127");
MODULE_ALIAS("spi:pcf2129");
MODULE_ALIAS("spi:pca2129");
MODULE_ALIAS("i2c:pcf2127");
MODULE_ALIAS("i2c:pcf2129");
MODULE_ALIAS("i2c:pca2129");
MODULE_ALIAS("of:N*T*Cnxp,pcf2127");
MODULE_ALIAS("of:N*T*Cnxp,pcf2127C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf2129");
MODULE_ALIAS("of:N*T*Cnxp,pcf2129C*");
MODULE_ALIAS("of:N*T*Cnxp,pca2129");
MODULE_ALIAS("of:N*T*Cnxp,pca2129C*");

MODULE_INFO(srcversion, "41612378695F447D55951BD");
