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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x905275c, "v4l2_async_register_subdev" },
	{ 0xa51ac96a, "fwnode_graph_get_remote_port_parent" },
	{ 0x903e2a53, "fwnode_handle_put" },
	{ 0x5982c10a, "v4l2_async_subdev_notifier_register" },
	{ 0x669a2115, "v4l2_async_notifier_cleanup" },
	{ 0xd287436, "v4l2_async_notifier_init" },
	{ 0xde64427c, "fwnode_device_is_available" },
	{ 0x7a49fbe0, "fwnode_property_present" },
	{ 0x25b50ab1, "fwnode_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x490f5a33, "__v4l2_async_notifier_add_fwnode_subdev" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x4a11b006, "__v4l2_async_notifier_add_subdev" },
	{ 0x490d6702, "fwnode_property_read_u64_array" },
	{ 0xd600ae0c, "fwnode_get_name" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0x87fc0b31, "fwnode_property_read_u32_array" },
	{ 0xf274f366, "fwnode_graph_parse_endpoint" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xa2eae433, "fwnode_property_get_reference_args" },
	{ 0x74b60436, "fwnode_graph_get_port_parent" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5cad677, "fwnode_graph_get_next_endpoint" },
	{ 0xf496e46, "dev_fwnode" },
	{ 0xc611ffca, "fwnode_graph_get_remote_endpoint" },
	{ 0x7ad09f4e, "v4l2_async_notifier_unregister" },
};

MODULE_INFO(depends, "v4l2-async");


MODULE_INFO(srcversion, "79ABDABB7C3E3D8B433F0B3");
