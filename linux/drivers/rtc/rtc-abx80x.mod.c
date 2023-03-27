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
	{ 0x329f6a5b, "__devm_rtc_register_device" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9ce1e901, "rtc_add_group" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x7cbda652, "devm_watchdog_register_device" },
	{ 0x91dee67f, "devm_rtc_allocate_device" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xdcccca3e, "of_property_read_string" },
	{ 0x44239691, "_dev_info" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x5a921311, "strncmp" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xd93c21f4, "i2c_smbus_read_i2c_block_data" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x43664e27, "i2c_smbus_write_i2c_block_data" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x462ec8f6, "_dev_alert" },
	{ 0x67ddba8d, "rtc_update_irq" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8b342d78, "i2c_smbus_read_byte_data" },
	{ 0xbe2aed38, "i2c_smbus_write_byte_data" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cabracon,abx80x");
MODULE_ALIAS("of:N*T*Cabracon,abx80xC*");
MODULE_ALIAS("of:N*T*Cabracon,ab0801");
MODULE_ALIAS("of:N*T*Cabracon,ab0801C*");
MODULE_ALIAS("of:N*T*Cabracon,ab0803");
MODULE_ALIAS("of:N*T*Cabracon,ab0803C*");
MODULE_ALIAS("of:N*T*Cabracon,ab0804");
MODULE_ALIAS("of:N*T*Cabracon,ab0804C*");
MODULE_ALIAS("of:N*T*Cabracon,ab0805");
MODULE_ALIAS("of:N*T*Cabracon,ab0805C*");
MODULE_ALIAS("of:N*T*Cabracon,ab1801");
MODULE_ALIAS("of:N*T*Cabracon,ab1801C*");
MODULE_ALIAS("of:N*T*Cabracon,ab1803");
MODULE_ALIAS("of:N*T*Cabracon,ab1803C*");
MODULE_ALIAS("of:N*T*Cabracon,ab1804");
MODULE_ALIAS("of:N*T*Cabracon,ab1804C*");
MODULE_ALIAS("of:N*T*Cabracon,ab1805");
MODULE_ALIAS("of:N*T*Cabracon,ab1805C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv1805");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv1805C*");
MODULE_ALIAS("i2c:abx80x");
MODULE_ALIAS("i2c:ab0801");
MODULE_ALIAS("i2c:ab0803");
MODULE_ALIAS("i2c:ab0804");
MODULE_ALIAS("i2c:ab0805");
MODULE_ALIAS("i2c:ab1801");
MODULE_ALIAS("i2c:ab1803");
MODULE_ALIAS("i2c:ab1804");
MODULE_ALIAS("i2c:ab1805");
MODULE_ALIAS("i2c:rv1805");

MODULE_INFO(srcversion, "94971A01EEFC0AA3C6FE334");
