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
	{ 0xa24f23d8, "__request_module" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7e5f8713, "usb_altnum_to_altsetting" },
	{ 0x27339f09, "param_ops_int" },
	{ 0xd6c3cbd0, "dvb_usb_device_exit" },
	{ 0x4843fe94, "dvb_usb_device_init" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x45bb6277, "param_ops_short" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x28537419, "usb_set_interface" },
	{ 0x21d39b2b, "rc_keydown" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x49642369, "rc_keyup" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa04ead95, "usb_ifnum_to_if" },
	{ 0x2b7e0e3, "rc_repeat" },
};

MODULE_INFO(depends, "dvb-usb");

MODULE_ALIAS("usb:v0DB0p5580d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDp1513d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDp0514d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDp0513d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1498p9206d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1498pA090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3219d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4BF45247815CA345414D31B");
