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
	{ 0xf9a482f9, "msleep" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0xf8a94a11, "mt76_get_min_avg_rssi" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0x2b8790b6, "mt76x02_phy_set_txdac" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x8ed7e2dc, "__mt76_poll" },
	{ 0xc4dcc274, "mt76x02_mac_wcid_setup" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0xd22c11f0, "mt76x02_phy_set_txpower" },
	{ 0x34a3ccfe, "mt76x02_mcu_function_select" },
	{ 0x6a18fd7a, "mt76x02_mcu_calibrate" },
	{ 0x8d41870a, "mt76x02_eeprom_copy" },
	{ 0x2ad138e0, "mt76x02_config_mac_addr_list" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x60bdaf7e, "mt76x02_dfs_init_params" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6746f4, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6af19ab3, "mt76x02_init_agc_gain" },
	{ 0x4eaa21f6, "mt76x02_mac_cc_reset" },
	{ 0x44afd3ff, "ieee80211_stop_queues" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x557e3dd5, "mt76x02_init_debugfs" },
	{ 0xcdd2e023, "mt76x02_get_lna_gain" },
	{ 0xe63da4da, "mt76_eeprom_override" },
	{ 0xcadf8f23, "mt76x02_edcca_init" },
	{ 0xde5601a3, "mt76x02_phy_set_rxpath" },
	{ 0xa906f27c, "mt76x02_eeprom_parse_hw_cap" },
	{ 0xabbc5665, "ieee80211_wake_queues" },
	{ 0x9060d95d, "__mt76_poll_msec" },
	{ 0x602f41b5, "mt76x02_init_device" },
	{ 0x2a130eb9, "mt76_set_channel" },
	{ 0x815f610c, "mt76x02_phy_set_band" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xfb21df2, "mt76x02_phy_set_bw" },
	{ 0x146f0b36, "mt76_register_device" },
	{ 0xc4cb7ede, "mt76x02_mac_setaddr" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x4937d419, "mt76_eeprom_init" },
	{ 0x6c1405a8, "ieee80211_queue_delayed_work" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0xeeb13609, "mt76x02_get_rx_gain" },
	{ 0x44239691, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7906149f, "mt76x02_get_efuse_data" },
	{ 0x74ead590, "mt76x02_ext_pa_enabled" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x6062ce60, "mt76x02_mac_shared_key_setup" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x601cbfc7, "mt76x02_phy_dfs_adjust_agc" },
	{ 0xf5c0ca16, "mt76x02_phy_adjust_vga_gain" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mac80211");


MODULE_INFO(srcversion, "9871C864F01821AD71E9FDF");
