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
	{ 0x3a1ca21b, "gspca_suspend" },
	{ 0x7e5f8713, "usb_altnum_to_altsetting" },
	{ 0x9533bdb4, "gspca_dev_probe" },
	{ 0x2ec20129, "gspca_resume" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0xebded627, "gspca_disconnect" },
	{ 0x771f85fb, "input_event" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x92997ed8, "_printk" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0xbd190895, "gspca_frame_add" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xa04ead95, "usb_ifnum_to_if" },
	{ 0x4fcafe41, "usb_alloc_coherent" },
	{ 0x7d7404bc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "gspca_main,videodev");

MODULE_ALIAS("usb:v04C8p0720d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "41A9E6453EDBD33D2106744");
