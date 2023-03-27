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
	{ 0x8ed7e2dc, "__mt76_poll" },
	{ 0x78dec3b8, "mt76_sta_pre_rcu_remove" },
	{ 0x98e58afb, "mt76_sw_scan" },
	{ 0x932ce253, "mt76x02_conf_tx" },
	{ 0xd8f8116e, "mt76x02_ampdu_action" },
	{ 0x479e77a5, "mt76u_stop_rx" },
	{ 0x5b02577, "mt76x02u_exit_beacon_config" },
	{ 0x62f25658, "mt76x02_add_interface" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xb4d88b4, "mt76u_vendor_request" },
	{ 0xcbfa914e, "ieee80211_unregister_hw" },
	{ 0x9c00f707, "mt76x02u_init_beacon_config" },
	{ 0x9cb38b26, "mt76u_stop_tx" },
	{ 0x8c1e0577, "mt76u_alloc_queues" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x785c254f, "mt76x02_bss_info_changed" },
	{ 0x19fafafa, "mt76x02u_mac_start" },
	{ 0x30d58311, "mt76x0_init_hardware" },
	{ 0x2290a3e1, "mt76_sta_state" },
	{ 0x20c89f62, "mt76x02_set_rts_threshold" },
	{ 0x1dddb35c, "mt76x02u_tx_prepare_skb" },
	{ 0x61aa7cc2, "mt76x02u_init_mcu" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x6665e4a9, "mt76_get_survey" },
	{ 0x8399103a, "mt76u_init" },
	{ 0x7ecc5ad, "mt76x02u_mcu_fw_send_data" },
	{ 0xfd82300, "mt76x0_mac_stop" },
	{ 0x70248cd1, "mt76x02_sta_add" },
	{ 0x80280310, "mt76x02_tx_status_data" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6ec4fb1e, "mt76x02_sta_remove" },
	{ 0x92828932, "mt76x02_tx" },
	{ 0x9060d95d, "__mt76_poll_msec" },
	{ 0xd7fffae5, "mt76x02_sw_scan_complete" },
	{ 0xe374c3cb, "mt76_set_tim" },
	{ 0xf08a5eae, "mt76x0_phy_calibrate" },
	{ 0xdd004337, "mt76x02u_mcu_fw_reset" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x4e17bfe0, "mt76x0_register_device" },
	{ 0x3557a664, "mt76x0_config" },
	{ 0x6c1405a8, "ieee80211_queue_delayed_work" },
	{ 0xb582d827, "mt76u_queues_deinit" },
	{ 0xabe8f624, "mt76x02_queue_rx_skb" },
	{ 0x129b1a3, "mt76x0_chip_onoff" },
	{ 0x4de74b98, "mt76_free_device" },
	{ 0x63a4e32f, "mt76x02_configure_filter" },
	{ 0x44239691, "_dev_info" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0x4a1aa64a, "mt76x02_update_channel" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7241c452, "usb_reset_device" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xb395e698, "mt76_alloc_device" },
	{ 0xf15a3b82, "mt76x02_sta_rate_tbl_update" },
	{ 0x25c76f78, "mt76u_resume_rx" },
	{ 0x80bd14f4, "mt76x02_sta_ps" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0xe136367a, "mt76_get_antenna" },
	{ 0x1c316012, "mt76_wake_tx_queue" },
	{ 0x903516a1, "mt76_get_txpower" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0xa5bc1ece, "mt76_release_buffered_frames" },
	{ 0x551ccd0c, "mt76x02_set_key" },
	{ 0x6f6460a1, "firmware_request_nowarn" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x3467245e, "mt76x02u_tx_complete_skb" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mt76-usb,mt76x02-usb,mac80211,mt76x0-common");

MODULE_ALIAS("usb:v148Fp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp761Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17DBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0951d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v293Cp5702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p806Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pC711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icFFisc02ipFFin*");
MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icFFisc02ipFFin*");

MODULE_INFO(srcversion, "ABC4A8DB7AAAF6A4150EBC9");
