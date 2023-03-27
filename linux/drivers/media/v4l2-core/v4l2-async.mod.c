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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0xa51ac96a, "fwnode_graph_get_remote_port_parent" },
	{ 0x4558a487, "single_open" },
	{ 0x903e2a53, "fwnode_handle_put" },
	{ 0x68bae379, "single_release" },
	{ 0x393cac96, "seq_printf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0x7a49fbe0, "fwnode_property_present" },
	{ 0x3ef339, "_dev_notice" },
	{ 0xdcf25530, "seq_read" },
	{ 0xd5ae268b, "fwnode_handle_get" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xfc1621b2, "i2c_verify_client" },
	{ 0x4275b5e3, "media_create_ancillary_link" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9618d257, "v4l2_device_unregister_subdev" },
	{ 0x98a0ff40, "v4l2_device_register_subdev" },
	{ 0x74b60436, "fwnode_graph_get_port_parent" },
	{ 0xa1803e34, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xf496e46, "dev_fwnode" },
};

MODULE_INFO(depends, "mc,videodev");


MODULE_INFO(srcversion, "942B765AC75ED990FD59A3E");
