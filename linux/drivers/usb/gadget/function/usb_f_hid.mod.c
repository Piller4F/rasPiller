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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x4392e2ef, "cdev_init" },
	{ 0xc93bdc96, "usb_gstrings_attach" },
	{ 0x90ad01fd, "usb_free_all_descriptors" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7975d757, "usb_function_unregister" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0xcf672e2, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6340127e, "usb_ep_autoconfig" },
	{ 0xffb7c514, "ida_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5516e238, "config_group_init_type_name" },
	{ 0x292268, "noop_llseek" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xb41e3eae, "devm_kmemdup" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x910bc89d, "usb_function_register" },
	{ 0xb775db55, "alloc_ep_req" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x6fcf78bb, "cdev_device_add" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xdc965b3, "config_ep_by_speed" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3055489f, "device_initialize" },
	{ 0x551ab123, "class_destroy" },
	{ 0xe6e5a1bd, "usb_assign_descriptors" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x529c1749, "usb_interface_id" },
	{ 0x293fe0f7, "cdev_device_del" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0x42824447, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc8dcc62a, "krealloc" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "9F92480D7299BC3F45D0269");
