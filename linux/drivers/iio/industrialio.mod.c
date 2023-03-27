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
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1b30de3c, "bus_register" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4392e2ef, "cdev_init" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x99f2d00a, "sysfs_emit_at" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0x1eff33ed, "irq_set_chip" },
	{ 0x53cb9251, "__irq_set_handler" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0x655e4879, "__irq_alloc_descs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xa5a62d7e, "device_del" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xd61eeee, "__bitmap_subset" },
	{ 0xffb7c514, "ida_free" },
	{ 0x70b03a70, "__devres_alloc_node" },
	{ 0x21be9ef2, "device_property_read_string_array" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x292268, "noop_llseek" },
	{ 0x587b0954, "kvasprintf" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xbc41d96d, "device_add" },
	{ 0x2aa6adfe, "bus_find_device" },
	{ 0xe7f1fdf9, "simple_open" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x3533cb47, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xf5e7ea40, "ktime_get_coarse_ts64" },
	{ 0xee20bb56, "compat_ptr_ioctl" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0x3d6a8166, "devm_add_action" },
	{ 0x1acd7981, "module_put" },
	{ 0x406c4cb1, "hrtimer_resolution" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x44239691, "_dev_info" },
	{ 0x912dc8e6, "handle_simple_irq" },
	{ 0x1c5b1f28, "irq_free_descs" },
	{ 0x20dbf27, "bitmap_alloc" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf0d365f8, "anon_inode_getfd" },
	{ 0x1000e51, "schedule" },
	{ 0x6fcf78bb, "cdev_device_add" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xf3e6402e, "__bitmap_equal" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x63848f67, "of_get_property" },
	{ 0x12d5b817, "devres_add" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xb18f4e29, "get_device" },
	{ 0xd0148e6c, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3055489f, "device_initialize" },
	{ 0xb0fb36d4, "of_parse_phandle_with_args" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x293fe0f7, "cdev_device_del" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x66c2c10f, "of_property_match_string" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0xbcc15e75, "ktime_get_coarse_with_offset" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "03E94BA13EC44BAAF7B1B39");
