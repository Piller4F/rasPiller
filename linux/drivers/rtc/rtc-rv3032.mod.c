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
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x5e0161af, "devm_hwmon_device_register_with_info" },
	{ 0xfdf36ba7, "of_clk_add_provider" },
	{ 0x54a5a05, "of_clk_src_simple_get" },
	{ 0x51b872e6, "devm_clk_register" },
	{ 0xdcccca3e, "of_property_read_string" },
	{ 0x21635e33, "devm_rtc_nvmem_register" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x329f6a5b, "__devm_rtc_register_device" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0x91dee67f, "devm_rtc_allocate_device" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x67ddba8d, "rtc_update_irq" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xea764101, "regmap_bulk_read" },
	{ 0xfb8880, "regmap_bulk_write" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2cc71b34, "regmap_read" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3032");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3032C*");

MODULE_INFO(srcversion, "59BBE59381507757A840729");
