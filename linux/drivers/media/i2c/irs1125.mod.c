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
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0xfd4a38e0, "__v4l2_ctrl_grab" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x791f3313, "v4l2_ctrl_handler_setup" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x905275c, "v4l2_async_register_subdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x660e10cf, "__v4l2_ctrl_s_ctrl" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x89d04ac4, "v4l2_ctrl_find" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0x711552a2, "media_entity_pads_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x18baf6dd, "desc_to_gpio" },
	{ 0xd1d63978, "devm_gpiod_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x86cd1836, "devm_clk_get" },
	{ 0x903e2a53, "fwnode_handle_put" },
	{ 0x4c251aed, "v4l2_fwnode_endpoint_parse" },
	{ 0xc5cad677, "fwnode_graph_get_next_endpoint" },
	{ 0xf496e46, "dev_fwnode" },
	{ 0xf60b28de, "v4l2_i2c_subdev_init" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9c74acf9, "v4l2_ctrl_new_custom" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0xdcb764ad, "memset" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
	{ 0x9618d257, "v4l2_device_unregister_subdev" },
	{ 0x705a7f81, "v4l2_async_unregister_subdev" },
};

MODULE_INFO(depends, "videodev,v4l2-async,mc,v4l2-fwnode");

MODULE_ALIAS("of:N*T*Cinfineon,irs1125");
MODULE_ALIAS("of:N*T*Cinfineon,irs1125C*");

MODULE_INFO(srcversion, "2153CC3D11B751D3E57ADCD");
