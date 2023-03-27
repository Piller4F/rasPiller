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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa10c2a72, "v4l2_event_unsubscribe" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e72133b, "video_device_release_empty" },
	{ 0x27339f09, "param_ops_int" },
	{ 0xa5e16d49, "v4l2_event_queue" },
	{ 0x4220e671, "v4l2_ctrl_log_status" },
	{ 0x6f3cc412, "snd_pcm_period_elapsed" },
	{ 0xd558204, "v4l2_subdev_call_wrappers" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x18d8da38, "v4l2_ctrl_g_ctrl" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x4d163890, "vb2_fop_poll" },
	{ 0xe623cbef, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf8f3dc64, "vb2_ops_wait_prepare" },
	{ 0xb39676af, "__video_register_device" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x88e04609, "snd_card_disconnect" },
	{ 0x925693e8, "i2c_add_adapter" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0xf619454c, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x69a0c020, "v4l2_ctrl_new_std_menu" },
	{ 0xc2ded2db, "param_ops_charp" },
	{ 0xdcb764ad, "memset" },
	{ 0x7a225b9c, "snd_pcm_set_managed_buffer_all" },
	{ 0xe36a8c9c, "vb2_vmalloc_memops" },
	{ 0x53ddc622, "snd_device_new" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb339a1c6, "vb2_fop_mmap" },
	{ 0x27707a4, "vb2_ioctl_qbuf" },
	{ 0x968a964b, "v4l2_event_subscribe" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x175ae848, "snd_pcm_set_ops" },
	{ 0xa8fc97d3, "v4l2_ctrl_subscribe_event" },
	{ 0x9f6d20e2, "vb2_plane_vaddr" },
	{ 0xb62167f8, "vb2_buffer_done" },
	{ 0x1fa49f51, "snd_card_free_when_closed" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9c74acf9, "v4l2_ctrl_new_custom" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x7496b8d, "vb2_ioctl_dqbuf" },
	{ 0xfd4a38e0, "__v4l2_ctrl_grab" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd503cbd3, "snd_card_new" },
	{ 0xeb8454c4, "i2c_del_adapter" },
	{ 0x44239691, "_dev_info" },
	{ 0xa276598c, "vb2_fop_release" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x242f697d, "v4l2_fh_open" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x518b5fb6, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xde728027, "vb2_ops_wait_finish" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc4378d43, "snd_card_free" },
	{ 0xb821754b, "v4l2_i2c_new_subdev_board" },
	{ 0xb8714612, "snd_card_register" },
	{ 0x91201963, "snd_pcm_new" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xa4824354, "vb2_ioctl_streamoff" },
	{ 0x3424512c, "v4l2_device_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0x589e1d88, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,snd-pcm,snd,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "5B2FDD4DE6415C25829E6CB");
