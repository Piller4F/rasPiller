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
	{ 0xb692785d, "dvb_module_probe" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0xebea4ac9, "dvb_usbv2_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x45bb6277, "param_ops_short" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x28537419, "usb_set_interface" },
	{ 0xfb9eee44, "dvb_usbv2_probe" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x1ff02cb9, "dvb_usbv2_disconnect" },
	{ 0xc4015a7, "dvb_module_release" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x47a7afa4, "dvb_usbv2_suspend" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xee3f38f6, "dvb_usbv2_reset_resume" },
};

MODULE_INFO(depends, "dvb-core,dvb_usb_v2");

MODULE_ALIAS("usb:v0DB0p5581d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E3pF170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7A69p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5CD5F6F96F1CB1F03C65405");
