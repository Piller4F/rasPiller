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
	{ 0xe0482748, "ieee80211_rts_duration" },
	{ 0x884deb9d, "eeprom_93cx6_read" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe3c55dba, "ieee80211_rx_irqsafe" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2e34abeb, "ieee80211_beacon_get_tim" },
	{ 0xcbfa914e, "ieee80211_unregister_hw" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc962f319, "wiphy_rfkill_start_polling" },
	{ 0x9d50b929, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x5a08e008, "skb_unlink" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x1444e565, "usb_unanchor_urb" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xc059d234, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x97308019, "led_classdev_register_ext" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x81bb8729, "__dev_kfree_skb_irq" },
	{ 0x3939f8f0, "rfkill_pause_polling" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x6c1405a8, "ieee80211_queue_delayed_work" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0x44239691, "_dev_info" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x65003b36, "__ieee80211_get_rx_led_name" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7241c452, "usb_reset_device" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0x15ea399c, "ieee80211_tx_status_irqsafe" },
	{ 0x92997ed8, "_printk" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x24f16b03, "__ieee80211_get_tx_led_name" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb97b51b0, "ieee80211_generic_frame_duration" },
	{ 0x79d39d9e, "__ieee80211_get_radio_led_name" },
	{ 0xe047737d, "ieee80211_ctstoself_duration" },
	{ 0xd065bc19, "ieee80211_register_hw" },
	{ 0x5f3c0c17, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x5294487b, "ieee80211_free_hw" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xb9788c68, "usb_anchor_urb" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0x565c3dfc, "ieee80211_queue_stopped" },
};

MODULE_INFO(depends, "mac80211,eeprom_93cx6,cfg80211,rfkill");

MODULE_ALIAS("usb:v0B05p171Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp705Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8198d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p010Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p6100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p6A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0pCA02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p9401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D1pABE6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6232d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p8187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0073d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4F6A582E4AF8D60CE8CC176");
