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
	{ 0x3a1ca21b, "gspca_suspend" },
	{ 0x7e5f8713, "usb_altnum_to_altsetting" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x2ec20129, "gspca_resume" },
	{ 0x18d8da38, "v4l2_ctrl_g_ctrl" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xebded627, "gspca_disconnect" },
	{ 0x86f4c459, "gspca_dev_probe2" },
	{ 0x771f85fb, "input_event" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x28537419, "usb_set_interface" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xfd4a38e0, "__v4l2_ctrl_grab" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc8f4b8f8, "usb_clear_halt" },
	{ 0x92997ed8, "_printk" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0xbd190895, "gspca_frame_add" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xa04ead95, "usb_ifnum_to_if" },
};

MODULE_INFO(depends, "gspca_main,videodev");

MODULE_ALIAS("usb:v0545p8080d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8080d0002dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8080d030Adc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8080d0301dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8002d030Adc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p800Cd030Adc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p800Dd030Adc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9DD04891356A3738908D981");
