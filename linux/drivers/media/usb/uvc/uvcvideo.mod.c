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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa10c2a72, "v4l2_event_unsubscribe" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0x1cf7e1a3, "v4l2_event_queue_fh" },
	{ 0xa8a68ecf, "_dev_printk" },
	{ 0x98cf60b3, "strlen" },
	{ 0xfba71b45, "vb2_mmap" },
	{ 0x1e69b5ad, "usb_debug_root" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0x18fcb916, "no_llseek" },
	{ 0x4e211bac, "vb2_create_bufs" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x4d163890, "vb2_fop_poll" },
	{ 0xe623cbef, "vb2_ioctl_streamon" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf8f3dc64, "vb2_ops_wait_prepare" },
	{ 0xb39676af, "__video_register_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3ec6f939, "usb_autopm_get_interface" },
	{ 0x17ddbd1a, "usb_enable_autosuspend" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0x82737e8, "v4l2_ctrl_merge" },
	{ 0x8afac002, "dma_alloc_noncontiguous" },
	{ 0xdd64e639, "strscpy" },
	{ 0x6a4c9ae1, "dma_free_noncontiguous" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0x771f85fb, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x891b699c, "dma_sync_sg_for_device" },
	{ 0xe36a8c9c, "vb2_vmalloc_memops" },
	{ 0x461ccb2f, "usb_string" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb339a1c6, "vb2_fop_mmap" },
	{ 0x27707a4, "vb2_ioctl_qbuf" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x968a964b, "v4l2_event_subscribe" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb77b0159, "v4l2_prio_init" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0x711552a2, "media_entity_pads_init" },
	{ 0x28537419, "usb_set_interface" },
	{ 0xe1ade170, "v4l2_fh_init" },
	{ 0x9f6d20e2, "vb2_plane_vaddr" },
	{ 0xb62167f8, "vb2_buffer_done" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x2e77dd40, "usb_poison_urb" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0xecd30577, "usb_driver_claim_interface" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xfd1854ea, "vb2_qbuf" },
	{ 0xca3e807a, "vb2_ioctl_prepare_buf" },
	{ 0x9a23b2fc, "vb2_ioctl_create_bufs" },
	{ 0x62bededd, "dma_vmap_noncontiguous" },
	{ 0x53aa85ab, "vb2_querybuf" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x7496b8d, "vb2_ioctl_dqbuf" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xdab46c84, "media_device_cleanup" },
	{ 0x6fff261f, "__arch_clear_user" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x44239691, "_dev_info" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0xf50fecbc, "v4l2_ctrl_replace" },
	{ 0x54966b81, "vb2_streamon" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0xa276598c, "vb2_fop_release" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdf9cb976, "vb2_expbuf" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xc8f4b8f8, "usb_clear_halt" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c45c7f8, "usb_driver_release_interface" },
	{ 0xd6011851, "input_free_device" },
	{ 0x98a0ff40, "v4l2_device_register_subdev" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x1ebc1762, "media_create_pad_link" },
	{ 0xe950db8f, "vb2_reqbufs" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x38b1d863, "usb_get_intf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x242f697d, "v4l2_fh_open" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0x9ad6473d, "v4l2_subdev_init" },
	{ 0x518b5fb6, "vb2_ioctl_querybuf" },
	{ 0x1e5dd4c1, "__media_device_register" },
	{ 0xafa52820, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1b396629, "input_unregister_device" },
	{ 0x3ba9b8b7, "gpiod_to_irq" },
	{ 0xc09a28a, "usb_match_one_id" },
	{ 0x1d188b7b, "dma_sync_sg_for_cpu" },
	{ 0x96848186, "scnprintf" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xde728027, "vb2_ops_wait_finish" },
	{ 0x29523e22, "v4l2_fh_add" },
	{ 0xd308ae6b, "dma_vunmap_noncontiguous" },
	{ 0x607ba935, "v4l2_fh_del" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xa04ead95, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfe3df7b8, "vb2_poll" },
	{ 0x4cb3433b, "media_device_init" },
	{ 0xcb4d661a, "usb_get_current_frame_number" },
	{ 0x28b12cc9, "v4l2_format_info" },
	{ 0xa4824354, "vb2_ioctl_streamoff" },
	{ 0xfab2c400, "vb2_queue_release" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc027c078, "vb2_streamoff" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x88c7a2f5, "media_device_unregister" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0xb0a6d269, "usb_autopm_put_interface" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0xcc891ede, "usb_put_intf" },
	{ 0xe914e41e, "strcpy" },
	{ 0xfd457b8, "gpiod_get_value_cansleep" },
	{ 0xfe97813e, "v4l2_fh_exit" },
	{ 0x6f140995, "input_allocate_device" },
	{ 0x589e1d88, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-vmalloc,mc");

MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0721d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp082Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2641d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2643d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p264Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p7670d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8600d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0516d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Fp2002d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1BCFp0B40d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0201d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0211d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v29FEp4D53d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B03d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip01in*");

MODULE_INFO(srcversion, "B5BC32E2A05C003B6787C94");
