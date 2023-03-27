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
	{ 0xc793df81, "cdev_del" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x4392e2ef, "cdev_init" },
	{ 0x90ad01fd, "usb_free_all_descriptors" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x98cf60b3, "strlen" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6bfeb6c, "device_destroy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7975d757, "usb_function_unregister" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0xcf672e2, "usb_put_function_instance" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6340127e, "usb_ep_autoconfig" },
	{ 0xffb7c514, "ida_free" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5516e238, "config_group_init_type_name" },
	{ 0x292268, "noop_llseek" },
	{ 0x12284cf8, "device_create" },
	{ 0xce807a25, "up_write" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x910bc89d, "usb_function_register" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xf355108, "cdev_add" },
	{ 0x44239691, "_dev_info" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x551ab123, "class_destroy" },
	{ 0xe6e5a1bd, "usb_assign_descriptors" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x529c1749, "usb_interface_id" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x42824447, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "360F3B21A25E20BA1349746");
