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
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x4829a47e, "memcpy" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x5265c0e, "w1_next_pullup" },
	{ 0xf9a482f9, "msleep" },
	{ 0x72a8142e, "w1_reset_bus" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xdc46b475, "w1_write_8" },
	{ 0xbd6841d4, "crc16" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd311292d, "w1_read_block" },
	{ 0xc8216a8e, "w1_write_block" },
	{ 0xbb99ae8c, "w1_reset_select_slave" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "68DB5279E59BC5A68D9D130");
