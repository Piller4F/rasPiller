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
	{ 0xdd650298, "ieee80211_rx_napi" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x96e4c6eb, "ieee80211_queue_work" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x177c417b, "ieee80211_rts_get" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc1b99792, "ieee80211_channel_to_freq_khz" },
	{ 0x2e34abeb, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xcbfa914e, "ieee80211_unregister_hw" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0x1d257296, "led_classdev_resume" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x671f926c, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xc962f319, "wiphy_rfkill_start_polling" },
	{ 0x9d50b929, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x44afd3ff, "ieee80211_stop_queues" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0xc5cfa4dc, "ieee80211_stop_queue" },
	{ 0xcd638257, "ieee80211_tx_status" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x97308019, "led_classdev_register_ext" },
	{ 0x89d873f9, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3939f8f0, "rfkill_pause_polling" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x6f7812f1, "ieee80211_ctstoself_get" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x6c1405a8, "ieee80211_queue_delayed_work" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xe896f0d, "of_get_mac_address" },
	{ 0x44239691, "_dev_info" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb7219ef8, "dma_map_page_attrs" },
	{ 0x3318c8a3, "ieee80211_get_buffered_bc" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xa44c2eb0, "dev_driver_string" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x43782f6e, "ieee80211_wake_queue" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x7ae81428, "ieee80211_get_hdrlen_from_skb" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xd065bc19, "ieee80211_register_hw" },
	{ 0x5f3c0c17, "led_classdev_unregister" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdc1b8d4a, "ieee80211_tx_status_ext" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xc8ffacba, "led_classdev_suspend" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0xc82329ad, "dma_unmap_page_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xfed00505, "ieee80211_iterate_interfaces" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
};

MODULE_INFO(depends, "mac80211,cfg80211,rfkill");


MODULE_INFO(srcversion, "43318BB69BD27821B8FCF31");
