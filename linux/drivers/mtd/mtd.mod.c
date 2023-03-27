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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0x4558a487, "single_open" },
	{ 0xe61d59d0, "proc_create_single_data" },
	{ 0x72d7597c, "nvmem_register" },
	{ 0x68bae379, "single_release" },
	{ 0x2f07a679, "seq_puts" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb92dc6fb, "deactivate_locked_super" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x393cac96, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9fd9723a, "sysfs_create_files" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0xc6bfeb6c, "device_destroy" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x845319c9, "__register_chrdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa8bee638, "of_device_is_compatible" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0xdcf25530, "seq_read" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x34c7cdbc, "lookup_bdev" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xdcb764ad, "memset" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x6c289ab5, "device_register" },
	{ 0xe0398cb, "bdi_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbbc1b23a, "class_unregister" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x10b10fcb, "fixed_size_llseek" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x12284cf8, "device_create" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xbb450592, "of_prop_next_string" },
	{ 0xac97d5fa, "__class_register" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xf1d26d04, "of_get_child_by_name" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x1acd7981, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x30e205ea, "bdi_put" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd0148e6c, "__module_get" },
	{ 0x3f6120ce, "sysfs_remove_files" },
	{ 0x3182ebed, "logfc" },
	{ 0xe315b3eb, "of_node_get" },
	{ 0xa1803e34, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbe6d0d20, "sget_fc" },
	{ 0xcc39c03e, "nvmem_unregister" },
	{ 0xe71535d7, "device_unregister" },
	{ 0xf2cc4be5, "bdi_register" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x834a526, "of_get_compatible_child" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x68173019, "try_module_get" },
	{ 0x45f47dc0, "generic_shutdown_super" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "63E6A857F019A75A570C88A");
