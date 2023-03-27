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
	{ 0x53cc38d2, "drm_atomic_helper_bridge_reset" },
	{ 0x65d72ad8, "drm_atomic_helper_bridge_destroy_state" },
	{ 0x82d2c8ee, "drm_atomic_helper_bridge_duplicate_state" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x4c8cb1ee, "drm_bridge_hpd_notify" },
	{ 0xd62c6dd9, "drm_probe_ddc" },
	{ 0xfd457b8, "gpiod_get_value_cansleep" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0xf2ce65f, "of_get_i2c_adapter_by_node" },
	{ 0x693a304d, "of_parse_phandle" },
	{ 0x44239691, "_dev_info" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xde3fe2c3, "regulator_enable" },
	{ 0x43168e2f, "devm_regulator_get_optional" },
	{ 0x3ba9b8b7, "gpiod_to_irq" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0x13f7e497, "drm_bridge_add" },
	{ 0xdcccca3e, "of_property_read_string" },
	{ 0xf1128625, "of_device_get_match_data" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xbcc6997e, "drm_atomic_get_new_bridge_state" },
	{ 0x4ba36189, "drm_get_edid" },
	{ 0xa22b682b, "i2c_put_adapter" },
	{ 0x69db02fc, "drm_bridge_remove" },
	{ 0xe24abb5, "regulator_disable" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");

MODULE_ALIAS("of:N*T*Ccomposite-video-connector");
MODULE_ALIAS("of:N*T*Ccomposite-video-connectorC*");
MODULE_ALIAS("of:N*T*Cdvi-connector");
MODULE_ALIAS("of:N*T*Cdvi-connectorC*");
MODULE_ALIAS("of:N*T*Chdmi-connector");
MODULE_ALIAS("of:N*T*Chdmi-connectorC*");
MODULE_ALIAS("of:N*T*Csvideo-connector");
MODULE_ALIAS("of:N*T*Csvideo-connectorC*");
MODULE_ALIAS("of:N*T*Cvga-connector");
MODULE_ALIAS("of:N*T*Cvga-connectorC*");
MODULE_ALIAS("of:N*T*Cdp-connector");
MODULE_ALIAS("of:N*T*Cdp-connectorC*");

MODULE_INFO(srcversion, "7E1F2565E8EEEBAC2ABEBED");
