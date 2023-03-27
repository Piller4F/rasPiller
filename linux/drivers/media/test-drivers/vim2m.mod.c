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
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x52aa130e, "v4l2_m2m_request_queue" },
	{ 0x5ca95f0c, "vb2_request_validate" },
	{ 0xa10c2a72, "v4l2_event_unsubscribe" },
	{ 0xa8fc97d3, "v4l2_ctrl_subscribe_event" },
	{ 0x44b568c, "v4l2_m2m_ioctl_streamoff" },
	{ 0x25d46b0f, "v4l2_m2m_ioctl_streamon" },
	{ 0x6a2ece28, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0x6e411cfd, "v4l2_m2m_ioctl_create_bufs" },
	{ 0xb9f31ef4, "v4l2_m2m_ioctl_dqbuf" },
	{ 0xb0f5033f, "v4l2_m2m_ioctl_expbuf" },
	{ 0xb3126ed6, "v4l2_m2m_ioctl_qbuf" },
	{ 0x7357dbf6, "v4l2_m2m_ioctl_querybuf" },
	{ 0xbe5faa27, "v4l2_m2m_ioctl_reqbufs" },
	{ 0x8481ee0a, "v4l2_m2m_fop_mmap" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0x63306747, "v4l2_m2m_fop_poll" },
	{ 0xde728027, "vb2_ops_wait_finish" },
	{ 0xf8f3dc64, "vb2_ops_wait_prepare" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0xbc219274, "platform_device_register" },
	{ 0xefbfd9c, "platform_device_unregister" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0xdb9263da, "v4l2_m2m_ctx_release" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x607ba935, "v4l2_fh_del" },
	{ 0xfe97813e, "v4l2_fh_exit" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x29523e22, "v4l2_fh_add" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa43056c9, "v4l2_m2m_ctx_init" },
	{ 0x791f3313, "v4l2_ctrl_handler_setup" },
	{ 0x9c74acf9, "v4l2_ctrl_new_custom" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xe1ade170, "v4l2_fh_init" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0x1e5dd4c1, "__media_device_register" },
	{ 0x82dde959, "v4l2_m2m_register_media_controller" },
	{ 0xb39676af, "__video_register_device" },
	{ 0x4cb3433b, "media_device_init" },
	{ 0x730f2eae, "v4l2_m2m_init" },
	{ 0xdcb764ad, "memset" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x3627201b, "v4l2_m2m_job_finish" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xfbb36621, "v4l2_m2m_buf_copy_metadata" },
	{ 0x9f6d20e2, "vb2_plane_vaddr" },
	{ 0x72770cf2, "v4l2_ctrl_request_setup" },
	{ 0xf94cc2ff, "v4l2_m2m_next_buf" },
	{ 0xb62167f8, "vb2_buffer_done" },
	{ 0xa8aec544, "v4l2_m2m_buf_remove" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xcd6c41b8, "v4l2_m2m_buf_queue" },
	{ 0x589e1d88, "vb2_queue_init" },
	{ 0xe36a8c9c, "vb2_vmalloc_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0xdab46c84, "media_device_cleanup" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x79f2cbb6, "v4l2_m2m_get_vq" },
	{ 0x8ec17bd8, "v4l2_ctrl_request_complete" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0xf13ff84d, "v4l2_m2m_unregister_media_controller" },
	{ 0x88c7a2f5, "media_device_unregister" },
	{ 0x92997ed8, "_printk" },
};

MODULE_INFO(depends, "v4l2-mem2mem,videobuf2-v4l2,videodev,mc,videobuf2-common,videobuf2-vmalloc");


MODULE_INFO(srcversion, "A426A524ACD65FCFE981C07");
