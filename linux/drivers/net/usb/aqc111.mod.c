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
	{ 0x1df8d46d, "ethtool_op_get_link" },
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
	{ 0xe5c02461, "netdev_info" },
	{ 0xd834ca5f, "usbnet_suspend" },
	{ 0x36d1173e, "usb_driver_set_configuration" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x101f2543, "usbnet_get_endpoints" },
	{ 0x66253a35, "usb_reset_configuration" },
	{ 0x3e25742e, "usbnet_resume" },
	{ 0x58e7b64a, "usbnet_read_cmd_nopm" },
	{ 0xad841033, "netif_carrier_off" },
	{ 0xac34396b, "usbnet_read_cmd" },
	{ 0xb0a6d269, "usb_autopm_put_interface" },
	{ 0x3ec6f939, "usb_autopm_get_interface" },
	{ 0xd7e682ff, "eth_mac_addr" },
	{ 0xdcb764ad, "memset" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0x2425fd6f, "skb_copy_expand" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x1779b725, "usbnet_write_cmd_async" },
	{ 0xc7f84d1b, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd7b2180f, "usbnet_get_drvinfo" },
	{ 0x7e9c24b, "usbnet_defer_kevent" },
	{ 0x99347c69, "usbnet_skb_return" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x34df9eaa, "skb_trim" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "00405A31963E7DC18CE88E2");
