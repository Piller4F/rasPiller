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
	{ 0xd6d05ecd, "v4l2_ctrl_cluster" },
	{ 0x3a1ca21b, "gspca_suspend" },
	{ 0x9533bdb4, "gspca_dev_probe" },
	{ 0x6119ed20, "gspca_expo_autogain" },
	{ 0x2ec20129, "gspca_resume" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0xebded627, "gspca_disconnect" },
	{ 0x771f85fb, "input_event" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x92997ed8, "_printk" },
	{ 0x55b0b0ab, "v4l2_ctrl_auto_cluster" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbd190895, "gspca_frame_add" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xb5a63bc6, "usb_register_driver" },
};

MODULE_INFO(depends, "videodev,gspca_main");

MODULE_ALIAS("usb:v06F8p3009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8p301Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2621d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2623d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2624d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2625d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2626d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2627d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2628d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2629d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap262Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap262Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v145Fp013Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1AE7p2001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FDD33D6A23D330DC03F0B02");
