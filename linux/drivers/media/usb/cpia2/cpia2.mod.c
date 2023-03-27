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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa10c2a72, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd6d05ecd, "v4l2_ctrl_cluster" },
	{ 0x2e72133b, "video_device_release_empty" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xb39676af, "__video_register_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x69a0c020, "v4l2_ctrl_new_std_menu" },
	{ 0xc08a51b3, "v4l2_device_disconnect" },
	{ 0xdcb764ad, "memset" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0x28537419, "usb_set_interface" },
	{ 0xa8fc97d3, "v4l2_ctrl_subscribe_event" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xad7514df, "v4l2_fh_release" },
	{ 0xd8a0ec97, "v4l2_fh_is_singular" },
	{ 0x9c74acf9, "v4l2_ctrl_new_custom" },
	{ 0xfd4a38e0, "__v4l2_ctrl_grab" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x44239691, "_dev_info" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x791f3313, "v4l2_ctrl_handler_setup" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x242f697d, "v4l2_fh_open" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x69d7d62c, "remap_pfn_range" },
	{ 0x4829a47e, "memcpy" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd9edceee, "vmalloc_to_page" },
	{ 0x3424512c, "v4l2_device_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0x34bd0881, "v4l2_ctrl_poll" },
	{ 0x7d7404bc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("usb:v0553p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0553p0140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0553p0151d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "18A16F3BA9DFFF1049D86AA");
