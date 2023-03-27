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
	{ 0xe5c02461, "netdev_info" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xdb6233b1, "mii_ethtool_gset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x911c3dd, "phy_disconnect" },
	{ 0x3e25742e, "usbnet_resume" },
	{ 0x836c7d88, "phy_do_ioctl_running" },
	{ 0x8e6b1a9e, "net_selftest_get_count" },
	{ 0xda360153, "phy_stop" },
	{ 0xde6ca39a, "usbnet_probe" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xffcf4ed4, "__devm_mdiobus_register" },
	{ 0xe5d5c9d1, "usbnet_link_change" },
	{ 0xa3ad68c0, "__mdiobus_register" },
	{ 0xb3314b2d, "phy_ethtool_nway_reset" },
	{ 0x18d743f7, "usbnet_disconnect" },
	{ 0x2fd401d, "generic_mii_ioctl" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75cff1e, "usbnet_stop" },
	{ 0x9760f20, "usbnet_update_max_qlen" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb2e932ab, "mdiobus_unregister" },
	{ 0xf01b8a0a, "net_selftest" },
	{ 0x6acefef, "devm_mdiobus_alloc_size" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x31fc241, "dev_get_tstats64" },
	{ 0xba03d744, "phy_print_status" },
	{ 0xd17f6bb8, "usbnet_nway_reset" },
	{ 0xdcb764ad, "memset" },
	{ 0xe40953c5, "phy_start" },
	{ 0xce8f6853, "mii_nway_restart" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x162d047, "eth_platform_get_mac_address" },
	{ 0xe84b5437, "mdiobus_free" },
	{ 0x101f2543, "usbnet_get_endpoints" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd7b2180f, "usbnet_get_drvinfo" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x58e7b64a, "usbnet_read_cmd_nopm" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xbd5badd, "usbnet_start_xmit" },
	{ 0xd834ca5f, "usbnet_suspend" },
	{ 0xcfa5a248, "phy_suspend" },
	{ 0x85a9bdc5, "usbnet_get_link" },
	{ 0xafd63a61, "usbnet_write_cmd_nopm" },
	{ 0xf043c385, "phy_ethtool_get_link_ksettings" },
	{ 0x2425fd6f, "skb_copy_expand" },
	{ 0xac34396b, "usbnet_read_cmd" },
	{ 0x9fc4c819, "usbnet_get_link_ksettings_mii" },
	{ 0x63b230c3, "usbnet_tx_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4ab037cb, "genphy_resume" },
	{ 0x99347c69, "usbnet_skb_return" },
	{ 0x96c5a9d0, "usbnet_open" },
	{ 0x3cec16f9, "mii_check_media" },
	{ 0x5991d21d, "usbnet_get_msglevel" },
	{ 0x835033cd, "netdev_err" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x314bdb98, "usbnet_set_link_ksettings_mii" },
	{ 0xc7f84d1b, "netdev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd8db473b, "usbnet_unlink_rx_urbs" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0xcc0ed40f, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6f57dd07, "phy_attached_info" },
	{ 0xc090c376, "net_selftest_get_strings" },
	{ 0x1779b725, "usbnet_write_cmd_async" },
	{ 0xfc22a0a7, "usbnet_change_mtu" },
	{ 0x556e37a9, "phy_connect" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x975f6639, "mii_link_ok" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xd7e682ff, "eth_mac_addr" },
	{ 0x1ee6ef1e, "usbnet_write_cmd" },
	{ 0xfed896, "usbnet_set_msglevel" },
	{ 0xb07747ea, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7748BDD69C7C3868BACAC1E");
