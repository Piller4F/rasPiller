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
	{ 0xb80e5f41, "skb_queue_head" },
	{ 0xe3c55dba, "ieee80211_rx_irqsafe" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa8a68ecf, "_dev_printk" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2e34abeb, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xcbfa914e, "ieee80211_unregister_hw" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x8f56ef47, "__ieee80211_get_assoc_led_name" },
	{ 0x9d50b929, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x5a08e008, "skb_unlink" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0xc5cfa4dc, "ieee80211_stop_queue" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc059d234, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x97308019, "led_classdev_register_ext" },
	{ 0x89d873f9, "ieee80211_free_txskb" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xb7c0f443, "sort" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x6c1405a8, "ieee80211_queue_delayed_work" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0x44239691, "_dev_info" },
	{ 0x65003b36, "__ieee80211_get_rx_led_name" },
	{ 0xa916b694, "strnlen" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x15ea399c, "ieee80211_tx_status_irqsafe" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x24f16b03, "__ieee80211_get_tx_led_name" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x43782f6e, "ieee80211_wake_queue" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x79d39d9e, "__ieee80211_get_radio_led_name" },
	{ 0x7ae81428, "ieee80211_get_hdrlen_from_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xd065bc19, "ieee80211_register_hw" },
	{ 0x5f3c0c17, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xd33d7ff7, "regulatory_hint" },
	{ 0x9263715b, "ieee80211_beacon_loss" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5294487b, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x62d17fa5, "skb_put" },
};

MODULE_INFO(depends, "mac80211,cfg80211,crc-ccitt");


MODULE_INFO(srcversion, "D33AF8A062178A27B75B2CF");
