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
	{ 0x1779b725, "usbnet_write_cmd_async" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xe5c02461, "netdev_info" },
	{ 0x1ee6ef1e, "usbnet_write_cmd" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xac34396b, "usbnet_read_cmd" },
	{ 0x101f2543, "usbnet_get_endpoints" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0x2425fd6f, "skb_copy_expand" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9E2E13DA664F28278A0A277");
