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
	{ 0xba7a88df, "ethtool_op_get_ts_info" },
	{ 0x1df8d46d, "ethtool_op_get_link" },
	{ 0xd17f6bb8, "usbnet_nway_reset" },
	{ 0xfed896, "usbnet_set_msglevel" },
	{ 0x5991d21d, "usbnet_get_msglevel" },
	{ 0x31fc241, "dev_get_tstats64" },
	{ 0x63b230c3, "usbnet_tx_timeout" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0xbd5badd, "usbnet_start_xmit" },
	{ 0x75cff1e, "usbnet_stop" },
	{ 0x96c5a9d0, "usbnet_open" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xdb1e1d6f, "netif_carrier_on" },
	{ 0xdb6233b1, "mii_ethtool_gset" },
	{ 0xdcb764ad, "memset" },
	{ 0xce8f6853, "mii_nway_restart" },
	{ 0x101f2543, "usbnet_get_endpoints" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9760f20, "usbnet_update_max_qlen" },
	{ 0x835033cd, "netdev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x162d047, "eth_platform_get_mac_address" },
	{ 0xd834ca5f, "usbnet_suspend" },
	{ 0x3e25742e, "usbnet_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x99347c69, "usbnet_skb_return" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x1779b725, "usbnet_write_cmd_async" },
	{ 0xe5c02461, "netdev_info" },
	{ 0xe5d5c9d1, "usbnet_link_change" },
	{ 0x2fd401d, "generic_mii_ioctl" },
	{ 0x5b32a47d, "mii_ethtool_get_link_ksettings" },
	{ 0x9b534c15, "mii_ethtool_set_link_ksettings" },
	{ 0x1ee6ef1e, "usbnet_write_cmd" },
	{ 0xafd63a61, "usbnet_write_cmd_nopm" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc7f84d1b, "netdev_warn" },
	{ 0xac34396b, "usbnet_read_cmd" },
	{ 0x58e7b64a, "usbnet_read_cmd_nopm" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0xeb451c00, "pskb_expand_head" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p3610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0128d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0179d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6C1FCF063025567E7E0CF65");
