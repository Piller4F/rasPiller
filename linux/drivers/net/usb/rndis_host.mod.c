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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3e25742e, "usbnet_resume" },
	{ 0xde6ca39a, "usbnet_probe" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8acd93a4, "usbnet_cdc_unbind" },
	{ 0x18d743f7, "usbnet_disconnect" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x9d75b126, "usbnet_generic_cdc_bind" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0x75cff1e, "usbnet_stop" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x31fc241, "dev_get_tstats64" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0xbd5badd, "usbnet_start_xmit" },
	{ 0xd834ca5f, "usbnet_suspend" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x2425fd6f, "skb_copy_expand" },
	{ 0x44239691, "_dev_info" },
	{ 0x63b230c3, "usbnet_tx_timeout" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x99347c69, "usbnet_skb_return" },
	{ 0x7c45c7f8, "usb_driver_release_interface" },
	{ 0x96c5a9d0, "usbnet_open" },
	{ 0x9069c1b4, "usb_interrupt_msg" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xd7e682ff, "eth_mac_addr" },
};

MODULE_INFO(depends, "cdc_ether");

MODULE_ALIAS("usb:v1630p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v238Bp*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip03in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc04ip01in*");

MODULE_INFO(srcversion, "18BDBA44812194FCFB6BC50");
