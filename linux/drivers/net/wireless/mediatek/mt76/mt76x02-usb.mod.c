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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8ed7e2dc, "__mt76_poll" },
	{ 0xef34bf3e, "hrtimer_active" },
	{ 0xe2d30cc1, "mt76x02_mac_set_beacon" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xfaeb6dc, "mt76_skb_adjust_pad" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb4d88b4, "mt76u_vendor_request" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xdcb764ad, "memset" },
	{ 0x4bdbd4d3, "mt76x02_mac_write_txwi" },
	{ 0x59dc0b02, "mt76x02_init_beacon_config" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x289ffe5f, "mt76_csa_finish" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfaf1442c, "usb_bulk_msg" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x7ae81428, "ieee80211_get_hdrlen_from_skb" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x5db6c5bc, "mt76x02_mac_reset_counters" },
	{ 0xc5710d18, "__mt76_tx_complete_skb" },
	{ 0xb282972a, "mt76u_single_wr" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xa97a13f3, "mt76_tx_status_skb_add" },
	{ 0x6d065755, "mt76_csa_check" },
	{ 0xefeba0d6, "mt76x02_mcu_parse_response" },
	{ 0x1beb7800, "mt76_mcu_msg_alloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8c6ab339, "mt76x02_resync_beacon_timer" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x1d5feeb2, "mt76x02_remove_hdr_pad" },
	{ 0xa0732ae9, "mt76x02_enqueue_buffered_bc" },
	{ 0xfed00505, "ieee80211_iterate_interfaces" },
	{ 0x12e7080, "mt76x02_update_beacon_iter" },
};

MODULE_INFO(depends, "mt76,mt76x02-lib,mt76-usb,cfg80211,mac80211");


MODULE_INFO(srcversion, "EA4C3C61CF001812D2F8497");
