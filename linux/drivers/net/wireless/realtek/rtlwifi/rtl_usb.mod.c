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
	{ 0x4b530957, "rtl_deinit_deferred_work" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x988987da, "rtl_deinit_core" },
	{ 0x2113ba38, "usb_get_from_anchor" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xcbfa914e, "ieee80211_unregister_hw" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0x1444e565, "usb_unanchor_urb" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc059d234, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x285a355c, "rtl_init_core" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x5eea823c, "rtl_action_proc" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x2d32cdfc, "rtl_lps_change_work_callback" },
	{ 0x63e99f0, "rtl_init_rx_config" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xb4af96ed, "usb_free_coherent" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0x6db3ba37, "rtl_update_beacon_work_callback" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0x15ea399c, "ieee80211_tx_status_irqsafe" },
	{ 0xce315e5c, "rtl_ops" },
	{ 0x92997ed8, "_printk" },
	{ 0x9d3bacd3, "_rtl_dbg_print" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd065bc19, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5294487b, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0xa6257a2f, "complete" },
	{ 0x4fcafe41, "usb_alloc_coherent" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xa965c1da, "rtl_beacon_statistic" },
	{ 0xb9788c68, "usb_anchor_urb" },
	{ 0x7d7404bc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,rtlwifi");


MODULE_INFO(srcversion, "7047DB6E7BDCFD75C67904A");
