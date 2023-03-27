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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xda03b072, "securityfs_create_file" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4392e2ef, "cdev_init" },
	{ 0x53b954a2, "up_read" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb86b92b9, "seq_open" },
	{ 0x18fcb916, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x393cac96, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcafcf45e, "seq_write" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xe9e8faeb, "efi_tpm_final_log_size" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdcf25530, "seq_read" },
	{ 0x124977b1, "securityfs_remove" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcd24e146, "hash_digest_size" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xbd7b056, "seq_putc" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x3599f100, "sysfs_remove_link" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xce807a25, "up_write" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x190a48a9, "efi" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x3d6a8166, "devm_add_action" },
	{ 0x44239691, "_dev_info" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6fcf78bb, "cdev_device_add" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x617b026c, "hwrng_register" },
	{ 0x63848f67, "of_get_property" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x4d924f20, "memremap" },
	{ 0xb18f4e29, "get_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa1803e34, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3055489f, "device_initialize" },
	{ 0x74062d06, "securityfs_create_dir" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x551ab123, "class_destroy" },
	{ 0x293fe0f7, "cdev_device_del" },
	{ 0x7a18be34, "compat_only_sysfs_link_entry_to_kobj" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x66c2c10f, "of_property_match_string" },
	{ 0xd84ab0a9, "seq_release" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0xd57fbd31, "hwrng_unregister" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x42824447, "__class_create" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xc8dcc62a, "krealloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2FA34217C7AC2DA87018B6C");
