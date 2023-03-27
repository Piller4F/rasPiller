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
	{ 0x69f4ec3c, "w1_unregister_family" },
	{ 0xd613272c, "w1_register_family" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x92997ed8, "_printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe914e41e, "strcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x63757e92, "w1_calc_crc8" },
	{ 0xa353aef4, "device_create_file" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xdfe1587, "w1_touch_bit" },
	{ 0x6fe8451e, "device_remove_file" },
	{ 0x37a0cba, "kfree" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x5265c0e, "w1_next_pullup" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x5a921311, "strncmp" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc8216a8e, "w1_write_block" },
	{ 0xd311292d, "w1_read_block" },
	{ 0x13040d69, "w1_read_8" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdc46b475, "w1_write_8" },
	{ 0x72a8142e, "w1_reset_bus" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x44239691, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x3b6c41ea, "kstrtouint" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "04F9691F6320AC31570B3F8");
