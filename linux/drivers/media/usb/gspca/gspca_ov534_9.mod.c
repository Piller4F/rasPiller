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
	{ 0x98cf60b3, "strlen" },
	{ 0x9533bdb4, "gspca_dev_probe" },
	{ 0x2ec20129, "gspca_resume" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0xebded627, "gspca_disconnect" },
	{ 0x69a0c020, "v4l2_ctrl_new_std_menu" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x92997ed8, "_printk" },
	{ 0x55b0b0ab, "v4l2_ctrl_auto_cluster" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0xbd190895, "gspca_frame_add" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xb5a63bc6, "usb_register_driver" },
};

MODULE_INFO(depends, "gspca_main,videodev");

MODULE_ALIAS("usb:v05A9p8065d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8p3003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A9p1550d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1F465DF04C105D0F90DF11E");
