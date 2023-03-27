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
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x7cc30d74, "__devm_regmap_init_spi" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0x44239691, "_dev_info" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x21635e33, "devm_rtc_nvmem_register" },
	{ 0x329f6a5b, "__devm_rtc_register_device" },
	{ 0x91dee67f, "devm_rtc_allocate_device" },
	{ 0x24888b48, "devm_hwmon_device_register_with_groups" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x67ddba8d, "rtc_update_irq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0xea764101, "regmap_bulk_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfb8880, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xf538c801, "regmap_update_bits_base" },
};

MODULE_INFO(depends, "regmap-spi,regmap-i2c");

MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3029");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3029C*");
MODULE_ALIAS("i2c:rv3029");
MODULE_ALIAS("i2c:rv3029c2");

MODULE_INFO(srcversion, "111384E29E750998C1CD1F4");
