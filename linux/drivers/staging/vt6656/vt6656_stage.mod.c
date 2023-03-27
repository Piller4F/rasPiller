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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0xe0482748, "ieee80211_rts_duration" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe3c55dba, "ieee80211_rx_irqsafe" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x27339f09, "param_ops_int" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2e34abeb, "ieee80211_beacon_get_tim" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xcbfa914e, "ieee80211_unregister_hw" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3ef339, "_dev_notice" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x44afd3ff, "ieee80211_stop_queues" },
	{ 0x1444e565, "usb_unanchor_urb" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xc059d234, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89d873f9, "ieee80211_free_txskb" },
	{ 0xabbc5665, "ieee80211_wake_queues" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x44239691, "_dev_info" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7241c452, "usb_reset_device" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0x15ea399c, "ieee80211_tx_status_irqsafe" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb97b51b0, "ieee80211_generic_frame_duration" },
	{ 0x7ae81428, "ieee80211_get_hdrlen_from_skb" },
	{ 0xe047737d, "ieee80211_ctstoself_duration" },
	{ 0xd065bc19, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1e0bced1, "ieee80211_get_tkip_p2k" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x5294487b, "ieee80211_free_hw" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xb9788c68, "usb_anchor_urb" },
	{ 0x7d7404bc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("usb:v160Ap3184d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "081428CBD424875F1925BBB");
