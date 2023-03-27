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
	{ 0x4d1d285c, "tpg_init" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa10c2a72, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd6d05ecd, "v4l2_ctrl_cluster" },
	{ 0x2e72133b, "video_device_release_empty" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x27339f09, "param_ops_int" },
	{ 0xc6110b6e, "tpg_free" },
	{ 0xa5e16d49, "v4l2_event_queue" },
	{ 0xf4aef3a4, "tpg_gen_text" },
	{ 0x4220e671, "v4l2_ctrl_log_status" },
	{ 0x60ccffd4, "dma_set_mask" },
	{ 0x3005a48, "tpg_alloc" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0xa97e00eb, "v4l2_detect_cvt" },
	{ 0x86b914d1, "__v4l2_ctrl_modify_range" },
	{ 0x18d8da38, "v4l2_ctrl_g_ctrl" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x4d163890, "vb2_fop_poll" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x86b4ddf7, "tpg_reset_source" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xe623cbef, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf8f3dc64, "vb2_ops_wait_prepare" },
	{ 0xb39676af, "__video_register_device" },
	{ 0x3e01447f, "cfb_fillrect" },
	{ 0x5ca95f0c, "vb2_request_validate" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xdbb86f02, "v4l2_ctrl_activate" },
	{ 0xdd64e639, "strscpy" },
	{ 0xaf3d134, "v4l2_valid_dv_timings" },
	{ 0xc6808be7, "tpg_calc_text_basep" },
	{ 0x7a5d8c0b, "tpg_update_mv_step" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x5966c90b, "dma_set_coherent_mask" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x756516e7, "tpg_s_fourcc" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0xae575c8f, "v4l2_phys_addr_for_input" },
	{ 0xf619454c, "vb2_fop_read" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0x69a0c020, "v4l2_ctrl_new_std_menu" },
	{ 0x6960e899, "tpg_s_crop_compose" },
	{ 0xdcb764ad, "memset" },
	{ 0x36667bfa, "vb2_request_queue" },
	{ 0xe36a8c9c, "vb2_vmalloc_memops" },
	{ 0xbe4de675, "cec_get_edid_phys_addr" },
	{ 0x51c8f002, "cfb_imageblit" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6026aaf0, "tpg_log_status" },
	{ 0xb339a1c6, "vb2_fop_mmap" },
	{ 0x31a0f1a7, "freezing_slow_path" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x27707a4, "vb2_ioctl_qbuf" },
	{ 0x1612c0b, "v4l2_detect_gtf" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0x3802ed54, "cec_unregister_adapter" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0x711552a2, "media_entity_pads_init" },
	{ 0xa8fc97d3, "v4l2_ctrl_subscribe_event" },
	{ 0x2d4daef5, "find_font" },
	{ 0x9f6d20e2, "vb2_plane_vaddr" },
	{ 0xb62167f8, "vb2_buffer_done" },
	{ 0x9679f83b, "register_framebuffer" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xaa5503d9, "tpg_set_font" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xad7514df, "v4l2_fh_release" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x370cfe6e, "v4l2_dv_timings_presets" },
	{ 0xd8a0ec97, "v4l2_fh_is_singular" },
	{ 0xca3e807a, "vb2_ioctl_prepare_buf" },
	{ 0xefbfd9c, "platform_device_unregister" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x9c74acf9, "v4l2_ctrl_new_custom" },
	{ 0x9a23b2fc, "vb2_ioctl_create_bufs" },
	{ 0xce8159bb, "tpg_pattern_strings" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x72770cf2, "v4l2_ctrl_request_setup" },
	{ 0x7496b8d, "vb2_ioctl_dqbuf" },
	{ 0xfd4a38e0, "__v4l2_ctrl_grab" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x231cb31a, "__v4l2_ctrl_s_ctrl_string" },
	{ 0x958448b, "v4l2_set_edid_phys_addr" },
	{ 0xdab46c84, "media_device_cleanup" },
	{ 0x660e10cf, "__v4l2_ctrl_s_ctrl" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xc6cbbc89, "capable" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xbc219274, "platform_device_register" },
	{ 0xa276598c, "vb2_fop_release" },
	{ 0x8ec17bd8, "v4l2_ctrl_request_complete" },
	{ 0x90538661, "vb2_queue_error" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x791f3313, "v4l2_ctrl_handler_setup" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x8912d060, "vb2_fop_write" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x55b0b0ab, "v4l2_ctrl_auto_cluster" },
	{ 0x517e7ccd, "tpg_fill_plane_buffer" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xa23f0bc0, "vb2_video_unregister_device" },
	{ 0x3aa68d7a, "v4l2_find_dv_timings_cap" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x242f697d, "v4l2_fh_open" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x518b5fb6, "vb2_ioctl_querybuf" },
	{ 0x1e5dd4c1, "__media_device_register" },
	{ 0xf969db04, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x40dc7cd, "tpg_aspect_strings" },
	{ 0xcdf08f98, "cec_s_phys_addr" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0x1e518618, "v4l2_src_change_event_subscribe" },
	{ 0xde728027, "vb2_ops_wait_finish" },
	{ 0x5dc49ec9, "v4l2_ctrl_add_handler" },
	{ 0x1437bb85, "cfb_copyarea" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4cb3433b, "media_device_init" },
	{ 0x88b86669, "vb2_ioctl_expbuf" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0xa4824354, "vb2_ioctl_streamoff" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x3424512c, "v4l2_device_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8d130bdf, "v4l2_event_wake_all" },
	{ 0x7b6ac78f, "v4l2_phys_addr_validate" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x88c7a2f5, "media_device_unregister" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0x922ecd29, "v4l2_enum_dv_timings_cap" },
	{ 0x34bd0881, "v4l2_ctrl_poll" },
	{ 0xe37c2dd6, "vb2_queue_change_type" },
	{ 0x589e1d88, "vb2_queue_init" },
	{ 0x4aae3e5d, "unregister_framebuffer" },
};

MODULE_INFO(depends, "videobuf2-v4l2,v4l2-tpg,videodev,v4l2-dv-timings,videobuf2-vmalloc,cec,mc,videobuf2-common,videobuf2-dma-contig");


MODULE_INFO(srcversion, "79E3D7AE0DB67DE3FD7A1D9");