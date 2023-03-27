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
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9e881dc5, "mipi_dsi_detach" },
	{ 0xdfdeb80b, "mipi_dsi_dcs_set_display_on" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x36fa6d0e, "mipi_dsi_generic_write" },
	{ 0xf8129bfb, "mipi_dsi_dcs_exit_sleep_mode" },
	{ 0x2ba82351, "mipi_dsi_dcs_write" },
	{ 0x87cd2e42, "mipi_dsi_dcs_set_page_address" },
	{ 0xdb31ae97, "mipi_dsi_dcs_set_column_address" },
	{ 0x1a09c72f, "mipi_dsi_dcs_set_pixel_format" },
	{ 0x13025f72, "mipi_dsi_dcs_soft_reset" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd8c68e76, "regulator_bulk_enable" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0x26f61a7e, "regulator_bulk_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc7b27d7a, "mipi_dsi_dcs_enter_sleep_mode" },
	{ 0x2f90b428, "mipi_dsi_dcs_set_display_off" },
	{ 0x8b8668ea, "drm_panel_remove" },
	{ 0x8d766886, "mipi_dsi_attach" },
	{ 0xcd253295, "drm_panel_add" },
	{ 0x589ee9f1, "drm_panel_init" },
	{ 0xfe3469a, "devm_backlight_device_register" },
	{ 0xd1d63978, "devm_gpiod_get" },
	{ 0xb31af892, "devm_regulator_bulk_get" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x61e4e153, "mipi_dsi_dcs_set_display_brightness" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x76427e17, "mipi_dsi_dcs_get_display_brightness" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0xd480a423, "drm_mode_probed_add" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x96f04b2c, "drm_mode_duplicate" },
};

MODULE_INFO(depends, "drm,backlight");

MODULE_ALIAS("of:N*T*Cjdi,lt070me05000");
MODULE_ALIAS("of:N*T*Cjdi,lt070me05000C*");

MODULE_INFO(srcversion, "4B06AE29F00CFD15DAA0C71");
