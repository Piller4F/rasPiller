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
	{ 0x27339f09, "param_ops_int" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xdb1e1d6f, "netif_carrier_on" },
	{ 0xa7ba0485, "wireless_send_event" },
	{ 0xad841033, "netif_carrier_off" },
	{ 0x40761ec2, "netif_rx" },
	{ 0xc42e99a7, "eth_type_trans" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x44239691, "_dev_info" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1b6678ba, "alloc_etherdev_mqs" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0xf9a482f9, "msleep" },
	{ 0x60e5cc72, "netif_device_attach" },
	{ 0x4f967470, "netif_device_detach" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x604e2abd, "usb_unlink_urb" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc051115b, "free_netdev" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("usb:v0586p3400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp6051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6823d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C77AF31867BF74453699E10");
