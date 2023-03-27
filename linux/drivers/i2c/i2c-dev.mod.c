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
	{ 0x18fcb916, "no_llseek" },
	{ 0xe4a11457, "bus_unregister_notifier" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xd83c1a39, "i2c_for_each_dev" },
	{ 0x551ab123, "class_destroy" },
	{ 0x874ca170, "bus_register_notifier" },
	{ 0x7de0bb33, "i2c_bus_type" },
	{ 0x42824447, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xdcb764ad, "memset" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x37a20e4e, "i2c_smbus_xfer" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x293fe0f7, "cdev_device_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x58dfd189, "i2c_get_adapter" },
	{ 0x92997ed8, "_printk" },
	{ 0x6fcf78bb, "cdev_device_add" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0x3055489f, "device_initialize" },
	{ 0x4392e2ef, "cdev_init" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xfc1621b2, "i2c_verify_client" },
	{ 0xbb2283d, "device_for_each_child" },
	{ 0x17cce949, "i2c_adapter_type" },
	{ 0xa22b682b, "i2c_put_adapter" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8C0CAD423B93883353EBACF");
