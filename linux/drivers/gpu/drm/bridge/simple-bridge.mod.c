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
	{ 0x5d974791, "drm_atomic_helper_connector_destroy_state" },
	{ 0xfa73fd87, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xbf551c38, "drm_connector_cleanup" },
	{ 0x8c329811, "drm_helper_probe_single_connector_modes" },
	{ 0x549b40c6, "drm_atomic_helper_connector_reset" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0xed635ef4, "drm_connector_attach_encoder" },
	{ 0xba60a820, "drm_connector_init_with_ddc" },
	{ 0x20092403, "drm_bridge_attach" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x13f7e497, "drm_bridge_add" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0x43168e2f, "devm_regulator_get_optional" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0x31f92288, "of_drm_find_bridge" },
	{ 0x988723e0, "of_graph_get_remote_node" },
	{ 0xf1128625, "of_device_get_match_data" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xa771a4ee, "drm_set_preferred_mode" },
	{ 0x95b31a0d, "drm_add_modes_noedid" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f365d72, "drm_add_edid_modes" },
	{ 0x2f358820, "drm_connector_update_edid_property" },
	{ 0xbddb34e2, "drm_bridge_get_edid" },
	{ 0x39f69e9a, "drm_bridge_detect" },
	{ 0xe24abb5, "regulator_disable" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0xde3fe2c3, "regulator_enable" },
	{ 0x69db02fc, "drm_bridge_remove" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");

MODULE_ALIAS("of:N*T*Cdumb-vga-dac");
MODULE_ALIAS("of:N*T*Cdumb-vga-dacC*");
MODULE_ALIAS("of:N*T*Cadi,adv7123");
MODULE_ALIAS("of:N*T*Cadi,adv7123C*");
MODULE_ALIAS("of:N*T*Cti,opa362");
MODULE_ALIAS("of:N*T*Cti,opa362C*");
MODULE_ALIAS("of:N*T*Cti,ths8135");
MODULE_ALIAS("of:N*T*Cti,ths8135C*");
MODULE_ALIAS("of:N*T*Cti,ths8134");
MODULE_ALIAS("of:N*T*Cti,ths8134C*");

MODULE_INFO(srcversion, "5B0B6E4870FE3F405C355E8");
