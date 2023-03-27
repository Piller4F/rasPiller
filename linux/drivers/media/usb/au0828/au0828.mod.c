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
	{ 0x2bf83885, "vb2_ioctl_reqbufs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa10c2a72, "v4l2_event_unsubscribe" },
	{ 0xbb94e63f, "media_device_usb_allocate" },
	{ 0x9b6fc2a5, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x79e3e07b, "__media_pipeline_start" },
	{ 0x259d1020, "media_device_unregister_entity_notify" },
	{ 0x2144f743, "_vb2_fop_release" },
	{ 0x2e72133b, "video_device_release_empty" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x54abe4ff, "dvb_dmx_init" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7fec7234, "dvb_unregister_adapter" },
	{ 0x5f29f894, "media_device_unregister_entity" },
	{ 0xe1bfdd9d, "v4l2_i2c_new_subdev" },
	{ 0x52ef1333, "dvb_create_media_graph" },
	{ 0x4220e671, "v4l2_ctrl_log_status" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0xacd66670, "dvb_frontend_suspend" },
	{ 0x51892333, "dvb_register_frontend" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0x1ff97ca9, "dvb_frontend_resume" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x4d163890, "vb2_fop_poll" },
	{ 0x46ec7741, "v4l2_mc_create_media_graph" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe623cbef, "vb2_ioctl_streamon" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0xc634fcfa, "v4l_disable_media_source" },
	{ 0xf8f3dc64, "vb2_ops_wait_prepare" },
	{ 0xdf10ebfc, "media_device_delete" },
	{ 0x80e8f56c, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb39676af, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xbf3fe0b5, "media_entity_setup_link" },
	{ 0xc54c3347, "media_get_pad_index" },
	{ 0x604e2abd, "usb_unlink_urb" },
	{ 0x2a4cf6ec, "rc_allocate_device" },
	{ 0x3457e2a1, "dvb_net_release" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x925693e8, "i2c_add_adapter" },
	{ 0xa202ed06, "dvb_frontend_detach" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0xf619454c, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc08a51b3, "v4l2_device_disconnect" },
	{ 0xdcb764ad, "memset" },
	{ 0xe36a8c9c, "vb2_vmalloc_memops" },
	{ 0x8606f399, "rc_free_device" },
	{ 0x45bb6277, "param_ops_short" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb339a1c6, "vb2_fop_mmap" },
	{ 0x27707a4, "vb2_ioctl_qbuf" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x929100b5, "dvb_dmxdev_release" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x711552a2, "media_entity_pads_init" },
	{ 0x3fe65da2, "dvb_net_init" },
	{ 0x28537419, "usb_set_interface" },
	{ 0xa8fc97d3, "v4l2_ctrl_subscribe_event" },
	{ 0x9f6d20e2, "vb2_plane_vaddr" },
	{ 0xb62167f8, "vb2_buffer_done" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x3ec5ed95, "rc_register_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xca3e807a, "vb2_ioctl_prepare_buf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x52c2f4b9, "tveeprom_read" },
	{ 0x9a23b2fc, "vb2_ioctl_create_bufs" },
	{ 0xb4af96ed, "usb_free_coherent" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9263a063, "dvb_dmx_release" },
	{ 0x7496b8d, "vb2_ioctl_dqbuf" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x6fa005be, "v4l_enable_media_source" },
	{ 0x90a2a75e, "media_device_register_entity" },
	{ 0xeb8454c4, "i2c_del_adapter" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0xb473dcff, "media_device_register_entity_notify" },
	{ 0x18acd31f, "dvb_dmx_swfilter_packets" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbdcfdc01, "__media_pipeline_stop" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x1ebc1762, "media_create_pad_link" },
	{ 0xabcce634, "dvb_register_adapter" },
	{ 0xa23f0bc0, "vb2_video_unregister_device" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x242f697d, "v4l2_fh_open" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0x518b5fb6, "vb2_ioctl_querybuf" },
	{ 0x1e5dd4c1, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x31210ced, "__media_entity_setup_link" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xde728027, "vb2_ops_wait_finish" },
	{ 0xf21d2d67, "ir_raw_event_store" },
	{ 0x4fc1646e, "i2c_probe_func_quick_read" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa04ead95, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x88b86669, "vb2_ioctl_expbuf" },
	{ 0x4fcafe41, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa4824354, "vb2_ioctl_streamoff" },
	{ 0x3424512c, "v4l2_device_put" },
	{ 0xa922a3a9, "ir_raw_event_handle" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0x4f2473b2, "dvb_dmxdev_init" },
	{ 0x589e1d88, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,dvb-core,tveeprom,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7D008C48774224269087032");
