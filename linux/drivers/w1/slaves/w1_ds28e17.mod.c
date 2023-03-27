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
	{ 0x27339f09, "param_ops_int" },
	{ 0xa787a109, "param_ops_byte" },
	{ 0x69f4ec3c, "w1_unregister_family" },
	{ 0xd613272c, "w1_register_family" },
	{ 0x925693e8, "i2c_add_adapter" },
	{ 0xe914e41e, "strcpy" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x83e5e0c8, "w1_reset_resume_command" },
	{ 0xd311292d, "w1_read_block" },
	{ 0xbd6841d4, "crc16" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xdfe1587, "w1_touch_bit" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x8c1398da, "devm_kfree" },
	{ 0xeb8454c4, "i2c_del_adapter" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x13040d69, "w1_read_8" },
	{ 0xdc46b475, "w1_write_8" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x44239691, "_dev_info" },
	{ 0xc8216a8e, "w1_write_block" },
	{ 0xbb99ae8c, "w1_reset_select_slave" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "596DA5B591B6BF120E4C603");
