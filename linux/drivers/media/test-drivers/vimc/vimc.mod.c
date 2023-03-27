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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2e72133b, "video_device_release_empty" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xc6110b6e, "tpg_free" },
	{ 0xf4aef3a4, "tpg_gen_text" },
	{ 0xd558204, "v4l2_subdev_call_wrappers" },
	{ 0x3005a48, "tpg_alloc" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x4d163890, "vb2_fop_poll" },
	{ 0x86b4ddf7, "tpg_reset_source" },
	{ 0xd6d41d4c, "__v4l2_device_register_subdev_nodes" },
	{ 0xe623cbef, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf8f3dc64, "vb2_ops_wait_prepare" },
	{ 0xb39676af, "__video_register_device" },
	{ 0x999e8297, "vfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc6808be7, "tpg_calc_text_basep" },
	{ 0x3ebd70ca, "v4l2_ctrl_subdev_log_status" },
	{ 0x7a5d8c0b, "tpg_update_mv_step" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x756516e7, "tpg_s_fourcc" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0xf619454c, "vb2_fop_read" },
	{ 0xbc7fd867, "media_pipeline_stop" },
	{ 0xe36a8c9c, "vb2_vmalloc_memops" },
	{ 0x190b4bdd, "media_pipeline_start" },
	{ 0xb339a1c6, "vb2_fop_mmap" },
	{ 0x31a0f1a7, "freezing_slow_path" },
	{ 0x27707a4, "vb2_ioctl_qbuf" },
	{ 0xee93614d, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0x711552a2, "media_entity_pads_init" },
	{ 0x2d4daef5, "find_font" },
	{ 0x9f6d20e2, "vb2_plane_vaddr" },
	{ 0xb62167f8, "vb2_buffer_done" },
	{ 0xaa5503d9, "tpg_set_font" },
	{ 0xca3e807a, "vb2_ioctl_prepare_buf" },
	{ 0xefbfd9c, "platform_device_unregister" },
	{ 0x9c74acf9, "v4l2_ctrl_new_custom" },
	{ 0x9a23b2fc, "vb2_ioctl_create_bufs" },
	{ 0xce8159bb, "tpg_pattern_strings" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x7496b8d, "vb2_ioctl_dqbuf" },
	{ 0xdaf94691, "v4l2_subdev_link_validate" },
	{ 0xdab46c84, "media_device_cleanup" },
	{ 0xbc219274, "platform_device_register" },
	{ 0xa276598c, "vb2_fop_release" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x517e7ccd, "tpg_fill_plane_buffer" },
	{ 0x98a0ff40, "v4l2_device_register_subdev" },
	{ 0x1ebc1762, "media_create_pad_link" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xcd3211e1, "media_entity_remove_links" },
	{ 0xa23f0bc0, "vb2_video_unregister_device" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1a51dca6, "v4l2_event_subdev_unsubscribe" },
	{ 0x242f697d, "v4l2_fh_open" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9ad6473d, "v4l2_subdev_init" },
	{ 0x518b5fb6, "vb2_ioctl_querybuf" },
	{ 0x1e5dd4c1, "__media_device_register" },
	{ 0x84cb15b5, "media_entity_remote_pad" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xde728027, "vb2_ops_wait_finish" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4cb3433b, "media_device_init" },
	{ 0x88b86669, "vb2_ioctl_expbuf" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0xa4824354, "vb2_ioctl_streamoff" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x3424512c, "v4l2_device_put" },
	{ 0x88c7a2f5, "media_device_unregister" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0xb40fae23, "tpg_g_color_order" },
	{ 0x589e1d88, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,v4l2-tpg,videodev,mc,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "31BB396772B8960C0CCFE74");
