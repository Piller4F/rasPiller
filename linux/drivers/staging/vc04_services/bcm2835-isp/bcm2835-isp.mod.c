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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0x2bf83885, "vb2_ioctl_reqbufs" },
	{ 0xa97c5a91, "vchiq_mmal_port_set_format" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa10c2a72, "v4l2_event_unsubscribe" },
	{ 0x7b73a0da, "vchiq_mmal_port_disable" },
	{ 0x2e72133b, "video_device_release_empty" },
	{ 0x5f29f894, "media_device_unregister_entity" },
	{ 0xaeaaf45e, "media_devnode_create" },
	{ 0xbc19501a, "vchiq_mmal_port_parameter_set" },
	{ 0xe94ab6d1, "vb2_wait_for_all_buffers" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x4d163890, "vb2_fop_poll" },
	{ 0xe623cbef, "vb2_ioctl_streamon" },
	{ 0xb39676af, "__video_register_device" },
	{ 0xdd64e639, "strscpy" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0x5d0f6635, "media_remove_intf_links" },
	{ 0x118cbd8f, "vchiq_mmal_component_finalise" },
	{ 0xdcb764ad, "memset" },
	{ 0xb339a1c6, "vb2_fop_mmap" },
	{ 0x27707a4, "vb2_ioctl_qbuf" },
	{ 0x968a964b, "v4l2_event_subscribe" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0x711552a2, "media_entity_pads_init" },
	{ 0xb64885d8, "vc_sm_cma_import_dmabuf" },
	{ 0xa8fc97d3, "v4l2_ctrl_subscribe_event" },
	{ 0x9f6d20e2, "vb2_plane_vaddr" },
	{ 0xb62167f8, "vb2_buffer_done" },
	{ 0xbbc9af30, "dma_buf_put" },
	{ 0xc29ff1ec, "dma_buf_get" },
	{ 0x9bcb516d, "vchiq_mmal_component_enable" },
	{ 0xca3e807a, "vb2_ioctl_prepare_buf" },
	{ 0x9c74acf9, "v4l2_ctrl_new_custom" },
	{ 0x9a23b2fc, "vb2_ioctl_create_bufs" },
	{ 0x7496b8d, "vb2_ioctl_dqbuf" },
	{ 0x73577d20, "vchiq_mmal_finalise" },
	{ 0xdab46c84, "media_device_cleanup" },
	{ 0x90a2a75e, "media_device_register_entity" },
	{ 0x6596b7e2, "vchiq_mmal_component_init" },
	{ 0x44239691, "_dev_info" },
	{ 0xa276598c, "vb2_fop_release" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8c0ba72a, "vchiq_mmal_component_disable" },
	{ 0x92997ed8, "_printk" },
	{ 0x18d468fc, "mmal_vchi_buffer_init" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x1ebc1762, "media_create_pad_link" },
	{ 0xcd3211e1, "media_entity_remove_links" },
	{ 0xfb348166, "media_create_intf_link" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x242f697d, "v4l2_fh_open" },
	{ 0xe5518313, "vchiq_mmal_port_enable" },
	{ 0x518b5fb6, "vb2_ioctl_querybuf" },
	{ 0x1e5dd4c1, "__media_device_register" },
	{ 0x53b52981, "vc_sm_cma_free" },
	{ 0xf969db04, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0xb1998583, "vchiq_mmal_submit_buffer" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xaca4dd80, "vchiq_mmal_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4cb3433b, "media_device_init" },
	{ 0x88b86669, "vb2_ioctl_expbuf" },
	{ 0x8529632d, "mmal_vchi_buffer_cleanup" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0xa4824354, "vb2_ioctl_streamoff" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xfab2c400, "vb2_queue_release" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6fa2a386, "vc_sm_cma_int_handle" },
	{ 0x88c7a2f5, "media_device_unregister" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0xd62aaf0b, "vb2_core_expbuf_dmabuf" },
	{ 0x59ca05ed, "media_devnode_remove" },
	{ 0xcaeda4fe, "vchiq_mmal_port_parameter_get" },
	{ 0x589e1d88, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,bcm2835-mmal-vchiq,videodev,mc,videobuf2-common,vc-sm-cma,videobuf2-dma-contig");


MODULE_INFO(srcversion, "B9BEFB302A0357E3F4538C2");
