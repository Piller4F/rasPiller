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
	{ 0xd103296d, "kobject_put" },
	{ 0x1b696b22, "cdev_alloc" },
	{ 0xc793df81, "cdev_del" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x683f20ea, "kobject_uevent" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xbec33c93, "kobject_set_name" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe0f91e74, "kobject_create_and_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xa5a62d7e, "device_del" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbbc1b23a, "class_unregister" },
	{ 0xdec0b49c, "fasync_helper" },
	{ 0x70b03a70, "__devres_alloc_node" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x292268, "noop_llseek" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xbc41d96d, "device_add" },
	{ 0x1c0e14cd, "kobject_add" },
	{ 0xac97d5fa, "__class_register" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xf355108, "cdev_add" },
	{ 0x1acd7981, "module_put" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x12d5b817, "devres_add" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xb18f4e29, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69d7d62c, "remap_pfn_range" },
	{ 0x3055489f, "device_initialize" },
	{ 0x5e586d32, "kobject_init" },
	{ 0xf6db38dd, "kill_fasync" },
	{ 0xe71535d7, "device_unregister" },
	{ 0xd9edceee, "vmalloc_to_page" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x68173019, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "576830B64A716C772B1C8BF");
