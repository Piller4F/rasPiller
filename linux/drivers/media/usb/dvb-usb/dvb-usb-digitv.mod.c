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
	{ 0xf9a482f9, "msleep" },
	{ 0x27e0b99, "dvb_usb_generic_write" },
	{ 0x27339f09, "param_ops_int" },
	{ 0xd6c3cbd0, "dvb_usb_device_exit" },
	{ 0x4843fe94, "dvb_usb_device_init" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x45bb6277, "param_ops_short" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xf4cd5a0c, "dvb_usb_generic_rw" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
};

MODULE_INFO(depends, "dvb-usb");

MODULE_ALIAS("usb:v0547p0201d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E77BE1B9D065FE0ECFD2E63");
