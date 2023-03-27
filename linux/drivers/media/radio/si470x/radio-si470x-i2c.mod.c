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
	{ 0xe780e06a, "param_ops_ushort" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0xb39676af, "__video_register_device" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1eb7dea6, "si470x_set_freq" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x44239691, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0x2e72133b, "video_device_release_empty" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe74543f8, "si470x_viddev_template" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x9c684a09, "si470x_ctrl_ops" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xa6257a2f, "complete" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0xb127e82, "gpiod_set_value" },
	{ 0xf69e4024, "video_unregister_device" },
	{ 0xaf41c6ab, "si470x_start" },
	{ 0x242f697d, "v4l2_fh_open" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0x2ad2dd4, "si470x_stop" },
	{ 0xad7514df, "v4l2_fh_release" },
	{ 0xd8a0ec97, "v4l2_fh_is_singular" },
	{ 0xa5ccdb, "video_devdata" },
	{ 0xdd64e639, "strscpy" },
};

MODULE_INFO(depends, "videodev,radio-si470x-common");

MODULE_ALIAS("of:N*T*Csilabs,si470x");
MODULE_ALIAS("of:N*T*Csilabs,si470xC*");
MODULE_ALIAS("i2c:si470x");

MODULE_INFO(srcversion, "5573F266DF3E31AB76F5175");
