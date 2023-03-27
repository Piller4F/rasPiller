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
	{ 0xa10c2a72, "v4l2_event_unsubscribe" },
	{ 0xa8fc97d3, "v4l2_ctrl_subscribe_event" },
	{ 0x4220e671, "v4l2_ctrl_log_status" },
	{ 0xa4824354, "vb2_ioctl_streamoff" },
	{ 0xe623cbef, "vb2_ioctl_streamon" },
	{ 0x7496b8d, "vb2_ioctl_dqbuf" },
	{ 0x27707a4, "vb2_ioctl_qbuf" },
	{ 0x518b5fb6, "vb2_ioctl_querybuf" },
	{ 0x2bf83885, "vb2_ioctl_reqbufs" },
	{ 0xa276598c, "vb2_fop_release" },
	{ 0xb339a1c6, "vb2_fop_mmap" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0x4d163890, "vb2_fop_poll" },
	{ 0xf619454c, "vb2_fop_read" },
	{ 0xde728027, "vb2_ops_wait_finish" },
	{ 0xf8f3dc64, "vb2_ops_wait_prepare" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xb39676af, "__video_register_device" },
	{ 0x589e1d88, "vb2_queue_init" },
	{ 0xe36a8c9c, "vb2_vmalloc_memops" },
	{ 0x9c74acf9, "v4l2_ctrl_new_custom" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7241c452, "usb_reset_device" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0xc08a51b3, "v4l2_device_disconnect" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x242f697d, "v4l2_fh_open" },
	{ 0x44239691, "_dev_info" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x999e8297, "vfree" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37a0cba, "kfree" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x660e10cf, "__v4l2_ctrl_s_ctrl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfaf1442c, "usb_bulk_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0xb62167f8, "vb2_buffer_done" },
	{ 0x9f6d20e2, "vb2_plane_vaddr" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x92997ed8, "_printk" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "videodev,videobuf2-v4l2,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v1943p2255d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2257d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6FE0135517C909431A9F37F");
