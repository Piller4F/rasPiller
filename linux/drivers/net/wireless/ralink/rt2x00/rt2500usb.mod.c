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
	{ 0x13445e92, "param_ops_bool" },
	{ 0x901551cb, "rt2x00usb_resume" },
	{ 0xf7451e2b, "rt2x00usb_suspend" },
	{ 0x520edbf6, "rt2x00usb_disconnect" },
	{ 0xef4fd595, "rt2x00mac_tx_frames_pending" },
	{ 0xbf1e579c, "rt2x00mac_get_ringparam" },
	{ 0x11f46fef, "rt2x00mac_get_antenna" },
	{ 0x4166df81, "rt2x00mac_set_antenna" },
	{ 0x4c24b814, "rt2x00mac_flush" },
	{ 0x73927adc, "rt2x00mac_rfkill_poll" },
	{ 0x7936c399, "rt2x00mac_conf_tx" },
	{ 0x4a44875b, "rt2x00mac_get_stats" },
	{ 0x60077e4e, "rt2x00mac_sw_scan_complete" },
	{ 0xc214e95c, "rt2x00mac_sw_scan_start" },
	{ 0x8b4d9b97, "rt2x00mac_set_key" },
	{ 0x84a57c04, "rt2x00mac_set_tim" },
	{ 0xbe864785, "rt2x00mac_configure_filter" },
	{ 0x3047a7e1, "rt2x00mac_bss_info_changed" },
	{ 0x8dcb15d5, "rt2x00mac_config" },
	{ 0x725733f5, "rt2x00mac_remove_interface" },
	{ 0x4fb34f1c, "rt2x00mac_add_interface" },
	{ 0x62f11681, "rt2x00mac_stop" },
	{ 0x910a6240, "rt2x00mac_start" },
	{ 0x292812de, "rt2x00mac_tx" },
	{ 0x95a7c7a2, "rt2x00usb_flush_queue" },
	{ 0xce27bfcc, "rt2x00usb_kick_queue" },
	{ 0x37253290, "rt2x00usb_watchdog" },
	{ 0xa11e8bc8, "rt2x00usb_clear_entry" },
	{ 0xdb046df9, "rt2x00usb_uninitialize" },
	{ 0xc5253025, "rt2x00usb_initialize" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x4b548358, "rt2x00usb_disable_radio" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x44239691, "_dev_info" },
	{ 0xf396a7c2, "rt2x00lib_set_mac_address" },
	{ 0x970b36c3, "rt2x00usb_vendor_request" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x223ca4ca, "rt2x00usb_vendor_request_buff" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb9d0033d, "rt2x00usb_vendor_req_buff_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8bdb586a, "rt2x00usb_probe" },
};

MODULE_INFO(depends, "rt2x00usb,rt2x00lib");

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7F73ED42D4DF78E140372C9");
