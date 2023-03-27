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
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x373fb346, "pm_runtime_enable" },
	{ 0x905275c, "v4l2_async_register_subdev" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0xcc3c674a, "v4l2_ctrl_new_std_menu_items" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0x44239691, "_dev_info" },
	{ 0x4c251aed, "v4l2_fwnode_endpoint_parse" },
	{ 0xb9d436a2, "of_graph_get_endpoint_by_regs" },
	{ 0x37ebf39e, "devm_kasprintf" },
	{ 0xea764101, "regmap_bulk_read" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0x86c4d0c, "of_graph_parse_endpoint" },
	{ 0x4f060f39, "v4l2_fwnode_connector_add_link" },
	{ 0x3903755e, "v4l2_fwnode_connector_parse" },
	{ 0x7db56bdd, "of_graph_get_next_endpoint" },
	{ 0xbab97110, "of_graph_get_endpoint_count" },
	{ 0xf60b28de, "v4l2_i2c_subdev_init" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0x791f3313, "v4l2_ctrl_handler_setup" },
	{ 0xd4632a81, "media_entity_find_link" },
	{ 0x84cb15b5, "media_entity_remote_pad" },
	{ 0x1ebc1762, "media_create_pad_link" },
	{ 0x90a2a75e, "media_device_register_entity" },
	{ 0x711552a2, "media_entity_pads_init" },
	{ 0x1a74c56c, "v4l2_subdev_notify_event" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xcc018b98, "__pm_runtime_set_status" },
	{ 0x2c761af5, "__pm_runtime_disable" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x705a7f81, "v4l2_async_unregister_subdev" },
	{ 0x5f29f894, "media_device_unregister_entity" },
	{ 0x612ddce5, "v4l2_fwnode_connector_free" },
	{ 0xee93614d, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x71f93ddd, "v4l2_src_change_event_subdev_subscribe" },
	{ 0xdcb764ad, "memset" },
	{ 0xae0ce2ef, "__pm_runtime_idle" },
	{ 0xa8a68ecf, "_dev_printk" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0xf538c801, "regmap_update_bits_base" },
};

MODULE_INFO(depends, "videodev,v4l2-async,v4l2-fwnode,regmap-i2c,mc");

MODULE_ALIAS("of:N*T*Cti,tvp5150");
MODULE_ALIAS("of:N*T*Cti,tvp5150C*");
MODULE_ALIAS("i2c:tvp5150");

MODULE_INFO(srcversion, "0692426C4E65CCC39B8D784");
