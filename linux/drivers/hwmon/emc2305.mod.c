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
	{ 0x98cf60b3, "strlen" },
	{ 0x926884a6, "i2c_smbus_read_word_data" },
	{ 0x57c8dc86, "thermal_cooling_device_unregister" },
	{ 0x5e0161af, "devm_hwmon_device_register_with_info" },
	{ 0xf9994925, "of_property_read_variable_u8_array" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x8b342d78, "i2c_smbus_read_byte_data" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xb6c669f9, "thermal_cooling_device_register" },
	{ 0xbe2aed38, "i2c_smbus_write_byte_data" },
	{ 0xa8f5047a, "devm_thermal_of_cooling_device_register" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrochip,emc2305");
MODULE_ALIAS("of:N*T*Cmicrochip,emc2305C*");
MODULE_ALIAS("of:N*T*Cmicrochip,emc2301");
MODULE_ALIAS("of:N*T*Cmicrochip,emc2301C*");
MODULE_ALIAS("i2c:emc2305");
MODULE_ALIAS("i2c:emc2303");
MODULE_ALIAS("i2c:emc2302");
MODULE_ALIAS("i2c:emc2301");

MODULE_INFO(srcversion, "F85676B56D93B1E2BD83B9A");
