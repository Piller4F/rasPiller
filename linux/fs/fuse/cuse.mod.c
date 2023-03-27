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
	{ 0x722fca6a, "fuse_file_poll" },
	{ 0x292268, "noop_llseek" },
	{ 0xd4c8974a, "misc_deregister" },
	{ 0x551ab123, "class_destroy" },
	{ 0xa0e0c9b1, "misc_register" },
	{ 0x42824447, "__class_create" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd756f964, "fuse_dev_operations" },
	{ 0x921a042a, "fuse_dev_free" },
	{ 0x2dfa53e, "fuse_simple_background" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0xe19e1a54, "fuse_dev_alloc_install" },
	{ 0x5ebf75c8, "fuse_conn_init" },
	{ 0xef6d74ab, "fuse_dev_fiq_ops" },
	{ 0x92997ed8, "_printk" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x683f20ea, "kobject_uevent" },
	{ 0xf355108, "cdev_add" },
	{ 0x1b696b22, "cdev_alloc" },
	{ 0xbc41d96d, "device_add" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0x3055489f, "device_initialize" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x77bc13a0, "strim" },
	{ 0x85df9b6c, "strsep" },
	{ 0x98cf60b3, "strlen" },
	{ 0xd4010db0, "__free_pages" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x499244ea, "fuse_direct_io" },
	{ 0xdcb764ad, "memset" },
	{ 0xa79169ca, "fuse_do_ioctl" },
	{ 0x7ede6dac, "fuse_do_open" },
	{ 0x517ea125, "fuse_conn_get" },
	{ 0xd2e3d170, "fuse_conn_put" },
	{ 0xd8d67d7b, "fuse_sync_release" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x4e1f5dd7, "fuse_dev_release" },
	{ 0xc793df81, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xe71535d7, "device_unregister" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x253b77c6, "fuse_abort_conn" },
};

MODULE_INFO(depends, "fuse");


MODULE_INFO(srcversion, "2AEFF4C6F1A63CE76F7CCD0");
