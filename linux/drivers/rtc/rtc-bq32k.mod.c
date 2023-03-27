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
	{ 0x3c01dda, "_dev_warn" },
	{ 0xa353aef4, "device_create_file" },
	{ 0x50388cf6, "devm_rtc_device_register" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0x44239691, "_dev_info" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0x6fe8451e, "device_remove_file" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,bq32000");
MODULE_ALIAS("of:N*T*Cti,bq32000C*");
MODULE_ALIAS("i2c:bq32000");

MODULE_INFO(srcversion, "AFCC4467124DFF310849423");
