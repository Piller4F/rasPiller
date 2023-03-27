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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x6a2ece28, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa10c2a72, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb9f31ef4, "v4l2_m2m_ioctl_dqbuf" },
	{ 0xfbb36621, "v4l2_m2m_buf_copy_metadata" },
	{ 0x82dde959, "v4l2_m2m_register_media_controller" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2e72133b, "video_device_release_empty" },
	{ 0x15ef322, "media_request_unpin" },
	{ 0x27339f09, "param_ops_int" },
	{ 0xa43056c9, "v4l2_m2m_ctx_init" },
	{ 0xe94ab6d1, "vb2_wait_for_all_buffers" },
	{ 0x25379e73, "clk_set_min_rate" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf8f3dc64, "vb2_ops_wait_prepare" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0xb39676af, "__video_register_device" },
	{ 0x5ca95f0c, "vb2_request_validate" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8481ee0a, "v4l2_m2m_fop_mmap" },
	{ 0x3919be46, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x8c95d407, "vb2_request_object_is_buffer" },
	{ 0x25d46b0f, "v4l2_m2m_ioctl_streamon" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6e411cfd, "v4l2_m2m_ioctl_create_bufs" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x44b568c, "v4l2_m2m_ioctl_streamoff" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0xbe5faa27, "v4l2_m2m_ioctl_reqbufs" },
	{ 0xe1ade170, "v4l2_fh_init" },
	{ 0xa8fc97d3, "v4l2_ctrl_subscribe_event" },
	{ 0x5eb7bfbd, "rpi_firmware_find_node" },
	{ 0x9f6d20e2, "vb2_plane_vaddr" },
	{ 0xb62167f8, "vb2_buffer_done" },
	{ 0x11d502e2, "v4l2_ctrl_request_hdl_find" },
	{ 0xe1e570f, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf13ff84d, "v4l2_m2m_unregister_media_controller" },
	{ 0x63e9296, "rpi_firmware_put" },
	{ 0x9c74acf9, "v4l2_ctrl_new_custom" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xcf484371, "vb2_request_buffer_cnt" },
	{ 0x72770cf2, "v4l2_ctrl_request_setup" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xdab46c84, "media_device_cleanup" },
	{ 0x6719a790, "vb2_plane_cookie" },
	{ 0x79f2cbb6, "v4l2_m2m_get_vq" },
	{ 0x8af99679, "media_request_object_put" },
	{ 0xb3126ed6, "v4l2_m2m_ioctl_qbuf" },
	{ 0x63306747, "v4l2_m2m_fop_poll" },
	{ 0x8ec17bd8, "v4l2_ctrl_request_complete" },
	{ 0x38c8e55, "media_request_pin" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xcd6c41b8, "v4l2_m2m_buf_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x791f3313, "v4l2_ctrl_handler_setup" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x52aa130e, "v4l2_m2m_request_queue" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb7219ef8, "dma_map_page_attrs" },
	{ 0xd5fafefd, "v4l2_m2m_ioctl_stateless_decoder_cmd" },
	{ 0x7357dbf6, "v4l2_m2m_ioctl_querybuf" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xa44c2eb0, "dev_driver_string" },
	{ 0xb0f5033f, "v4l2_m2m_ioctl_expbuf" },
	{ 0x86cd1836, "devm_clk_get" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xed549a5f, "rpi_firmware_get" },
	{ 0x44693ee3, "platform_get_resource_byname" },
	{ 0x38582c51, "vb2_find_timestamp" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd36ca6b5, "v4l2_ctrl_request_hdl_ctrl_find" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1e5dd4c1, "__media_device_register" },
	{ 0xf969db04, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7a86a83a, "devm_ioremap" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0x6c72e446, "v4l2_m2m_buf_done_and_job_finish" },
	{ 0xa8aec544, "v4l2_m2m_buf_remove" },
	{ 0x4680df3a, "v4l2_m2m_ioctl_stateless_try_decoder_cmd" },
	{ 0xde728027, "vb2_ops_wait_finish" },
	{ 0xc82329ad, "dma_unmap_page_attrs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x29523e22, "v4l2_fh_add" },
	{ 0xdb9263da, "v4l2_m2m_ctx_release" },
	{ 0x607ba935, "v4l2_fh_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4cb3433b, "media_device_init" },
	{ 0x7606362, "platform_get_irq" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf94cc2ff, "v4l2_m2m_next_buf" },
	{ 0x88c7a2f5, "media_device_unregister" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0xa0c4cf2b, "rpi_firmware_clk_get_max_rate" },
	{ 0x3627201b, "v4l2_m2m_job_finish" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xfe97813e, "v4l2_fh_exit" },
	{ 0x589e1d88, "vb2_queue_init" },
	{ 0x730f2eae, "v4l2_m2m_init" },
};

MODULE_INFO(depends, "v4l2-mem2mem,videodev,mc,videobuf2-common,videobuf2-v4l2,videobuf2-dma-contig");

MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-vid-decoder");
MODULE_ALIAS("of:N*T*Craspberrypi,rpivid-vid-decoderC*");

MODULE_INFO(srcversion, "FE0F9419B21804269F0BA99");
