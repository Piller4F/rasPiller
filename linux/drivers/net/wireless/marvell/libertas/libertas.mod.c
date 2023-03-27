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
	{ 0x2d3385d3, "system_wq" },
	{ 0xe5c02461, "netdev_info" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa3ba554b, "ieee80211_get_num_supported_channels" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x9586abbd, "wiphy_free" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x66c5dba2, "cfg80211_connect_done" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xf97dfac9, "generic_file_llseek" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x2310adee, "ieee80211_bss_get_elem" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xc113b815, "cfg80211_inform_bss_data" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xdb1e1d6f, "netif_carrier_on" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc1b99792, "ieee80211_channel_to_freq_khz" },
	{ 0xad841033, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0xb62e0d25, "netif_rx_any_context" },
	{ 0xa4aa6834, "netdev_alert" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x40761ec2, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x75d9364b, "cfg80211_get_bss" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc051115b, "free_netdev" },
	{ 0x193976eb, "wiphy_unregister" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xeb44b0ac, "cfg80211_michael_mic_failure" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xe7f1fdf9, "simple_open" },
	{ 0xb5617c05, "request_firmware_nowait" },
	{ 0x88096c46, "cfg80211_ibss_joined" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xafef5754, "ieee80211_get_channel_khz" },
	{ 0x60e5cc72, "netif_device_attach" },
	{ 0x4f967470, "netif_device_detach" },
	{ 0x7daff04c, "cfg80211_put_bss" },
	{ 0x7e88e4af, "wiphy_register" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xc921455c, "wiphy_new_nm" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0xc42e99a7, "eth_type_trans" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x835033cd, "netdev_err" },
	{ 0xcc3c5964, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x67252eac, "cfg80211_disconnected" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xd33d7ff7, "regulatory_hint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x3e6c7f03, "cfg80211_scan_done" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "BE6A5964F84DAD98B7D9818");
