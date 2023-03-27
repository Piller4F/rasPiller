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
	{ 0xa10c2a72, "v4l2_event_unsubscribe" },
	{ 0xa8fc97d3, "v4l2_ctrl_subscribe_event" },
	{ 0x4220e671, "v4l2_ctrl_log_status" },
	{ 0xad7514df, "v4l2_fh_release" },
	{ 0x242f697d, "v4l2_fh_open" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0x34bd0881, "v4l2_ctrl_poll" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x44239691, "_dev_info" },
	{ 0x791f3313, "v4l2_ctrl_handler_setup" },
	{ 0xb39676af, "__video_register_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e72133b, "video_device_release_empty" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0x69a0c020, "v4l2_ctrl_new_std_menu" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x3424512c, "v4l2_device_put" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc08a51b3, "v4l2_device_disconnect" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xae9af301, "usb_control_msg" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("usb:v046Dp0A0Ed*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "59E0A84C5C754A49FB293A7");
