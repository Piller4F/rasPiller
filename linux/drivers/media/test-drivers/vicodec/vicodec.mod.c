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
	{ 0x6a2ece28, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa10c2a72, "v4l2_event_unsubscribe" },
	{ 0xb9f31ef4, "v4l2_m2m_ioctl_dqbuf" },
	{ 0xfbb36621, "v4l2_m2m_buf_copy_metadata" },
	{ 0x82dde959, "v4l2_m2m_register_media_controller" },
	{ 0x2e72133b, "video_device_release_empty" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x1cf7e1a3, "v4l2_event_queue_fh" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xa43056c9, "v4l2_m2m_ctx_init" },
	{ 0x173e67c4, "v4l2_m2m_ioctl_try_encoder_cmd" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0xf8f3dc64, "vb2_ops_wait_prepare" },
	{ 0xfcef3bfa, "v4l2_m2m_update_start_streaming_state" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0xb39676af, "__video_register_device" },
	{ 0x5ca95f0c, "vb2_request_validate" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8481ee0a, "v4l2_m2m_fop_mmap" },
	{ 0xdd64e639, "strscpy" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x8c95d407, "vb2_request_object_is_buffer" },
	{ 0x25d46b0f, "v4l2_m2m_ioctl_streamon" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0x6e411cfd, "v4l2_m2m_ioctl_create_bufs" },
	{ 0xdcb764ad, "memset" },
	{ 0xe36a8c9c, "vb2_vmalloc_memops" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x968a964b, "v4l2_event_subscribe" },
	{ 0x44b568c, "v4l2_m2m_ioctl_streamoff" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0xbe5faa27, "v4l2_m2m_ioctl_reqbufs" },
	{ 0xe1ade170, "v4l2_fh_init" },
	{ 0xa8fc97d3, "v4l2_ctrl_subscribe_event" },
	{ 0x9f6d20e2, "vb2_plane_vaddr" },
	{ 0xb62167f8, "vb2_buffer_done" },
	{ 0x11d502e2, "v4l2_ctrl_request_hdl_find" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf13ff84d, "v4l2_m2m_unregister_media_controller" },
	{ 0x81bf1b2a, "v4l2_m2m_update_stop_streaming_state" },
	{ 0xefbfd9c, "platform_device_unregister" },
	{ 0x9c74acf9, "v4l2_ctrl_new_custom" },
	{ 0xa07a37f0, "memchr" },
	{ 0xcf484371, "vb2_request_buffer_cnt" },
	{ 0x72770cf2, "v4l2_ctrl_request_setup" },
	{ 0xdab46c84, "media_device_cleanup" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x79f2cbb6, "v4l2_m2m_get_vq" },
	{ 0x8af99679, "media_request_object_put" },
	{ 0xb3126ed6, "v4l2_m2m_ioctl_qbuf" },
	{ 0xbc219274, "platform_device_register" },
	{ 0x8ec17bd8, "v4l2_ctrl_request_complete" },
	{ 0x63306747, "v4l2_m2m_fop_poll" },
	{ 0x6cd941f8, "v4l2_m2m_ioctl_try_decoder_cmd" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xcd6c41b8, "v4l2_m2m_buf_queue" },
	{ 0x791f3313, "v4l2_ctrl_handler_setup" },
	{ 0x52aa130e, "v4l2_m2m_request_queue" },
	{ 0x92997ed8, "_printk" },
	{ 0x7357dbf6, "v4l2_m2m_ioctl_querybuf" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x9f376976, "v4l2_m2m_ioctl_decoder_cmd" },
	{ 0xb0f5033f, "v4l2_m2m_ioctl_expbuf" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x38582c51, "vb2_find_timestamp" },
	{ 0xd36ca6b5, "v4l2_ctrl_request_hdl_ctrl_find" },
	{ 0x1e5dd4c1, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xec60e0e7, "v4l2_m2m_last_buffer_done" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xa8aec544, "v4l2_m2m_buf_remove" },
	{ 0xde728027, "vb2_ops_wait_finish" },
	{ 0x29523e22, "v4l2_fh_add" },
	{ 0xdb9263da, "v4l2_m2m_ctx_release" },
	{ 0x607ba935, "v4l2_fh_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4cb3433b, "media_device_init" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x9afd6ce6, "v4l2_m2m_ioctl_encoder_cmd" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x3424512c, "v4l2_device_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf94cc2ff, "v4l2_m2m_next_buf" },
	{ 0x88c7a2f5, "media_device_unregister" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0x3627201b, "v4l2_m2m_job_finish" },
	{ 0xfe97813e, "v4l2_fh_exit" },
	{ 0x589e1d88, "vb2_queue_init" },
	{ 0x730f2eae, "v4l2_m2m_init" },
};

MODULE_INFO(depends, "v4l2-mem2mem,videodev,videobuf2-v4l2,videobuf2-common,videobuf2-vmalloc,mc");


MODULE_INFO(srcversion, "FFC7355BC9527B0A7D98FCC");
