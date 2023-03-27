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
	{ 0x745f29e6, "sdio_writeb" },
	{ 0x804cd48b, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd6217d91, "brcmu_d11_attach" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe4e5a311, "cfg80211_cqm_rssi_notify" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1ad07240, "of_property_read_string_helper" },
	{ 0x9586abbd, "wiphy_free" },
	{ 0x7410aba2, "strreplace" },
	{ 0x66c5dba2, "cfg80211_connect_done" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0x3590c927, "of_find_node_opts_by_path" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0x2cc6e855, "device_release_driver" },
	{ 0x2bcd02e8, "irq_of_parse_and_map" },
	{ 0xea124bd1, "gcd" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xc113b815, "cfg80211_inform_bss_data" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x1906648e, "brcmu_boardrev_str" },
	{ 0x3452ed0f, "send_sig" },
	{ 0xf5596d89, "cfg80211_get_p2p_attr" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa61482f9, "sdio_enable_func" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xad1368cd, "cfg80211_report_wowlan_wakeup" },
	{ 0x32e3198, "sdio_claim_irq" },
	{ 0x18fcb916, "no_llseek" },
	{ 0x64b2ee63, "sdio_retune_release" },
	{ 0xe76f1a5c, "mmc_hw_reset" },
	{ 0x626d662c, "brcmu_pkt_buf_get_skb" },
	{ 0xdb1e1d6f, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc1b99792, "ieee80211_channel_to_freq_khz" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x393cac96, "seq_printf" },
	{ 0xad841033, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0xcafcf45e, "seq_write" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0xc310b981, "strnstr" },
	{ 0x4666b7ef, "driver_for_each_device" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe8f7c6f3, "brcmu_pktq_pdeq_tail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3ec6f939, "usb_autopm_get_interface" },
	{ 0x85df9b6c, "strsep" },
	{ 0xa8bee638, "of_device_is_compatible" },
	{ 0x13efbcbb, "__platform_driver_probe" },
	{ 0x999e8297, "vfree" },
	{ 0xbf5a8406, "pm_runtime_allow" },
	{ 0x3e5c819c, "brcmu_pktq_penq" },
	{ 0xf089525a, "cfg80211_unregister_wdev" },
	{ 0x4efde859, "brcmu_pktq_mdeq" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0xfd782340, "pm_runtime_forbid" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5a08e008, "skb_unlink" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x171fd891, "cfg80211_mgmt_tx_status" },
	{ 0xe2bd2e91, "param_ops_string" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x40761ec2, "netif_rx" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd81bdb63, "mmc_wait_for_req" },
	{ 0xcc17cb7b, "debugfs_create_u32" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xc2d2cb36, "sdio_writel" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8878e4c0, "cfg80211_vendor_cmd_reply" },
	{ 0xfb39d9b3, "brcmu_pktq_pdeq_match" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x9e540b77, "netif_rx_ni" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5459aeef, "dev_coredumpv" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x738cf560, "wiphy_read_of_freq_limits" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xa286bc3d, "efivar_entry_size" },
	{ 0xc051115b, "free_netdev" },
	{ 0x193976eb, "wiphy_unregister" },
	{ 0x9166fada, "strncpy" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x8e96caa3, "mmc_set_data_timeout" },
	{ 0xb2b601ef, "sdio_readl" },
	{ 0xc1779a41, "cfg80211_del_sta_sinfo" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf4f591ad, "brcmu_pktq_peek_tail" },
	{ 0x6b64b5b4, "brcmu_pktq_flush" },
	{ 0x283eb7a4, "sdio_retune_crc_enable" },
	{ 0xbe894b88, "cfg80211_rx_mgmt_khz" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xeb44b0ac, "cfg80211_michael_mic_failure" },
	{ 0x345caf15, "wiphy_apply_custom_regulatory" },
	{ 0x3b02ae0d, "irq_get_irq_data" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xe7f1fdf9, "simple_open" },
	{ 0xb5617c05, "request_firmware_nowait" },
	{ 0x88096c46, "cfg80211_ibss_joined" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9dbcd801, "brcmu_dbg_hex_dump" },
	{ 0xf1d26d04, "of_get_child_by_name" },
	{ 0xe607bf1e, "sdio_readsb" },
	{ 0xc43150f4, "sdio_unregister_driver" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0xb063f94e, "sdio_f0_writeb" },
	{ 0x4e20edaa, "cfg80211_check_combinations" },
	{ 0xafef5754, "ieee80211_get_channel_khz" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0x44239691, "_dev_info" },
	{ 0x9f984513, "strrchr" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x71a3d10, "cfg80211_roamed" },
	{ 0x7daff04c, "cfg80211_put_bss" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xa916b694, "strnlen" },
	{ 0x31c71d2e, "__cfg80211_alloc_reply_skb" },
	{ 0x7e88e4af, "wiphy_register" },
	{ 0xa959f72, "cfg80211_crit_proto_stopped" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x96c7b49e, "debugfs_create_devm_seqfile" },
	{ 0x45e3a808, "sdio_release_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa45d1904, "cfg80211_classify8021d" },
	{ 0xa1438c8f, "of_get_next_child" },
	{ 0xd44cdb92, "efivar_entry_get" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1dfcf714, "cfg80211_ready_on_channel" },
	{ 0x92997ed8, "_printk" },
	{ 0xc921455c, "wiphy_new_nm" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0xc42e99a7, "eth_type_trans" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0x622764d0, "sdio_f0_readb" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x63848f67, "of_get_property" },
	{ 0xcc3c5964, "ether_setup" },
	{ 0x67252eac, "cfg80211_disconnected" },
	{ 0xa17c0ccf, "brcmu_dotrev_str" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbb50a1a1, "cfg80211_new_sta" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xfe9a803a, "sdio_memcpy_toio" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x58ad4122, "brcmu_pktq_penq_head" },
	{ 0x82637058, "brcmu_pktq_init" },
	{ 0x380f1198, "cfg80211_port_authorized" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x96848186, "scnprintf" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x38261111, "cfg80211_register_netdevice" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf39e38a9, "cfg80211_remain_on_channel_expired" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xaf2386cf, "sdio_register_driver" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x1f997df8, "sdio_memcpy_fromio" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x6e5b9fc4, "cfg80211_sched_scan_stopped" },
	{ 0x7daa61cc, "sdio_claim_host" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x6f6460a1, "firmware_request_nowarn" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3e6c7f03, "cfg80211_scan_done" },
	{ 0xad0d135d, "sdio_retune_crc_disable" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0xc073981a, "brcmu_pkt_buf_free_skb" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xf7fb32ee, "sdio_set_block_size" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xb0a6d269, "usb_autopm_put_interface" },
	{ 0x38c69f96, "sdio_disable_func" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb2adf3f6, "sdio_release_host" },
	{ 0xe21bb33a, "sdio_retune_hold_now" },
	{ 0xa0a4d862, "cfg80211_sched_scan_results" },
	{ 0x2cdb04c0, "brcmu_pktq_mlen" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "brcmutil,cfg80211");

MODULE_ALIAS("sdio:c*v02D0dA887*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0dA94C*");
MODULE_ALIAS("sdio:c*v02D0dA94D*");
MODULE_ALIAS("sdio:c*v02D0dA962*");
MODULE_ALIAS("sdio:c*v02D0dA9A4*");
MODULE_ALIAS("sdio:c*v02D0d4335*");
MODULE_ALIAS("sdio:c*v02D0d4339*");
MODULE_ALIAS("sdio:c*v02D0dA9A6*");
MODULE_ALIAS("sdio:c*v02D0d4345*");
MODULE_ALIAS("sdio:c*v02D0dA9BF*");
MODULE_ALIAS("sdio:c*v02D0d4354*");
MODULE_ALIAS("sdio:c*v02D0d4356*");
MODULE_ALIAS("sdio:c*v02D0d4359*");
MODULE_ALIAS("sdio:c*v02D0d4373*");
MODULE_ALIAS("sdio:c*v02D0dA804*");
MODULE_ALIAS("sdio:c*v02D0dAAE8*");
MODULE_ALIAS("sdio:c*v02D0d4355*");
MODULE_ALIAS("usb:v0A5CpBD1Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD1Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4pBD29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp0BDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p0BDCd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9B4DAB62ED8E4372A771EFB");
