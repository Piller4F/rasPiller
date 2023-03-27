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
	{ 0x27339f09, "param_ops_int" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0xe780e06a, "param_ops_ushort" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xb39676af, "__video_register_device" },
	{ 0x1eb7dea6, "si470x_set_freq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x2e72133b, "video_device_release_empty" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe74543f8, "si470x_viddev_template" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x9c684a09, "si470x_ctrl_ops" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0x242f697d, "v4l2_fh_open" },
	{ 0xad7514df, "v4l2_fh_release" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x3424512c, "v4l2_device_put" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0xc08a51b3, "v4l2_device_disconnect" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2ad2dd4, "si470x_stop" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xa6257a2f, "complete" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x791f3313, "v4l2_ctrl_handler_setup" },
	{ 0xaf41c6ab, "si470x_start" },
	{ 0x44239691, "_dev_info" },
	{ 0xd81bd04c, "usb_submit_urb" },
};

MODULE_INFO(depends, "videodev,radio-si470x-common");

MODULE_ALIAS("usb:v10C4p818Ad*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v06E1pA155d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v1B80pD700d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v10C5p819Ad*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v12CFp7111d*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "425D7D57A708B77627D8055");
