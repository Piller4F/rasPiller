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
	{ 0xf9a482f9, "msleep" },
	{ 0x101f2543, "usbnet_get_endpoints" },
	{ 0x44239691, "_dev_info" },
	{ 0x461ccb2f, "usb_string" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfaf1442c, "usb_bulk_msg" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x835033cd, "netdev_err" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe5c02461, "netdev_info" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x99347c69, "usbnet_skb_return" },
	{ 0x4829a47e, "memcpy" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0572pCB01d*dcFFdsc00dp00ic*isc*ip*in*");

MODULE_INFO(srcversion, "64708575B9B80E7459D6B44");