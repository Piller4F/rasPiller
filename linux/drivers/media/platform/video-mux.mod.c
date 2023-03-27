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
	{ 0xd11b1ec9, "v4l2_subdev_get_fwnode_pad_1_to_1" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x905275c, "v4l2_async_register_subdev" },
	{ 0x5982c10a, "v4l2_async_subdev_notifier_register" },
	{ 0xc611ffca, "fwnode_graph_get_remote_endpoint" },
	{ 0xf8c2fdce, "fwnode_graph_get_endpoint_by_id" },
	{ 0xf496e46, "dev_fwnode" },
	{ 0xe0b64bcc, "__v4l2_async_notifier_add_fwnode_remote_subdev" },
	{ 0x903e2a53, "fwnode_handle_put" },
	{ 0xd287436, "v4l2_async_notifier_init" },
	{ 0x711552a2, "media_entity_pads_init" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0x4c251aed, "v4l2_fwnode_endpoint_parse" },
	{ 0xb9d436a2, "of_graph_get_endpoint_by_regs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb65f1104, "devm_mux_control_get" },
	{ 0x86c4d0c, "of_graph_parse_endpoint" },
	{ 0x7db56bdd, "of_graph_get_next_endpoint" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9ad6473d, "v4l2_subdev_init" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x435e6bc4, "v4l2_create_fwnode_links" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x84cb15b5, "media_entity_remote_pad" },
	{ 0xe9ea6823, "mux_control_deselect" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x537fa91, "mux_control_try_select" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x705a7f81, "v4l2_async_unregister_subdev" },
	{ 0x669a2115, "v4l2_async_notifier_cleanup" },
	{ 0x7ad09f4e, "v4l2_async_notifier_unregister" },
	{ 0xd558204, "v4l2_subdev_call_wrappers" },
};

MODULE_INFO(depends, "videodev,v4l2-async,mc,v4l2-fwnode,mux-core");

MODULE_ALIAS("of:N*T*Cvideo-mux");
MODULE_ALIAS("of:N*T*Cvideo-muxC*");

MODULE_INFO(srcversion, "DBE84B58E72E812904D82BD");
