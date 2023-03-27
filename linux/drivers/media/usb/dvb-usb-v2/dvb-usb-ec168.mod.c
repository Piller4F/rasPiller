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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xebea4ac9, "dvb_usbv2_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x45bb6277, "param_ops_short" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xfb9eee44, "dvb_usbv2_probe" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x1ff02cb9, "dvb_usbv2_disconnect" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x47a7afa4, "dvb_usbv2_suspend" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
};

MODULE_INFO(depends, "dvb_usb_v2");

MODULE_ALIAS("usb:v18B4p1689d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18B4pFFFAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18B4pFFFBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18B4p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18B4p1002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C0336F3A09E924D6B62C3AB");
