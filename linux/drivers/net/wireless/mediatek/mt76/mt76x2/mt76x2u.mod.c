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
	{ 0xc5afb75e, "mt76x02_remove_interface" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0x2b8790b6, "mt76x02_phy_set_txdac" },
	{ 0x106f6238, "mt76x2_phy_set_txpower" },
	{ 0x1db482c7, "mt76x2_phy_set_txpower_regs" },
	{ 0xaac423d6, "mt76x2_read_rx_gain" },
	{ 0x8ed7e2dc, "__mt76_poll" },
	{ 0xc4dcc274, "mt76x02_mac_wcid_setup" },
	{ 0x78dec3b8, "mt76_sta_pre_rcu_remove" },
	{ 0x98e58afb, "mt76_sw_scan" },
	{ 0x34a3ccfe, "mt76x02_mcu_function_select" },
	{ 0x932ce253, "mt76x02_conf_tx" },
	{ 0x6a18fd7a, "mt76x02_mcu_calibrate" },
	{ 0xd8f8116e, "mt76x02_ampdu_action" },
	{ 0x479e77a5, "mt76u_stop_rx" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x62f25658, "mt76x02_add_interface" },
	{ 0xb4d88b4, "mt76u_vendor_request" },
	{ 0xcbfa914e, "ieee80211_unregister_hw" },
	{ 0x9c00f707, "mt76x02u_init_beacon_config" },
	{ 0x9cb38b26, "mt76u_stop_tx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x8c1e0577, "mt76u_alloc_queues" },
	{ 0x6746f4, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5751dd22, "mt76x2_phy_update_channel_gain" },
	{ 0x6af19ab3, "mt76x02_init_agc_gain" },
	{ 0x785c254f, "mt76x02_bss_info_changed" },
	{ 0x19fafafa, "mt76x02u_mac_start" },
	{ 0x4eaa21f6, "mt76x02_mac_cc_reset" },
	{ 0x44afd3ff, "ieee80211_stop_queues" },
	{ 0xd412f7c4, "mt76x2_phy_tssi_compensate" },
	{ 0x2290a3e1, "mt76_sta_state" },
	{ 0xbec65456, "mt76x2_mcu_init_gain" },
	{ 0x1dddb35c, "mt76x02u_tx_prepare_skb" },
	{ 0x61aa7cc2, "mt76x02u_init_mcu" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x557e3dd5, "mt76x02_init_debugfs" },
	{ 0x6665e4a9, "mt76_get_survey" },
	{ 0x8399103a, "mt76u_init" },
	{ 0x7ecc5ad, "mt76x02u_mcu_fw_send_data" },
	{ 0x36c6f273, "mt76x2_init_txpower" },
	{ 0x40d911a6, "mt76x2_mcu_load_cr" },
	{ 0x70248cd1, "mt76x02_sta_add" },
	{ 0x80280310, "mt76x02_tx_status_data" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xcadf8f23, "mt76x02_edcca_init" },
	{ 0xde5601a3, "mt76x02_phy_set_rxpath" },
	{ 0x6ec4fb1e, "mt76x02_sta_remove" },
	{ 0xa906f27c, "mt76x02_eeprom_parse_hw_cap" },
	{ 0xabbc5665, "ieee80211_wake_queues" },
	{ 0x92828932, "mt76x02_tx" },
	{ 0x9060d95d, "__mt76_poll_msec" },
	{ 0x602f41b5, "mt76x02_init_device" },
	{ 0x2a130eb9, "mt76_set_channel" },
	{ 0x815f610c, "mt76x02_phy_set_band" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xfb21df2, "mt76x02_phy_set_bw" },
	{ 0xd7fffae5, "mt76x02_sw_scan_complete" },
	{ 0xe374c3cb, "mt76_set_tim" },
	{ 0x146f0b36, "mt76_register_device" },
	{ 0xc4cb7ede, "mt76x02_mac_setaddr" },
	{ 0xdd004337, "mt76x02u_mcu_fw_reset" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x6c1405a8, "ieee80211_queue_delayed_work" },
	{ 0xb582d827, "mt76u_queues_deinit" },
	{ 0xabe8f624, "mt76x02_queue_rx_skb" },
	{ 0x4de74b98, "mt76_free_device" },
	{ 0x63a4e32f, "mt76x02_configure_filter" },
	{ 0x44239691, "_dev_info" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0xe5d0ee91, "mt76x2_configure_tx_delay" },
	{ 0x4a1aa64a, "mt76x02_update_channel" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7241c452, "usb_reset_device" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0x48801651, "mt76x2_mac_stop" },
	{ 0x74ead590, "mt76x02_ext_pa_enabled" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x6062ce60, "mt76x02_mac_shared_key_setup" },
	{ 0xb395e698, "mt76_alloc_device" },
	{ 0xf15a3b82, "mt76x02_sta_rate_tbl_update" },
	{ 0x25c76f78, "mt76u_resume_rx" },
	{ 0x80bd14f4, "mt76x02_sta_ps" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd29a626a, "mt76x2_apply_gain_adj" },
	{ 0xe136367a, "mt76_get_antenna" },
	{ 0x1c316012, "mt76_wake_tx_queue" },
	{ 0x4b25acef, "mt76x02_mcu_set_radio_state" },
	{ 0xa81cb102, "mt76x2_mcu_set_channel" },
	{ 0x1b2c3664, "mt76x2_reset_wlan" },
	{ 0xa6462e6e, "mt76_write_mac_initvals" },
	{ 0x903516a1, "mt76_get_txpower" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0xa5bc1ece, "mt76_release_buffered_frames" },
	{ 0x551ccd0c, "mt76x02_set_key" },
	{ 0x708d4668, "mt76x02_set_ethtool_fwver" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x3467245e, "mt76x02u_tx_complete_skb" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76x2-common,mt76,mt76-usb,mac80211,mt76x02-usb");

MODULE_ALIAS("usb:v0B05p1833d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p180Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C4Ep0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02FEd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8E8C6B7AE378D8943AE7F74");
