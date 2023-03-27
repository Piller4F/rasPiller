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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa10c2a72, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6d05ecd, "v4l2_ctrl_cluster" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x4220e671, "v4l2_ctrl_log_status" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0xb39676af, "__video_register_device" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdbb86f02, "v4l2_ctrl_activate" },
	{ 0xdd64e639, "strscpy" },
	{ 0x925693e8, "i2c_add_adapter" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x69a0c020, "v4l2_ctrl_new_std_menu" },
	{ 0xc08a51b3, "v4l2_device_disconnect" },
	{ 0xdcb764ad, "memset" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x6e1fa6b9, "i2c_new_client_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0xe1ade170, "v4l2_fh_init" },
	{ 0xa8fc97d3, "v4l2_ctrl_subscribe_event" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xad7514df, "v4l2_fh_release" },
	{ 0xb4af96ed, "usb_free_coherent" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xeb8454c4, "i2c_del_adapter" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfaf1442c, "usb_bulk_msg" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x791f3313, "v4l2_ctrl_handler_setup" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x29523e22, "v4l2_fh_add" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4fcafe41, "usb_alloc_coherent" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0x34bd0881, "v4l2_ctrl_poll" },
	{ 0x7d7404bc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "videodev,v4l2-dv-timings");

MODULE_ALIAS("usb:v2040p4900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4982d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4903d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "23C9E7CDF1EB5BFB3A704F3");
