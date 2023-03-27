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
	{ 0x163f4a3f, "_dev_err" },
	{ 0xc557e35, "devm_of_platform_populate" },
	{ 0xd3bd4d14, "devm_mfd_add_devices" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0x92cd3d03, "device_get_match_data" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Ckontron,sl28cpld");
MODULE_ALIAS("of:N*T*Ckontron,sl28cpldC*");
MODULE_ALIAS("of:N*T*Craspberrypi,poe-core");
MODULE_ALIAS("of:N*T*Craspberrypi,poe-coreC*");

MODULE_INFO(srcversion, "05AD9A570D690302AD90D71");
