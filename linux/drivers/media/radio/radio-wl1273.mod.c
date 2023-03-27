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
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0xa9857b6e, "video_ioctl2" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa6257a2f, "complete" },
	{ 0x92997ed8, "_printk" },
	{ 0xb39676af, "__video_register_device" },
	{ 0x69a0c020, "v4l2_ctrl_new_std_menu" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x44239691, "_dev_info" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "515567DE33971656F8FC573");
