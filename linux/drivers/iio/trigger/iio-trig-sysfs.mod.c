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
	{ 0x399bf1c8, "iio_bus_type" },
	{ 0xe71535d7, "device_unregister" },
	{ 0xdb6d48b2, "put_device" },
	{ 0xbc41d96d, "device_add" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0x3055489f, "device_initialize" },
	{ 0xd0148e6c, "__module_get" },
	{ 0x691a2aa, "__iio_trigger_register" },
	{ 0x50bae383, "iio_trigger_alloc" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xe8874a05, "irq_work_queue" },
	{ 0x3527b04a, "iio_trigger_poll" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1acd7981, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x743c042e, "iio_trigger_free" },
	{ 0xc672a391, "irq_work_sync" },
	{ 0xd44bc8d2, "iio_trigger_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "5EDAD5CE5F18B35690748AB");
