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
	{ 0xa1584084, "mipi_dsi_driver_register_full" },
	{ 0x36fa6d0e, "mipi_dsi_generic_write" },
	{ 0xf9a482f9, "msleep" },
	{ 0xde3fe2c3, "regulator_enable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb0bbcb9a, "dev_err_probe" },
	{ 0x8d766886, "mipi_dsi_attach" },
	{ 0x13f7e497, "drm_bridge_add" },
	{ 0x433630a9, "devm_regulator_get" },
	{ 0x323fa8f7, "devm_drm_panel_bridge_add" },
	{ 0x2e683a0e, "drm_of_find_panel_or_bridge" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xe24abb5, "regulator_disable" },
	{ 0x20092403, "drm_bridge_attach" },
	{ 0x69db02fc, "drm_bridge_remove" },
	{ 0x9e881dc5, "mipi_dsi_detach" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("of:N*T*Ctoshiba,tc358762");
MODULE_ALIAS("of:N*T*Ctoshiba,tc358762C*");

MODULE_INFO(srcversion, "CF01327AEA3FDAA09AA3DA1");
