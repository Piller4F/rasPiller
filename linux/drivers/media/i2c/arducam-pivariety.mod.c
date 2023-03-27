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
	{ 0x1a51dca6, "v4l2_event_subdev_unsubscribe" },
	{ 0xee93614d, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x77ad1880, "__v4l2_ctrl_handler_setup" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0xfd4a38e0, "__v4l2_ctrl_grab" },
	{ 0xae0ce2ef, "__pm_runtime_idle" },
	{ 0x373fb346, "pm_runtime_enable" },
	{ 0xd333b203, "v4l2_async_register_subdev_sensor" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x32d43420, "v4l2_ctrl_get_name" },
	{ 0x711552a2, "media_entity_pads_init" },
	{ 0x791f3313, "v4l2_ctrl_handler_setup" },
	{ 0xa4ce245c, "v4l2_ctrl_new_fwnode_properties" },
	{ 0xd3c928a1, "v4l2_fwnode_device_parse" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0x44239691, "_dev_info" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xb31af892, "devm_regulator_bulk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x86cd1836, "devm_clk_get" },
	{ 0x903e2a53, "fwnode_handle_put" },
	{ 0x80e2d92e, "v4l2_fwnode_endpoint_free" },
	{ 0x47c74cf2, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0xc5cad677, "fwnode_graph_get_next_endpoint" },
	{ 0xf496e46, "dev_fwnode" },
	{ 0xf60b28de, "v4l2_i2c_subdev_init" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x86b914d1, "__v4l2_ctrl_modify_range" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0x9c74acf9, "v4l2_ctrl_new_custom" },
	{ 0xdcb764ad, "memset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0xcc018b98, "__pm_runtime_set_status" },
	{ 0x2c761af5, "__pm_runtime_disable" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x705a7f81, "v4l2_async_unregister_subdev" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x26f61a7e, "regulator_bulk_disable" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xd8c68e76, "regulator_bulk_enable" },
};

MODULE_INFO(depends, "videodev,v4l2-fwnode,mc,v4l2-async");

MODULE_ALIAS("of:N*T*Carducam,arducam-pivariety");
MODULE_ALIAS("of:N*T*Carducam,arducam-pivarietyC*");

MODULE_INFO(srcversion, "0805780D71C88613A4E6E07");
