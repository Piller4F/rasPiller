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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9586abbd, "wiphy_free" },
	{ 0x66c5dba2, "cfg80211_connect_done" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc113b815, "cfg80211_inform_bss_data" },
	{ 0x6f14b659, "cfg80211_conn_failed" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xef265f27, "cfg80211_chandef_create" },
	{ 0xdb1e1d6f, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x42d9296a, "skb_copy" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xad841033, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xf089525a, "cfg80211_unregister_wdev" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd0c2b116, "cfg80211_check_station_change" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x171fd891, "cfg80211_mgmt_tx_status" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0xf529e626, "cfg80211_pmksa_candidate_notify" },
	{ 0xdcb764ad, "memset" },
	{ 0x9e540b77, "netif_rx_ni" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0x75d9364b, "cfg80211_get_bss" },
	{ 0x1df8d46d, "ethtool_op_get_link" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc051115b, "free_netdev" },
	{ 0x193976eb, "wiphy_unregister" },
	{ 0xc1779a41, "cfg80211_del_sta_sinfo" },
	{ 0x5792f848, "strlcpy" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0xbe894b88, "cfg80211_rx_mgmt_khz" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xeb44b0ac, "cfg80211_michael_mic_failure" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x88096c46, "cfg80211_ibss_joined" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2ab6700d, "cfg80211_get_drvinfo" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0xafef5754, "ieee80211_get_channel_khz" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0x2425fd6f, "skb_copy_expand" },
	{ 0xb1c6f2bc, "cfg80211_ch_switch_notify" },
	{ 0x71a3d10, "cfg80211_roamed" },
	{ 0x7daff04c, "cfg80211_put_bss" },
	{ 0x7e88e4af, "wiphy_register" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1dfcf714, "cfg80211_ready_on_channel" },
	{ 0x92997ed8, "_printk" },
	{ 0xc921455c, "wiphy_new_nm" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0xc42e99a7, "eth_type_trans" },
	{ 0xdf316014, "of_find_compatible_node" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x63848f67, "of_get_property" },
	{ 0xcc3c5964, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x67252eac, "cfg80211_disconnected" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xaad42746, "netdev_set_default_ethtool_ops" },
	{ 0xbb50a1a1, "cfg80211_new_sta" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xd33d7ff7, "regulatory_hint" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcf2a6966, "up" },
	{ 0x96848186, "scnprintf" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x38261111, "cfg80211_register_netdevice" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0xf39e38a9, "cfg80211_remain_on_channel_expired" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x6e5b9fc4, "cfg80211_sched_scan_stopped" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3e6c7f03, "cfg80211_scan_done" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x329543f, "cfg80211_cqm_txe_notify" },
	{ 0xa0a4d862, "cfg80211_sched_scan_results" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "CC524CD688F72B103591012");
