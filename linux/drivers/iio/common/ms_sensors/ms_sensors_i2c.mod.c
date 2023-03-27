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
	{ 0xd93c21f4, "i2c_smbus_read_i2c_block_data" },
	{ 0xbe2aed38, "i2c_smbus_write_byte_data" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x926884a6, "i2c_smbus_read_word_data" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x18e442e, "i2c_smbus_write_byte" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "76BF1D5E426DC453282F515");
