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
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x98cf60b3, "strlen" },
	{ 0xdcb764ad, "memset" },
	{ 0xefbfd9c, "platform_device_unregister" },
	{ 0x1357e30f, "platform_device_add" },
	{ 0x9618d257, "v4l2_device_unregister_subdev" },
	{ 0x6ad2e5e, "platform_device_put" },
	{ 0x412a0a6c, "platform_device_add_data" },
	{ 0xc26643aa, "platform_device_alloc" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0xd6d05ecd, "v4l2_ctrl_cluster" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x69a0c020, "v4l2_ctrl_new_std_menu" },
	{ 0x9c74acf9, "v4l2_ctrl_new_custom" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf60b28de, "v4l2_i2c_subdev_init" },
	{ 0x43168e2f, "devm_regulator_get_optional" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xdd64e639, "strscpy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xde3fe2c3, "regulator_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xe24abb5, "regulator_disable" },
	{ 0xb127e82, "gpiod_set_value" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0x4829a47e, "memcpy" },
	{ 0x92997ed8, "_printk" },
	{ 0xa6257a2f, "complete" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("of:N*T*Csilabs,si4713");
MODULE_ALIAS("of:N*T*Csilabs,si4713C*");
MODULE_ALIAS("i2c:si4713");

MODULE_INFO(srcversion, "6C8B74C572A3FF1255B79DB");
