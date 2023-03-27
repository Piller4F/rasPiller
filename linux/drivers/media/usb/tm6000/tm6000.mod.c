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
	{ 0x37dd654, "videobuf_mmap_free" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa10c2a72, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9b6fc2a5, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e72133b, "video_device_release_empty" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x9a093d71, "videobuf_mmap_mapper" },
	{ 0xe1bfdd9d, "v4l2_i2c_new_subdev" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x8ecca152, "videobuf_queue_vmalloc_init" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x66253a35, "usb_reset_configuration" },
	{ 0xe396f4e9, "videobuf_streamon" },
	{ 0xb39676af, "__video_register_device" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5e07f59f, "videobuf_iolock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x604e2abd, "usb_unlink_urb" },
	{ 0x2a4cf6ec, "rc_allocate_device" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x925693e8, "i2c_add_adapter" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xdcb764ad, "memset" },
	{ 0x8606f399, "rc_free_device" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x162079a1, "videobuf_qbuf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0x28537419, "usb_set_interface" },
	{ 0xe1ade170, "v4l2_fh_init" },
	{ 0xdaf45c0a, "v4l2_event_pending" },
	{ 0xa8fc97d3, "v4l2_ctrl_subscribe_event" },
	{ 0x21d39b2b, "rc_keydown" },
	{ 0x5c841839, "videobuf_querybuf" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x3ec5ed95, "rc_register_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x24af8023, "videobuf_read_stream" },
	{ 0xb4af96ed, "usb_free_coherent" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xeb8454c4, "i2c_del_adapter" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0x92997ed8, "_printk" },
	{ 0x8563c491, "videobuf_vmalloc_free" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x85bb9fd3, "videobuf_to_vmalloc" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5b556688, "videobuf_dqbuf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0xfb6674d9, "videobuf_reqbufs" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x29523e22, "v4l2_fh_add" },
	{ 0x607ba935, "v4l2_fh_del" },
	{ 0x5dc49ec9, "v4l2_ctrl_add_handler" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4fcafe41, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0x34bd0881, "v4l2_ctrl_poll" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0xfe97813e, "v4l2_fh_exit" },
	{ 0xa3422c15, "videobuf_streamoff" },
};

MODULE_INFO(depends, "videobuf-core,videodev,videobuf-vmalloc");

MODULE_ALIAS("usb:v6000p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pF332d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pB339d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0086d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3241d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3243d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3264d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "26BD1AE18930960DEC84556");
