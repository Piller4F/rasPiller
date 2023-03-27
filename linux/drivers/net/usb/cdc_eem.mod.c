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
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x101f2543, "usbnet_get_endpoints" },
	{ 0x46658ac8, "usbnet_device_suggests_idle" },
	{ 0xc7f84d1b, "netdev_warn" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0x99347c69, "usbnet_skb_return" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xbabe8df, "skb_clone" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0x2425fd6f, "skb_copy_expand" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");

MODULE_INFO(srcversion, "6E94BB6D70A70DE46C39C66");
