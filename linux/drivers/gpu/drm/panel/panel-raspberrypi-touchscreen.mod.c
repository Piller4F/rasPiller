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
	{ 0xb0eeb01a, "mipi_dsi_driver_unregister" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0xa1584084, "mipi_dsi_driver_register_full" },
	{ 0xf9a482f9, "msleep" },
	{ 0x36fa6d0e, "mipi_dsi_generic_write" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcd253295, "drm_panel_add" },
	{ 0x589ee9f1, "drm_panel_init" },
	{ 0x58a26f8c, "mipi_dsi_device_register_full" },
	{ 0x1d256f07, "of_graph_get_remote_port" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0x8f84df76, "of_find_mipi_dsi_host_by_node" },
	{ 0x2d935115, "of_graph_get_remote_port_parent" },
	{ 0x7db56bdd, "of_graph_get_next_endpoint" },
	{ 0xbe2aed38, "i2c_smbus_write_byte_data" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0x8d766886, "mipi_dsi_attach" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x31118ae8, "drm_display_info_set_bus_formats" },
	{ 0xd480a423, "drm_mode_probed_add" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x96f04b2c, "drm_mode_duplicate" },
	{ 0x23f15b79, "mipi_dsi_device_unregister" },
	{ 0x8b8668ea, "drm_panel_remove" },
	{ 0x9e881dc5, "mipi_dsi_detach" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panel");
MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panelC*");

MODULE_INFO(srcversion, "0E480BB4C08BBAB317A4CFB");
