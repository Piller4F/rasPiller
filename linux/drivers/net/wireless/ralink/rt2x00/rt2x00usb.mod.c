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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x7c0fa1d8, "rt2x00lib_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1444e565, "usb_unanchor_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x530b957e, "rt2x00lib_dmastart" },
	{ 0xbd6c968e, "rt2x00queue_flush_queue" },
	{ 0xc059d234, "ieee80211_alloc_hw_nm" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x6f7ebbc0, "rt2x00queue_for_each_entry" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x73cd00b, "rt2x00queue_start_queue" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x1df962d4, "rt2x00lib_remove_dev" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x4853c2a0, "rt2x00queue_get_entry" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7241c452, "usb_reset_device" },
	{ 0xd28d432f, "rt2x00lib_rxdone" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x5294487b, "ieee80211_free_hw" },
	{ 0xd93bf269, "rt2x00lib_txdone_noinfo" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8e7cd2c4, "rt2x00lib_dmadone" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0x7855396c, "rt2x00lib_probe_dev" },
	{ 0x90311809, "rt2x00queue_stop_queue" },
	{ 0x49de338b, "rt2x00lib_suspend" },
	{ 0xb9788c68, "usb_anchor_urb" },
	{ 0x76f7ca05, "__skb_pad" },
	{ 0x7d7404bc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "B6D6E998F10E2B42CD4BEDA");
