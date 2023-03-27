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
	{ 0x20105980, "driver_unregister" },
	{ 0xa1584084, "mipi_dsi_driver_register_full" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x26f61a7e, "regulator_bulk_disable" },
	{ 0x2715240, "spi_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0xd8c68e76, "regulator_bulk_enable" },
	{ 0xb127e82, "gpiod_set_value" },
	{ 0x73b71578, "spi_setup" },
	{ 0x8d766886, "mipi_dsi_attach" },
	{ 0xcd253295, "drm_panel_add" },
	{ 0x4e30c45c, "drm_panel_of_backlight" },
	{ 0x589ee9f1, "drm_panel_init" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xb31af892, "devm_regulator_bulk_get" },
	{ 0xf1128625, "of_device_get_match_data" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x31118ae8, "drm_display_info_set_bus_formats" },
	{ 0xd480a423, "drm_mode_probed_add" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x96f04b2c, "drm_mode_duplicate" },
	{ 0x8b8668ea, "drm_panel_remove" },
	{ 0x9e881dc5, "mipi_dsi_detach" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2c264e62, "mipi_dsi_dcs_write_buffer" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("spi:txw210001b0");
MODULE_ALIAS("spi:hyperpixel2round");
MODULE_ALIAS("of:N*T*Ctxw,txw210001b0");
MODULE_ALIAS("of:N*T*Ctxw,txw210001b0C*");
MODULE_ALIAS("of:N*T*Cpimoroni,hyperpixel2round");
MODULE_ALIAS("of:N*T*Cpimoroni,hyperpixel2roundC*");
MODULE_ALIAS("of:N*T*Ctechstar,ts8550b");
MODULE_ALIAS("of:N*T*Ctechstar,ts8550bC*");

MODULE_INFO(srcversion, "8E9D1D377DCA814C90299A7");
