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
	{ 0x3e57ec09, "of_node_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbf629583, "devm_led_classdev_register_ext" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xc6421d46, "of_get_next_available_child" },
	{ 0x92cd3d03, "device_get_match_data" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xbe2aed38, "i2c_smbus_write_byte_data" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:is31fl3236");
MODULE_ALIAS("i2c:is31fl3235");
MODULE_ALIAS("i2c:is31fl3218");
MODULE_ALIAS("i2c:sn3218");
MODULE_ALIAS("i2c:is31fl3216");
MODULE_ALIAS("i2c:sn3216");
MODULE_ALIAS("of:N*T*Cissi,is31fl3236");
MODULE_ALIAS("of:N*T*Cissi,is31fl3236C*");
MODULE_ALIAS("of:N*T*Cissi,is31fl3235");
MODULE_ALIAS("of:N*T*Cissi,is31fl3235C*");
MODULE_ALIAS("of:N*T*Cissi,is31fl3218");
MODULE_ALIAS("of:N*T*Cissi,is31fl3218C*");
MODULE_ALIAS("of:N*T*Csi-en,sn3218");
MODULE_ALIAS("of:N*T*Csi-en,sn3218C*");
MODULE_ALIAS("of:N*T*Cissi,is31fl3216");
MODULE_ALIAS("of:N*T*Cissi,is31fl3216C*");
MODULE_ALIAS("of:N*T*Csi-en,sn3216");
MODULE_ALIAS("of:N*T*Csi-en,sn3216C*");

MODULE_INFO(srcversion, "2EDF233818996227EEA0103");
