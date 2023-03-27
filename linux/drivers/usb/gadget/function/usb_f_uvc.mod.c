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
	{ 0x2d3385d3, "system_wq" },
	{ 0x6fe8451e, "device_remove_file" },
	{ 0xbb43b425, "usb_function_deactivate" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa10c2a72, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xcc780106, "usb_ep_autoconfig_ss" },
	{ 0xc93bdc96, "usb_gstrings_attach" },
	{ 0x90ad01fd, "usb_free_all_descriptors" },
	{ 0x2e72133b, "video_device_release_empty" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0xa5e16d49, "v4l2_event_queue" },
	{ 0xfba71b45, "vb2_mmap" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x33164e2b, "config_item_put" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf8f3dc64, "vb2_ops_wait_prepare" },
	{ 0xb39676af, "__video_register_device" },
	{ 0xc2b15392, "config_item_init_type_name" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa8c3b4b, "usb_ep_set_halt" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7975d757, "usb_function_unregister" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf24e0551, "usb_function_activate" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xe36a8c9c, "vb2_vmalloc_memops" },
	{ 0xcf672e2, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x968a964b, "v4l2_event_subscribe" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0x6340127e, "usb_ep_autoconfig" },
	{ 0xe1ade170, "v4l2_fh_init" },
	{ 0x9f6d20e2, "vb2_plane_vaddr" },
	{ 0xb62167f8, "vb2_buffer_done" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xfd1854ea, "vb2_qbuf" },
	{ 0x5516e238, "config_group_init_type_name" },
	{ 0xb7c0f443, "sort" },
	{ 0x53aa85ab, "vb2_querybuf" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x910bc89d, "usb_function_register" },
	{ 0x375c3de7, "usb_composite_setup_continue" },
	{ 0xa353aef4, "device_create_file" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x6719a790, "vb2_plane_cookie" },
	{ 0x882077d5, "usb_ep_dequeue" },
	{ 0x44239691, "_dev_info" },
	{ 0x54966b81, "vb2_streamon" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xdc965b3, "config_ep_by_speed" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xe950db8f, "vb2_reqbufs" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xafa52820, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0xde728027, "vb2_ops_wait_finish" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x29523e22, "v4l2_fh_add" },
	{ 0x529c1749, "usb_interface_id" },
	{ 0x607ba935, "v4l2_fh_del" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xfe3df7b8, "vb2_poll" },
	{ 0xfab2c400, "vb2_queue_release" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0xabc26b32, "config_group_find_item" },
	{ 0xc027c078, "vb2_streamoff" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0x8451781, "vb2_dma_sg_memops" },
	{ 0xfe97813e, "v4l2_fh_exit" },
	{ 0x589e1d88, "vb2_queue_init" },
};

MODULE_INFO(depends, "libcomposite,videodev,videobuf2-common,videobuf2-v4l2,videobuf2-vmalloc,videobuf2-dma-sg");


MODULE_INFO(srcversion, "A67312D06818BB2196AE2F8");
