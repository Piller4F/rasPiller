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
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xb39676af, "__video_register_device" },
	{ 0x8ecca152, "videobuf_queue_vmalloc_init" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2e72133b, "video_device_release_empty" },
	{ 0xdcb764ad, "memset" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x85bb9fd3, "videobuf_to_vmalloc" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd7d2950a, "videobuf_read_one" },
	{ 0xe396f4e9, "videobuf_streamon" },
	{ 0x791f3313, "v4l2_ctrl_handler_setup" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x52b307b9, "videobuf_queue_is_busy" },
	{ 0xad7514df, "v4l2_fh_release" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x37dd654, "videobuf_mmap_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x2e9ef5fa, "videobuf_poll_stream" },
	{ 0x34bd0881, "v4l2_ctrl_poll" },
	{ 0x9a093d71, "videobuf_mmap_mapper" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x242f697d, "v4l2_fh_open" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xfb6674d9, "videobuf_reqbufs" },
	{ 0x5c841839, "videobuf_querybuf" },
	{ 0x162079a1, "videobuf_qbuf" },
	{ 0x5b556688, "videobuf_dqbuf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa3422c15, "videobuf_streamoff" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0xdd64e639, "strscpy" },
	{ 0x5e07f59f, "videobuf_iolock" },
	{ 0x8563c491, "videobuf_vmalloc_free" },
	{ 0x3424512c, "v4l2_device_put" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc08a51b3, "v4l2_device_disconnect" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0x44239691, "_dev_info" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x92997ed8, "_printk" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x7d7404bc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "videodev,videobuf-vmalloc,videobuf-core");

MODULE_ALIAS("usb:v08CAp0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p0108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p3108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0595p4343d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BB0p500Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FEBp2004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpB500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1A18d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04C8p0729d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pA208d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0784p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p004Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep405Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4208E48B2B1459D9A11118E");
