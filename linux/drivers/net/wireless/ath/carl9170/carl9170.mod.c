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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xaad0ae78, "__bitmap_shift_right" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x96e4c6eb, "ieee80211_queue_work" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x2113ba38, "usb_get_from_anchor" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2e34abeb, "ieee80211_beacon_get_tim" },
	{ 0x20be2c89, "ath_regd_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0xcbfa914e, "ieee80211_unregister_hw" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x8f56ef47, "__ieee80211_get_assoc_led_name" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x44afd3ff, "ieee80211_stop_queues" },
	{ 0x1444e565, "usb_unanchor_urb" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0xc5cfa4dc, "ieee80211_stop_queue" },
	{ 0x771f85fb, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xc059d234, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x97308019, "led_classdev_register_ext" },
	{ 0x89d873f9, "ieee80211_free_txskb" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xabbc5665, "ieee80211_wake_queues" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x36185f1f, "ath_is_mybeacon" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3d632891, "input_set_capability" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x81bb8729, "__dev_kfree_skb_irq" },
	{ 0x7f73b94f, "ieee80211_sta_block_awake" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xb5617c05, "request_firmware_nowait" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x6c1405a8, "ieee80211_queue_delayed_work" },
	{ 0x98095400, "ath_reg_notifier_apply" },
	{ 0x703dd09b, "wiphy_to_ieee80211_hw" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x54acd503, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x9a73d57e, "usb_queue_reset_device" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0x44239691, "_dev_info" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0xf98605d5, "ath_regd_get_band_ctl" },
	{ 0xa916b694, "strnlen" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7241c452, "usb_reset_device" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x15ea399c, "ieee80211_tx_status_irqsafe" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0x7c45c7f8, "usb_driver_release_interface" },
	{ 0xfba4db8a, "ieee80211_get_tx_rates" },
	{ 0xd6011851, "input_free_device" },
	{ 0x31f94d90, "ieee80211_find_sta" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x24f16b03, "__ieee80211_get_tx_led_name" },
	{ 0x842f046d, "usb_poison_anchored_urbs" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x38b1d863, "usb_get_intf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x43782f6e, "ieee80211_wake_queue" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x76d995a6, "ieee80211_restart_hw" },
	{ 0xd065bc19, "ieee80211_register_hw" },
	{ 0x5f3c0c17, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xd33d7ff7, "regulatory_hint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1b396629, "input_unregister_device" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x5294487b, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xa04ead95, "usb_ifnum_to_if" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x86b13d2a, "usb_unpoison_anchored_urbs" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xb9788c68, "usb_anchor_urb" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0xcc891ede, "usb_put_intf" },
	{ 0x62f57635, "ieee80211_stop_tx_ba_session" },
	{ 0x565c3dfc, "ieee80211_queue_stopped" },
	{ 0x6f140995, "input_allocate_device" },
};

MODULE_INFO(depends, "mac80211,ath,cfg80211");

MODULE_ALIAS("usb:v0CF3p9170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vCACEp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A0Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1221d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0804d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0326d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3417d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApF522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p5304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0249d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p02B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p9170d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7CB51F36064CB015322C5AA");
