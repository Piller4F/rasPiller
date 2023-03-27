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
	{ 0x9533bdb4, "gspca_dev_probe" },
	{ 0x2ec20129, "gspca_resume" },
	{ 0x18d8da38, "v4l2_ctrl_g_ctrl" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xebded627, "gspca_disconnect" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x28537419, "usb_set_interface" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x92997ed8, "_printk" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0xbd190895, "gspca_frame_add" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xb5a63bc6, "usb_register_driver" },
};

MODULE_INFO(depends, "gspca_main,videodev");

MODULE_ALIAS("usb:v174Fp6A31d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0574F7837E9CECE6CA9EA74");
