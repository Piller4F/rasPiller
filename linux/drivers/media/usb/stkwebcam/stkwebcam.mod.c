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
	{ 0xf9a482f9, "msleep" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x2cd20d01, "remap_vmalloc_range" },
	{ 0x4220e671, "v4l2_ctrl_log_status" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0xb39676af, "__video_register_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3ec6f939, "usb_autopm_get_interface" },
	{ 0x999e8297, "vfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xdcb764ad, "memset" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0x28537419, "usb_set_interface" },
	{ 0xa8fc97d3, "v4l2_ctrl_subscribe_event" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xad7514df, "v4l2_fh_release" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x38b1d863, "usb_get_intf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x242f697d, "v4l2_fh_open" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0x34bd0881, "v4l2_ctrl_poll" },
	{ 0xb0a6d269, "usb_autopm_put_interface" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0xcc891ede, "usb_put_intf" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("usb:v174FpA311d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v05E1p0501d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "833283A2D2783146F6A9D74");
