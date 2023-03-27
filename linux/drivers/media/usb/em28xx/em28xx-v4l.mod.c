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
	{ 0x1f62ffe5, "em28xx_read_reg" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa10c2a72, "v4l2_event_unsubscribe" },
	{ 0x2e72133b, "video_device_release_empty" },
	{ 0xa8a68ecf, "_dev_printk" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x5f29f894, "media_device_unregister_entity" },
	{ 0xe1bfdd9d, "v4l2_i2c_new_subdev" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x614dd5a, "v4l2_video_std_frame_period" },
	{ 0xf6e13467, "em28xx_write_regs" },
	{ 0x228a00a4, "v4l2_ctrl_notify" },
	{ 0xcb8a4942, "em28xx_setup_xc3028" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0xf2a353ac, "v4l2_i2c_tuner_addrs" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x4d163890, "vb2_fop_poll" },
	{ 0x46ec7741, "v4l2_mc_create_media_graph" },
	{ 0xe623cbef, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf8f3dc64, "vb2_ops_wait_prepare" },
	{ 0x88b09182, "em28xx_init_usb_xfer" },
	{ 0xb39676af, "__video_register_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1b8a30d0, "em28xx_register_extension" },
	{ 0xdd64e639, "strscpy" },
	{ 0xbf3fe0b5, "media_entity_setup_link" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0xf619454c, "vb2_fop_read" },
	{ 0xc08a51b3, "v4l2_device_disconnect" },
	{ 0xdcb764ad, "memset" },
	{ 0xe36a8c9c, "vb2_vmalloc_memops" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb339a1c6, "vb2_fop_mmap" },
	{ 0x27707a4, "vb2_ioctl_qbuf" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0x711552a2, "media_entity_pads_init" },
	{ 0x28537419, "usb_set_interface" },
	{ 0xa8fc97d3, "v4l2_ctrl_subscribe_event" },
	{ 0x9f6d20e2, "vb2_plane_vaddr" },
	{ 0xb62167f8, "vb2_buffer_done" },
	{ 0xe7a5d416, "em28xx_unregister_extension" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xca3e807a, "vb2_ioctl_prepare_buf" },
	{ 0x28fbe3a0, "em28xx_uninit_usb_xfer" },
	{ 0x9a23b2fc, "vb2_ioctl_create_bufs" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x7496b8d, "vb2_ioctl_dqbuf" },
	{ 0x90a2a75e, "media_device_register_entity" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x44239691, "_dev_info" },
	{ 0x89d04ac4, "v4l2_ctrl_find" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xa276598c, "vb2_fop_release" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x901eb857, "em28xx_audio_setup" },
	{ 0x791f3313, "v4l2_ctrl_handler_setup" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x417cbcb3, "v4l2_i2c_subdev_addr" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x242f697d, "v4l2_fh_open" },
	{ 0x2de27375, "em28xx_set_mode" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x518b5fb6, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xde728027, "vb2_ops_wait_finish" },
	{ 0x626f2826, "em28xx_stop_urbs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x984d234f, "em28xx_write_reg" },
	{ 0xef1e3481, "em28xx_audio_analog_set" },
	{ 0xa4824354, "vb2_ioctl_streamoff" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0x2c234164, "em28xx_init_camera" },
	{ 0x589e1d88, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,em28xx,videodev,mc,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "67196A2C3CB48CA8AEA9C5A");
