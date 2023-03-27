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
	{ 0x1a51dca6, "v4l2_event_subdev_unsubscribe" },
	{ 0xee93614d, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x44239691, "_dev_info" },
	{ 0xb8fc201d, "pm_runtime_get_if_active" },
	{ 0x373fb346, "pm_runtime_enable" },
	{ 0xcc018b98, "__pm_runtime_set_status" },
	{ 0xd333b203, "v4l2_async_register_subdev_sensor" },
	{ 0x711552a2, "media_entity_pads_init" },
	{ 0xf60b28de, "v4l2_i2c_subdev_init" },
	{ 0xa4ce245c, "v4l2_ctrl_new_fwnode_properties" },
	{ 0xd3c928a1, "v4l2_fwnode_device_parse" },
	{ 0x69a0c020, "v4l2_ctrl_new_std_menu" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb31af892, "devm_regulator_bulk_get" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x86cd1836, "devm_clk_get" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0x4c251aed, "v4l2_fwnode_endpoint_parse" },
	{ 0x7db56bdd, "of_graph_get_next_endpoint" },
	{ 0xdcb764ad, "memset" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x77ad1880, "__v4l2_ctrl_handler_setup" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0xae0ce2ef, "__pm_runtime_idle" },
	{ 0x26f61a7e, "regulator_bulk_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0xd8c68e76, "regulator_bulk_enable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0x2c761af5, "__pm_runtime_disable" },
	{ 0x9618d257, "v4l2_device_unregister_subdev" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x705a7f81, "v4l2_async_unregister_subdev" },
	{ 0x660e10cf, "__v4l2_ctrl_s_ctrl" },
	{ 0x86b914d1, "__v4l2_ctrl_modify_range" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
};

MODULE_INFO(depends, "videodev,v4l2-fwnode,mc,v4l2-async");

MODULE_ALIAS("of:N*T*Covti,ov5647");
MODULE_ALIAS("of:N*T*Covti,ov5647C*");
MODULE_ALIAS("i2c:ov5647");

MODULE_INFO(srcversion, "6AC6AB7826EA6A56B32BA2B");
