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
	{ 0x33a860c8, "kmem_cache_destroy" },
	{ 0xc793df81, "cdev_del" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4392e2ef, "cdev_init" },
	{ 0x53b954a2, "up_read" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xf117ef57, "mtd_block_isbad" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb86b92b9, "seq_open" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x2f07a679, "seq_puts" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x1c10e4de, "mtd_get_device_size" },
	{ 0x18fcb916, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x393cac96, "seq_printf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0x4d616cb9, "mtd_write" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdcf25530, "seq_read" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0x3dee6e02, "mtd_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0xa0e0c9b1, "misc_register" },
	{ 0x9b212f4, "kern_path" },
	{ 0xdcb764ad, "memset" },
	{ 0x6c289ab5, "device_register" },
	{ 0x31a0f1a7, "freezing_slow_path" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0xfd185be7, "mtd_read" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbbc1b23a, "class_unregister" },
	{ 0x1c39f2af, "put_mtd_device" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x10b10fcb, "fixed_size_llseek" },
	{ 0x5a921311, "strncmp" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0xa1018fa2, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xe7f1fdf9, "simple_open" },
	{ 0xce807a25, "up_write" },
	{ 0xac97d5fa, "__class_register" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa227ac39, "mtd_block_markbad" },
	{ 0xf355108, "cdev_add" },
	{ 0xee20bb56, "compat_ptr_ioctl" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x1acd7981, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x41314665, "kmem_cache_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x1000e51, "schedule" },
	{ 0x6fcf78bb, "cdev_device_add" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xfb3120d1, "get_mtd_device" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x76b34c79, "path_put" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbd0ef02e, "get_mtd_device_nm" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xb18f4e29, "get_device" },
	{ 0x96b759ad, "kmem_cache_create" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xa1803e34, "seq_lseek" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x3055489f, "device_initialize" },
	{ 0xca9360b5, "rb_next" },
	{ 0xe71535d7, "device_unregister" },
	{ 0x293fe0f7, "cdev_device_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd84ab0a9, "seq_release" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x71d00a9, "vfs_getattr" },
	{ 0xd4c8974a, "misc_deregister" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x68173019, "try_module_get" },
	{ 0x760a0f4f, "yield" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "7AADEC1A388F7F79C3223D2");
