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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6d05ecd, "v4l2_ctrl_cluster" },
	{ 0x3a1ca21b, "gspca_suspend" },
	{ 0x9533bdb4, "gspca_dev_probe" },
	{ 0x2ec20129, "gspca_resume" },
	{ 0x18d8da38, "v4l2_ctrl_g_ctrl" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xebded627, "gspca_disconnect" },
	{ 0x771f85fb, "input_event" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xdcb764ad, "memset" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x660e10cf, "__v4l2_ctrl_s_ctrl" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x55b0b0ab, "v4l2_ctrl_auto_cluster" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbd190895, "gspca_frame_add" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xa04ead95, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
};

MODULE_INFO(depends, "videodev,gspca_main");

MODULE_ALIAS("usb:v0C45p6240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6242d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6248d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p624Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p624Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p624Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6253d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6270d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p627Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p627Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p627Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6282d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6288d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p628Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p628Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p628Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p62A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p62B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p62B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p62BBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p62BCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep00F4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v145Fp013Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p7029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p7045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p704Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p704Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0618d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0614d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0615d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0617d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EC9D4515E8D25F6458D8F4B");
