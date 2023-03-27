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
	{ 0xe2bd2e91, "param_ops_string" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x3e25742e, "usbnet_resume" },
	{ 0xd834ca5f, "usbnet_suspend" },
	{ 0x18d743f7, "usbnet_disconnect" },
	{ 0xde6ca39a, "usbnet_probe" },
	{ 0x114f4266, "rndis_tx_fixup" },
	{ 0xaf3d687e, "rndis_rx_fixup" },
	{ 0x1004ba40, "rndis_status" },
	{ 0x31fc241, "dev_get_tstats64" },
	{ 0x63b230c3, "usbnet_tx_timeout" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0xd7e682ff, "eth_mac_addr" },
	{ 0xbd5badd, "usbnet_start_xmit" },
	{ 0x75cff1e, "usbnet_stop" },
	{ 0x96c5a9d0, "usbnet_open" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x7e88e4af, "wiphy_register" },
	{ 0x9006770c, "generic_rndis_bind" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc921455c, "wiphy_new_nm" },
	{ 0x835033cd, "netdev_err" },
	{ 0xcc7ad938, "usbnet_purge_paused_rxq" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x67252eac, "cfg80211_disconnected" },
	{ 0xad841033, "netif_carrier_off" },
	{ 0x71a3d10, "cfg80211_roamed" },
	{ 0x88096c46, "cfg80211_ibss_joined" },
	{ 0xdb1e1d6f, "netif_carrier_on" },
	{ 0xaed63a67, "usbnet_resume_rx" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9586abbd, "wiphy_free" },
	{ 0x193976eb, "wiphy_unregister" },
	{ 0x99622c6a, "rndis_unbind" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc1b99792, "ieee80211_channel_to_freq_khz" },
	{ 0xe4e5a311, "cfg80211_cqm_rssi_notify" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xf529e626, "cfg80211_pmksa_candidate_notify" },
	{ 0xeb44b0ac, "cfg80211_michael_mic_failure" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe5c02461, "netdev_info" },
	{ 0x3dbc9007, "usbnet_pause_rx" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x3e6c7f03, "cfg80211_scan_done" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x11089ac7, "_ctype" },
	{ 0x98cf60b3, "strlen" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x7daff04c, "cfg80211_put_bss" },
	{ 0xc113b815, "cfg80211_inform_bss_data" },
	{ 0x66c5dba2, "cfg80211_connect_done" },
	{ 0xafef5754, "ieee80211_get_channel_khz" },
	{ 0xdcb764ad, "memset" },
	{ 0xc7f84d1b, "netdev_warn" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf63e4fb2, "rndis_command" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xeb233a45, "__kmalloc" },
};

MODULE_INFO(depends, "rndis_host,cfg80211");

MODULE_ALIAS("usb:v0411p00BCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v050Dp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1799p011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0014d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0026d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0B05p1717d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0A5CpD11Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1690p0715d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp0111d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0411p004Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");

MODULE_INFO(srcversion, "97BD5633EE19AD897632C4D");
