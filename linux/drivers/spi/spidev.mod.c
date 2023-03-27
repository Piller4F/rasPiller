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
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x18fcb916, "no_llseek" },
	{ 0x20105980, "driver_unregister" },
	{ 0x551ab123, "class_destroy" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x42824447, "__class_create" },
	{ 0x845319c9, "__register_chrdev" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x73b71578, "spi_setup" },
	{ 0xb18f4e29, "get_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6bfeb6c, "device_destroy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2715240, "spi_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x12284cf8, "device_create" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8d1f6bc1, "stream_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x555a9553, "spi_slave_abort" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crohm,dh2228fv");
MODULE_ALIAS("of:N*T*Crohm,dh2228fvC*");
MODULE_ALIAS("of:N*T*Clineartechnology,ltc2488");
MODULE_ALIAS("of:N*T*Clineartechnology,ltc2488C*");
MODULE_ALIAS("of:N*T*Csemtech,sx1301");
MODULE_ALIAS("of:N*T*Csemtech,sx1301C*");
MODULE_ALIAS("of:N*T*Clwn,bk4");
MODULE_ALIAS("of:N*T*Clwn,bk4C*");
MODULE_ALIAS("of:N*T*Cdh,dhcom-board");
MODULE_ALIAS("of:N*T*Cdh,dhcom-boardC*");
MODULE_ALIAS("of:N*T*Cmenlo,m53cpld");
MODULE_ALIAS("of:N*T*Cmenlo,m53cpldC*");
MODULE_ALIAS("of:N*T*Ccisco,spi-petra");
MODULE_ALIAS("of:N*T*Ccisco,spi-petraC*");
MODULE_ALIAS("of:N*T*Cmicron,spi-authenta");
MODULE_ALIAS("of:N*T*Cmicron,spi-authentaC*");
MODULE_ALIAS("spi:spidev");
MODULE_ALIAS("spi:dh2228fv");
MODULE_ALIAS("spi:ltc2488");
MODULE_ALIAS("spi:sx1301");
MODULE_ALIAS("spi:bk4");
MODULE_ALIAS("spi:dhcom-board");
MODULE_ALIAS("spi:m53cpld");
MODULE_ALIAS("spi:spi-petra");
MODULE_ALIAS("spi:spi-authenta");

MODULE_INFO(srcversion, "0A74AB895EB18D8CAF8C7E2");
