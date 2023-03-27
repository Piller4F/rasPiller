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
	{ 0x2d3385d3, "system_wq" },
	{ 0xe5c02461, "netdev_info" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9586abbd, "wiphy_free" },
	{ 0x66c5dba2, "cfg80211_connect_done" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x3e6a656a, "netdev_notice" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xc113b815, "cfg80211_inform_bss_data" },
	{ 0x50a5f46d, "usb_init_urb" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xdb1e1d6f, "netif_carrier_on" },
	{ 0xc1b99792, "ieee80211_channel_to_freq_khz" },
	{ 0xad841033, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdd64e639, "strscpy" },
	{ 0x604e2abd, "usb_unlink_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x9e540b77, "netif_rx_ni" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5882dfc, "usb_get_status" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xc051115b, "free_netdev" },
	{ 0x193976eb, "wiphy_unregister" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x9166fada, "strncpy" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xafef5754, "ieee80211_get_channel_khz" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x71a3d10, "cfg80211_roamed" },
	{ 0x4f967470, "netif_device_detach" },
	{ 0x7daff04c, "cfg80211_put_bss" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0x7e88e4af, "wiphy_register" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7241c452, "usb_reset_device" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xc8f4b8f8, "usb_clear_halt" },
	{ 0x92997ed8, "_printk" },
	{ 0xc921455c, "wiphy_new_nm" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0xc42e99a7, "eth_type_trans" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x835033cd, "netdev_err" },
	{ 0xcc3c5964, "ether_setup" },
	{ 0x67252eac, "cfg80211_disconnected" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc7f84d1b, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x3e6c7f03, "cfg80211_scan_done" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("usb:v04BBp0922d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v09AAp3642d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p0408d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p0421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2236d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2212d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DEp7A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0967p0204d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F3p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2821p3300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v50C2p4013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C02p14EAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap168Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap3503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2821p3300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p6106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap4017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BB2p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9016p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0543p0F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Cp1022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0033d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "34307853ACAFC9B8874F824");
