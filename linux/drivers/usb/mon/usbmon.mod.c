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
	{ 0x1636c666, "usb_mon_register" },
	{ 0x33a860c8, "kmem_cache_destroy" },
	{ 0xc793df81, "cdev_del" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4392e2ef, "cdev_init" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0x89bbafc6, "usb_register_notify" },
	{ 0x1e69b5ad, "usb_debug_root" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x18fcb916, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6bfeb6c, "device_destroy" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xae0ecf40, "usb_bus_idr_lock" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0xa1018fa2, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x12284cf8, "device_create" },
	{ 0xfed11ed1, "usb_mon_deregister" },
	{ 0xf355108, "cdev_add" },
	{ 0x811dc334, "usb_unregister_notify" },
	{ 0x41314665, "kmem_cache_alloc" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x96b759ad, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0x551ab123, "class_destroy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x790be0b9, "usb_bus_idr" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x42824447, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6C5A595E5DB513A4C9F5D4D");
