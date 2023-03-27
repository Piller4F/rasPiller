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
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf8129bfb, "mipi_dsi_dcs_exit_sleep_mode" },
	{ 0xd31a4322, "mipi_dsi_dcs_set_tear_on" },
	{ 0x2c264e62, "mipi_dsi_dcs_write_buffer" },
	{ 0xde3fe2c3, "regulator_enable" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0xd480a423, "drm_mode_probed_add" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x96f04b2c, "drm_mode_duplicate" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8d766886, "mipi_dsi_attach" },
	{ 0xcd253295, "drm_panel_add" },
	{ 0x4e30c45c, "drm_panel_of_backlight" },
	{ 0xd1d63978, "devm_gpiod_get" },
	{ 0x433630a9, "devm_regulator_get" },
	{ 0x589ee9f1, "drm_panel_init" },
	{ 0xf1128625, "of_device_get_match_data" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xdfdeb80b, "mipi_dsi_dcs_set_display_on" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2f90b428, "mipi_dsi_dcs_set_display_off" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0xe24abb5, "regulator_disable" },
	{ 0xc7b27d7a, "mipi_dsi_dcs_enter_sleep_mode" },
	{ 0x8b8668ea, "drm_panel_remove" },
	{ 0x9e881dc5, "mipi_dsi_detach" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("of:N*T*Cbananapi,lhr050h41");
MODULE_ALIAS("of:N*T*Cbananapi,lhr050h41C*");
MODULE_ALIAS("of:N*T*Cfeixin,k101-im2byl02");
MODULE_ALIAS("of:N*T*Cfeixin,k101-im2byl02C*");
MODULE_ALIAS("of:N*T*Cnwe,nwe080");
MODULE_ALIAS("of:N*T*Cnwe,nwe080C*");
MODULE_ALIAS("of:N*T*Ccrystalfontz,cfaf7201280a0_050tx");
MODULE_ALIAS("of:N*T*Ccrystalfontz,cfaf7201280a0_050txC*");

MODULE_INFO(srcversion, "00239B9D08FED683474AE81");
