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
	{ 0xf9a482f9, "msleep" },
	{ 0xb692785d, "dvb_module_probe" },
	{ 0x27339f09, "param_ops_int" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0xebea4ac9, "dvb_usbv2_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x45bb6277, "param_ops_short" },
	{ 0xd4e2a20c, "dvb_usbv2_generic_rw_locked" },
	{ 0x11dddcc, "dvb_usbv2_generic_write_locked" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xfb9eee44, "dvb_usbv2_probe" },
	{ 0x21d39b2b, "rc_keydown" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x1ff02cb9, "dvb_usbv2_disconnect" },
	{ 0xc4015a7, "dvb_module_release" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x47a7afa4, "dvb_usbv2_suspend" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xee3f38f6, "dvb_usbv2_reset_resume" },
	{ 0xfff4ab2a, "m88ds3103_get_agc_pwm" },
};

MODULE_INFO(depends, "dvb-core,dvb_usb_v2,m88ds3103");

MODULE_ALIAS("usb:v0572p6831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p960Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p680Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p0320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC689d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC699d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC68Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC69Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p689Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D832727BD2AAE61AF12873F");
