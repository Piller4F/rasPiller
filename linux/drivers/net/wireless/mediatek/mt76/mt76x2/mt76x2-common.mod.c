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
	{ 0xf8a94a11, "mt76_get_min_avg_rssi" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0xd22c11f0, "mt76x02_phy_set_txpower" },
	{ 0x6a18fd7a, "mt76x02_mcu_calibrate" },
	{ 0x8d41870a, "mt76x02_eeprom_copy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcdd2e023, "mt76x02_get_lna_gain" },
	{ 0xe63da4da, "mt76_eeprom_override" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x75a34a9a, "mt76_mcu_send_and_get_msg" },
	{ 0xa906f27c, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x4937d419, "mt76_eeprom_init" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0xeeb13609, "mt76x02_get_rx_gain" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7906149f, "mt76x02_get_efuse_data" },
	{ 0x74ead590, "mt76x02_ext_pa_enabled" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x4829a47e, "memcpy" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x601cbfc7, "mt76x02_phy_dfs_adjust_agc" },
	{ 0xf5c0ca16, "mt76x02_phy_adjust_vga_gain" },
};

MODULE_INFO(depends, "mt76,mt76x02-lib");


MODULE_INFO(srcversion, "DD1A686EE6B2A07213D6CAC");
