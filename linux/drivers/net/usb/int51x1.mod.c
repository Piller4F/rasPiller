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
	{ 0x31fc241, "dev_get_tstats64" },
	{ 0x63b230c3, "usbnet_tx_timeout" },
	{ 0xfc22a0a7, "usbnet_change_mtu" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0xd7e682ff, "eth_mac_addr" },
	{ 0xbd5badd, "usbnet_start_xmit" },
	{ 0x75cff1e, "usbnet_stop" },
	{ 0x96c5a9d0, "usbnet_open" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xdcb764ad, "memset" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0x2425fd6f, "skb_copy_expand" },
	{ 0x835033cd, "netdev_err" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x101f2543, "usbnet_get_endpoints" },
	{ 0x1f54cb6, "usbnet_get_ethernet_addr" },
	{ 0xe5c02461, "netdev_info" },
	{ 0x1779b725, "usbnet_write_cmd_async" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v09E1p5121d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "656077890AD6CF48C0516F7");
