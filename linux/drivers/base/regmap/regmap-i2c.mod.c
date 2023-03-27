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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0xedc84a05, "__devm_regmap_init" },
	{ 0x8b342d78, "i2c_smbus_read_byte_data" },
	{ 0xd93c21f4, "i2c_smbus_read_i2c_block_data" },
	{ 0xa08e1f9f, "i2c_smbus_write_word_data" },
	{ 0xbe2aed38, "i2c_smbus_write_byte_data" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x926884a6, "i2c_smbus_read_word_data" },
	{ 0xe126db3, "__regmap_init" },
	{ 0x6e3bfe2e, "i2c_smbus_read_byte" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0x9c7a58a5, "regmap_get_val_endian" },
	{ 0x43664e27, "i2c_smbus_write_i2c_block_data" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4325A235BB2DAD69709E655");
