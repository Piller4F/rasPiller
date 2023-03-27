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
	{ 0x27339f09, "param_ops_int" },
	{ 0xebea4ac9, "dvb_usbv2_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdcb764ad, "memset" },
	{ 0xdd2fd59c, "cypress_load_firmware" },
	{ 0x45bb6277, "param_ops_short" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfb9eee44, "dvb_usbv2_probe" },
	{ 0x21d39b2b, "rc_keydown" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x879a135e, "dvb_ca_en50221_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x1ff02cb9, "dvb_usbv2_disconnect" },
	{ 0x92997ed8, "_printk" },
	{ 0x47a7afa4, "dvb_usbv2_suspend" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa200f9fc, "dvb_ca_en50221_init" },
};

MODULE_INFO(depends, "dvb_usb_v2,cypress_firmware,dvb-core");

MODULE_ALIAS("usb:v13D3p0CCDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14F7p0003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EEB4DB4E5920CDFFEEE1077");
