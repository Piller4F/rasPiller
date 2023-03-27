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
	{ 0x3c01dda, "_dev_warn" },
	{ 0x21635e33, "devm_rtc_nvmem_register" },
	{ 0x329f6a5b, "__devm_rtc_register_device" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x91dee67f, "devm_rtc_allocate_device" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xf1128625, "of_device_get_match_data" },
	{ 0x67ddba8d, "rtc_update_irq" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xea764101, "regmap_bulk_read" },
	{ 0xfb8880, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0xf89a697a, "regmap_write" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cnxp,pcf85263");
MODULE_ALIAS("of:N*T*Cnxp,pcf85263C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf85363");
MODULE_ALIAS("of:N*T*Cnxp,pcf85363C*");

MODULE_INFO(srcversion, "FC783EC628F077D1A95D4BD");
