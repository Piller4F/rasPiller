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
	{ 0x13445e92, "param_ops_bool" },
	{ 0x27339f09, "param_ops_int" },
	{ 0xbea4a48b, "simple_attr_release" },
	{ 0x290f67dd, "debugfs_attr_write" },
	{ 0x28dc9dc5, "debugfs_attr_read" },
	{ 0x18fcb916, "no_llseek" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0xd7e682ff, "eth_mac_addr" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0x435b23bf, "unregister_pernet_device" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xc051115b, "free_netdev" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xec11806, "register_netdevice" },
	{ 0x66495ece, "dev_alloc_name" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0x42824447, "__class_create" },
	{ 0xc8c04121, "genl_unregister_family" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x3ac68802, "genl_register_family" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x54475510, "register_pernet_device" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0xd33d7ff7, "regulatory_hint" },
	{ 0xd065bc19, "ieee80211_register_hw" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x345caf15, "wiphy_apply_custom_regulatory" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9cbd5801, "device_bind_driver" },
	{ 0x12284cf8, "device_create" },
	{ 0xc059d234, "ieee80211_alloc_hw_nm" },
	{ 0x2abc88cb, "ieee80211_probereq_get" },
	{ 0x112fab07, "ieee80211_tx_prepare_skb" },
	{ 0x3a50d89a, "ieee80211_csa_finish" },
	{ 0x65c5c813, "ieee80211_beacon_cntdwn_is_complete" },
	{ 0x3318c8a3, "ieee80211_get_buffered_bc" },
	{ 0x2e34abeb, "ieee80211_beacon_get_tim" },
	{ 0xfba4db8a, "ieee80211_get_tx_rates" },
	{ 0xd4010db0, "__free_pages" },
	{ 0x668eb048, "__skb_ext_put" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf6149499, "dst_release" },
	{ 0xc801188a, "skb_add_rx_frag" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x42d9296a, "skb_copy" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0xffb7c514, "ida_free" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x2425fd6f, "skb_copy_expand" },
	{ 0xe3c55dba, "ieee80211_rx_irqsafe" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x15ea399c, "ieee80211_tx_status_irqsafe" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0xf942e76e, "nla_put_64bit" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x551ab123, "class_destroy" },
	{ 0x5294487b, "ieee80211_free_hw" },
	{ 0xe71535d7, "device_unregister" },
	{ 0x2cc6e855, "device_release_driver" },
	{ 0xcbfa914e, "ieee80211_unregister_hw" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0x828e22f4, "hrtimer_forward" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x43cd0ea3, "netlink_broadcast" },
	{ 0xadc5e3a, "init_net" },
	{ 0x5b2aaeb3, "genl_notify" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x40761ec2, "netif_rx" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x89d873f9, "ieee80211_free_txskb" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x54acd503, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x8bf81616, "ieee80211_scan_completed" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x47ef47d, "ieee80211_ready_on_channel" },
	{ 0xe386ba3b, "ieee80211_remain_on_channel_expired" },
	{ 0x6c1405a8, "ieee80211_queue_delayed_work" },
	{ 0x8878e4c0, "cfg80211_vendor_cmd_reply" },
	{ 0x31c71d2e, "__cfg80211_alloc_reply_skb" },
	{ 0x1b9bb5b0, "__cfg80211_send_event_skb" },
	{ 0x61fec8f, "__cfg80211_alloc_event_skb" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x671f926c, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xd19485fb, "ieee80211_radar_detected" },
	{ 0x2eb0acab, "simple_attr_open" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x3350c520, "netlink_unicast" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x8ce4e137, "genlmsg_put" },
	{ 0xdcb764ad, "memset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x98cf60b3, "strlen" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0xcc3c5964, "ether_setup" },
	{ 0x71ef59f8, "consume_skb" },
};

MODULE_INFO(depends, "cfg80211,mac80211");


MODULE_INFO(srcversion, "2067350332459C40E9ADB91");