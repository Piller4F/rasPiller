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
	{ 0x3e25742e, "usbnet_resume" },
	{ 0xd834ca5f, "usbnet_suspend" },
	{ 0x18d743f7, "usbnet_disconnect" },
	{ 0xde6ca39a, "usbnet_probe" },
	{ 0x314bdb98, "usbnet_set_link_ksettings_mii" },
	{ 0x9fc4c819, "usbnet_get_link_ksettings_mii" },
	{ 0xd17f6bb8, "usbnet_nway_reset" },
	{ 0xfed896, "usbnet_set_msglevel" },
	{ 0x5991d21d, "usbnet_get_msglevel" },
	{ 0xd7b2180f, "usbnet_get_drvinfo" },
	{ 0x31fc241, "dev_get_tstats64" },
	{ 0x63b230c3, "usbnet_tx_timeout" },
	{ 0xfc22a0a7, "usbnet_change_mtu" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0xbd5badd, "usbnet_start_xmit" },
	{ 0x75cff1e, "usbnet_stop" },
	{ 0x96c5a9d0, "usbnet_open" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xce8f6853, "mii_nway_restart" },
	{ 0xf9a482f9, "msleep" },
	{ 0x101f2543, "usbnet_get_endpoints" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1ee6ef1e, "usbnet_write_cmd" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xac34396b, "usbnet_read_cmd" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xe5d5c9d1, "usbnet_link_change" },
	{ 0x1779b725, "usbnet_write_cmd_async" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2fd401d, "generic_mii_ioctl" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdb6233b1, "mii_ethtool_gset" },
	{ 0x3cec16f9, "mii_check_media" },
	{ 0x835033cd, "netdev_err" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x99347c69, "usbnet_skb_return" },
	{ 0xbabe8df, "skb_clone" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0FE6p9700d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "918C7BB8CD61898D4E4EA17");
