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
	{ 0xdaf94691, "v4l2_subdev_link_validate" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0xb8fc201d, "pm_runtime_get_if_active" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xfd4a38e0, "__v4l2_ctrl_grab" },
	{ 0xf9a482f9, "msleep" },
	{ 0x791f3313, "v4l2_ctrl_handler_setup" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x2c761af5, "__pm_runtime_disable" },
	{ 0x705a7f81, "v4l2_async_unregister_subdev" },
	{ 0xae0ce2ef, "__pm_runtime_idle" },
	{ 0x373fb346, "pm_runtime_enable" },
	{ 0xcc018b98, "__pm_runtime_set_status" },
	{ 0x905275c, "v4l2_async_register_subdev" },
	{ 0x711552a2, "media_entity_pads_init" },
	{ 0xf60b28de, "v4l2_i2c_subdev_init" },
	{ 0xa4ce245c, "v4l2_ctrl_new_fwnode_properties" },
	{ 0x80e2d92e, "v4l2_fwnode_endpoint_free" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0xd3c928a1, "v4l2_fwnode_device_parse" },
	{ 0xcc3c674a, "v4l2_ctrl_new_std_menu_items" },
	{ 0xc9aac0ba, "v4l2_ctrl_new_int_menu" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xb31af892, "devm_regulator_bulk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x87fc0b31, "fwnode_property_read_u32_array" },
	{ 0x86cd1836, "devm_clk_get" },
	{ 0x903e2a53, "fwnode_handle_put" },
	{ 0x47c74cf2, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0xc5cad677, "fwnode_graph_get_next_endpoint" },
	{ 0xf496e46, "dev_fwnode" },
	{ 0x26559349, "of_match_device" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x86b914d1, "__v4l2_ctrl_modify_range" },
	{ 0xafa7a970, "__v4l2_ctrl_s_ctrl_int64" },
	{ 0x660e10cf, "__v4l2_ctrl_s_ctrl" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x26f61a7e, "regulator_bulk_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd8c68e76, "regulator_bulk_enable" },
	{ 0x815588a6, "clk_enable" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x7c9a7371, "clk_prepare" },
};

MODULE_INFO(depends, "videodev,v4l2-async,mc,v4l2-fwnode,regmap-i2c");

MODULE_ALIAS("of:N*T*Csony,imx327");
MODULE_ALIAS("of:N*T*Csony,imx327C*");
MODULE_ALIAS("of:N*T*Csony,imx327-mono");
MODULE_ALIAS("of:N*T*Csony,imx327-monoC*");
MODULE_ALIAS("of:N*T*Csony,imx290");
MODULE_ALIAS("of:N*T*Csony,imx290C*");
MODULE_ALIAS("of:N*T*Csony,imx290-mono");
MODULE_ALIAS("of:N*T*Csony,imx290-monoC*");
MODULE_ALIAS("of:N*T*Csony,imx462");
MODULE_ALIAS("of:N*T*Csony,imx462C*");
MODULE_ALIAS("of:N*T*Csony,imx462-mono");
MODULE_ALIAS("of:N*T*Csony,imx462-monoC*");

MODULE_INFO(srcversion, "E1D5ED84CA72642CE0A1073");
