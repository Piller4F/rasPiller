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
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xe3c55dba, "ieee80211_rx_irqsafe" },
	{ 0x7ae81428, "ieee80211_get_hdrlen_from_skb" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x81bb8729, "__dev_kfree_skb_irq" },
	{ 0xd065bc19, "ieee80211_register_hw" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0xfaf1442c, "usb_bulk_msg" },
	{ 0xdcb764ad, "memset" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4fcafe41, "usb_alloc_coherent" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc059d234, "ieee80211_alloc_hw_nm" },
	{ 0x15ea399c, "ieee80211_tx_status_irqsafe" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x89d873f9, "ieee80211_free_txskb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0xabbc5665, "ieee80211_wake_queues" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x5294487b, "ieee80211_free_hw" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xb4af96ed, "usb_free_coherent" },
	{ 0xcbfa914e, "ieee80211_unregister_hw" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x44afd3ff, "ieee80211_stop_queues" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x44239691, "_dev_info" },
	{ 0x31f94d90, "ieee80211_find_sta" },
	{ 0x6c1405a8, "ieee80211_queue_delayed_work" },
	{ 0x96e4c6eb, "ieee80211_queue_work" },
	{ 0xa6257a2f, "complete" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xd81bd04c, "usb_submit_urb" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("usb:v168Cp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v168Cp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0713d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0710d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v129Bp160Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v129Bp160Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p5F00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p5F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4506d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4507d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3205d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3206d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0826d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0827d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0828d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0829d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p4250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p4251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F03d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C54163269C688FB706E791D");
