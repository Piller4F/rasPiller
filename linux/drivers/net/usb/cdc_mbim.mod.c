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
	{ 0x18d743f7, "usbnet_disconnect" },
	{ 0xde6ca39a, "usbnet_probe" },
	{ 0x31fc241, "dev_get_tstats64" },
	{ 0x63b230c3, "usbnet_tx_timeout" },
	{ 0xc324211b, "cdc_ncm_change_mtu" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0xd7e682ff, "eth_mac_addr" },
	{ 0xbd5badd, "usbnet_start_xmit" },
	{ 0x75cff1e, "usbnet_stop" },
	{ 0x96c5a9d0, "usbnet_open" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3566540c, "in6_dev_finish_destroy" },
	{ 0x2904ae06, "__vlan_find_dev_deep_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x67d6716d, "ipv6_stub" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x99347c69, "usbnet_skb_return" },
	{ 0x4829a47e, "memcpy" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x1fd40f69, "cdc_ncm_rx_verify_ndp16" },
	{ 0x138d9af6, "cdc_ncm_rx_verify_nth16" },
	{ 0xb0a6d269, "usb_autopm_put_interface" },
	{ 0x3ec6f939, "usb_autopm_get_interface" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x835033cd, "netdev_err" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x253cdf6d, "cdc_ncm_fill_tx_frame" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0x970e914f, "usb_match_id" },
	{ 0x28537419, "usb_set_interface" },
	{ 0xa36979f2, "usb_cdc_wdm_register" },
	{ 0xa595a106, "cdc_ncm_bind_common" },
	{ 0x3de187f2, "cdc_ncm_select_altsetting" },
	{ 0xd834ca5f, "usbnet_suspend" },
	{ 0x3e25742e, "usbnet_resume" },
	{ 0x4c1bab18, "cdc_ncm_unbind" },
};

MODULE_INFO(depends, "cdc_ncm,cdc-wdm");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v03F0pA31Dd*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1041d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1061d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1071d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");

MODULE_INFO(srcversion, "F6C662F4CF76360754210EA");
