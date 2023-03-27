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
	{ 0xf9a482f9, "msleep" },
	{ 0x2e72133b, "video_device_release_empty" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x4220e671, "v4l2_ctrl_log_status" },
	{ 0xbc19501a, "vchiq_mmal_port_parameter_set" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x4d163890, "vb2_fop_poll" },
	{ 0xe623cbef, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf8f3dc64, "vb2_ops_wait_prepare" },
	{ 0xb39676af, "__video_register_device" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0xf619454c, "vb2_fop_read" },
	{ 0x69a0c020, "v4l2_ctrl_new_std_menu" },
	{ 0x118cbd8f, "vchiq_mmal_component_finalise" },
	{ 0xdcb764ad, "memset" },
	{ 0xe36a8c9c, "vb2_vmalloc_memops" },
	{ 0xb339a1c6, "vb2_fop_mmap" },
	{ 0x27707a4, "vb2_ioctl_qbuf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb19b625d, "vchiq_mmal_port_connect_tunnel" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0xa8fc97d3, "v4l2_ctrl_subscribe_event" },
	{ 0x9f6d20e2, "vb2_plane_vaddr" },
	{ 0xb62167f8, "vb2_buffer_done" },
	{ 0x9bcb516d, "vchiq_mmal_component_enable" },
	{ 0xca3e807a, "vb2_ioctl_prepare_buf" },
	{ 0x13c812bb, "v4l2_device_set_name" },
	{ 0x9a23b2fc, "vb2_ioctl_create_bufs" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x7496b8d, "vb2_ioctl_dqbuf" },
	{ 0x73577d20, "vchiq_mmal_finalise" },
	{ 0xc9aac0ba, "v4l2_ctrl_new_int_menu" },
	{ 0x6596b7e2, "vchiq_mmal_component_init" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xa276598c, "vb2_fop_release" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8c0ba72a, "vchiq_mmal_component_disable" },
	{ 0x92997ed8, "_printk" },
	{ 0x55b0b0ab, "v4l2_ctrl_auto_cluster" },
	{ 0x18d468fc, "mmal_vchi_buffer_init" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x242f697d, "v4l2_fh_open" },
	{ 0xe5518313, "vchiq_mmal_port_enable" },
	{ 0x518b5fb6, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x6192e1a2, "vchiq_mmal_version" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0xb1998583, "vchiq_mmal_submit_buffer" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xde728027, "vb2_ops_wait_finish" },
	{ 0xaca4dd80, "vchiq_mmal_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x88b86669, "vb2_ioctl_expbuf" },
	{ 0x8529632d, "mmal_vchi_buffer_cleanup" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0xa4824354, "vb2_ioctl_streamoff" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0xcaeda4fe, "vchiq_mmal_port_parameter_get" },
	{ 0x589e1d88, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,bcm2835-mmal-vchiq,videodev,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "F01677BA0C2D3885402AF80");
