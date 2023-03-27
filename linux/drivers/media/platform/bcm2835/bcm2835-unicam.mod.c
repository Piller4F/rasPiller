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
	{ 0xb339a1c6, "vb2_fop_mmap" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0x4d163890, "vb2_fop_poll" },
	{ 0xf619454c, "vb2_fop_read" },
	{ 0xde728027, "vb2_ops_wait_finish" },
	{ 0xf8f3dc64, "vb2_ops_wait_prepare" },
	{ 0xa10c2a72, "v4l2_event_unsubscribe" },
	{ 0xa4824354, "vb2_ioctl_streamoff" },
	{ 0xe623cbef, "vb2_ioctl_streamon" },
	{ 0xca3e807a, "vb2_ioctl_prepare_buf" },
	{ 0x9a23b2fc, "vb2_ioctl_create_bufs" },
	{ 0x7496b8d, "vb2_ioctl_dqbuf" },
	{ 0x88b86669, "vb2_ioctl_expbuf" },
	{ 0x27707a4, "vb2_ioctl_qbuf" },
	{ 0x518b5fb6, "vb2_ioctl_querybuf" },
	{ 0x2bf83885, "vb2_ioctl_reqbufs" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x190b4bdd, "media_pipeline_start" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0xd6d41d4c, "__v4l2_device_register_subdev_nodes" },
	{ 0xe3e4fdc7, "v4l2_subdev_alloc_state" },
	{ 0x5dc49ec9, "v4l2_ctrl_add_handler" },
	{ 0x1ebc1762, "media_create_pad_link" },
	{ 0xb39676af, "__video_register_device" },
	{ 0xe1e570f, "dma_alloc_attrs" },
	{ 0x711552a2, "media_entity_pads_init" },
	{ 0x589e1d88, "vb2_queue_init" },
	{ 0xf969db04, "vb2_dma_contig_memops" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6719a790, "vb2_plane_cookie" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x25379e73, "clk_set_min_rate" },
	{ 0xae0ce2ef, "__pm_runtime_idle" },
	{ 0xbc7fd867, "media_pipeline_stop" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x373fb346, "pm_runtime_enable" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0xc1cf5b8e, "v4l2_async_notifier_register" },
	{ 0x4a11b006, "__v4l2_async_notifier_add_subdev" },
	{ 0xc611ffca, "fwnode_graph_get_remote_endpoint" },
	{ 0xd287436, "v4l2_async_notifier_init" },
	{ 0x4c251aed, "v4l2_fwnode_endpoint_parse" },
	{ 0x2d935115, "of_graph_get_remote_port_parent" },
	{ 0x7db56bdd, "of_graph_get_next_endpoint" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0x1e5dd4c1, "__media_device_register" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0x4cb3433b, "media_device_init" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x7606362, "platform_get_irq" },
	{ 0x86cd1836, "devm_clk_get" },
	{ 0xa4a7097c, "devm_platform_ioremap_resource" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x37a0cba, "kfree" },
	{ 0xb13d41a0, "v4l2_subdev_free_state" },
	{ 0xdab46c84, "media_device_cleanup" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0x968a964b, "v4l2_event_subscribe" },
	{ 0xa8fc97d3, "v4l2_ctrl_subscribe_event" },
	{ 0xad7514df, "v4l2_fh_release" },
	{ 0x242f697d, "v4l2_fh_open" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2144f743, "_vb2_fop_release" },
	{ 0xd8a0ec97, "v4l2_fh_is_singular" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x8c0be7fb, "v4l2_g_parm_cap" },
	{ 0x2360bd1a, "v4l2_s_parm_cap" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0x84cb15b5, "media_entity_remote_pad" },
	{ 0xa5e16d49, "v4l2_event_queue" },
	{ 0xb62167f8, "vb2_buffer_done" },
	{ 0x2c761af5, "__pm_runtime_disable" },
	{ 0x88c7a2f5, "media_device_unregister" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0x7ad09f4e, "v4l2_async_notifier_unregister" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0x3919be46, "dma_free_attrs" },
	{ 0xdcb764ad, "memset" },
	{ 0x92997ed8, "_printk" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd558204, "v4l2_subdev_call_wrappers" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,videobuf2-dma-contig,videobuf2-common,v4l2-async,v4l2-fwnode,v4l2-dv-timings");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-unicam");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-unicamC*");

MODULE_INFO(srcversion, "8FB1E067CE6DD7FB9DE0906");
