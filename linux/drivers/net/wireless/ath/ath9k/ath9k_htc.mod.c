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
	{ 0xdd650298, "ieee80211_rx_napi" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6ad94382, "ath9k_hw_set_txq_props" },
	{ 0x3a50d89a, "ieee80211_csa_finish" },
	{ 0x7575aa26, "ath9k_hw_init" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x6207caaf, "ath9k_cmn_get_channel" },
	{ 0xcc956795, "ath9k_hw_deinit" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x2cc6e855, "device_release_driver" },
	{ 0x6ac155f3, "ath9k_hw_set_gpio" },
	{ 0xca0d974f, "ath9k_cmn_init_crypto" },
	{ 0x96e4c6eb, "ieee80211_queue_work" },
	{ 0x40f51a98, "ath9k_cmn_process_rate" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x13d47559, "ath9k_hw_btcoex_enable" },
	{ 0xb79da132, "ath9k_hw_wait" },
	{ 0xffe38f61, "ath9k_cmn_get_hw_crypto_keytype" },
	{ 0x6bdf0566, "ath9k_hw_stopdmarecv" },
	{ 0xe76535e4, "ath_key_delete" },
	{ 0xa7aa29c2, "ath9k_cmn_update_txpow" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2e34abeb, "ieee80211_beacon_get_tim" },
	{ 0x709f151c, "ath9k_hw_gpio_get" },
	{ 0x20be2c89, "ath_regd_init" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xcbfa914e, "ieee80211_unregister_hw" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x671f926c, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x4808747b, "ath9k_hw_setrxfilter" },
	{ 0x1473e696, "ath9k_hw_get_txq_props" },
	{ 0xab3b9114, "ath9k_hw_releasetxqueue" },
	{ 0xc305f557, "ath9k_hw_reset_tsf" },
	{ 0xc962f319, "wiphy_rfkill_start_polling" },
	{ 0x57581d53, "usb_get_urb" },
	{ 0x9e9f9e8f, "ath9k_cmn_reload_chainmask" },
	{ 0x9d50b929, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x98d728e5, "ath9k_cmn_init_channels_rates" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x44afd3ff, "ieee80211_stop_queues" },
	{ 0x1444e565, "usb_unanchor_urb" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0xcd638257, "ieee80211_tx_status" },
	{ 0xa3933052, "ath_printk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xce89b13c, "ath9k_hw_setopmode" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x66873028, "ath9k_hw_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x741a74c4, "ath9k_hw_resettxqueue" },
	{ 0xaf9d8b86, "ath9k_hw_gettsf64" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xc059d234, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x97308019, "led_classdev_register_ext" },
	{ 0xe9483dba, "ath9k_hw_set_sta_beacon_timers" },
	{ 0xb040ddd2, "ath9k_hw_set_tsfadjust" },
	{ 0x4c2a8c04, "ath9k_cmn_beacon_config_ap" },
	{ 0xabbc5665, "ieee80211_wake_queues" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd7e1bdd1, "ath9k_hw_btcoex_disable" },
	{ 0x5f3fdb23, "ath9k_hw_getrxfilter" },
	{ 0xe3038084, "ath9k_hw_ani_monitor" },
	{ 0x36185f1f, "ath_is_mybeacon" },
	{ 0x65c5c813, "ieee80211_beacon_cntdwn_is_complete" },
	{ 0x1446f94, "ath9k_cmn_beacon_config_adhoc" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x11409ff0, "ath9k_cmn_process_rssi" },
	{ 0x5a921311, "strncmp" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3939f8f0, "rfkill_pause_polling" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xb5617c05, "request_firmware_nowait" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9c1fffee, "ath9k_hw_write_associd" },
	{ 0x6c1405a8, "ieee80211_queue_delayed_work" },
	{ 0x98095400, "ath_reg_notifier_apply" },
	{ 0x703dd09b, "wiphy_to_ieee80211_hw" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x841793f1, "ath9k_hw_init_btcoex_hw" },
	{ 0x54acd503, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0x3ceb6292, "ath9k_hw_beaconq_setup" },
	{ 0x44239691, "_dev_info" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0xfda27b1c, "ath9k_hw_name" },
	{ 0xc2895f4c, "ath9k_hw_init_global_settings" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x64bfed6d, "ath9k_hw_settsf64" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfaf1442c, "usb_bulk_msg" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x522b6b35, "ath9k_hw_beaconinit" },
	{ 0x92997ed8, "_printk" },
	{ 0x31f94d90, "ieee80211_find_sta" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x3318c8a3, "ieee80211_get_buffered_bc" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x9069c1b4, "usb_interrupt_msg" },
	{ 0x2b1f7996, "ath9k_hw_gpio_free" },
	{ 0xee837c83, "ath9k_hw_btcoex_bt_stomp" },
	{ 0x57a988c4, "ath9k_hw_setrxabort" },
	{ 0x7f449219, "ath9k_cmn_beacon_config_sta" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc8ce59f1, "ath_hw_setbssidmask" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xdaa1bc04, "ath9k_cmn_rx_skb_postprocess" },
	{ 0x3cdc665a, "ath9k_hw_phy_disable" },
	{ 0x79d39d9e, "__ieee80211_get_radio_led_name" },
	{ 0x7ae81428, "ieee80211_get_hdrlen_from_skb" },
	{ 0x46cfff4d, "ath9k_hw_setpower" },
	{ 0x96e59f82, "__ieee80211_create_tpt_led_trigger" },
	{ 0xd065bc19, "ieee80211_register_hw" },
	{ 0x5f3c0c17, "led_classdev_unregister" },
	{ 0x934f8965, "ath9k_hw_btcoex_set_weight" },
	{ 0x37a0cba, "kfree" },
	{ 0xd33d7ff7, "regulatory_hint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x966438b, "ath9k_hw_setmcastfilter" },
	{ 0xb2a7131f, "ieee80211_start_tx_ba_session" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x34e86039, "ath9k_hw_gpio_request_out" },
	{ 0xed998806, "ath9k_hw_startpcureceive" },
	{ 0x66b62112, "ath9k_hw_setuptxqueue" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0xf557fe85, "ath9k_hw_reset" },
	{ 0x5294487b, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x59593e6f, "ath9k_cmn_rx_accept" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x9b873db7, "ath9k_hw_btcoex_init_3wire" },
	{ 0xf35d6b87, "ath_key_config" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x29c23e15, "ath9k_hw_reset_calvalid" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xb9788c68, "usb_anchor_urb" },
	{ 0x7d7404bc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,ath9k_hw,ath9k_common,ath,cfg80211,rfkill");

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "67AF1BD73939DD5D46B70EB");
