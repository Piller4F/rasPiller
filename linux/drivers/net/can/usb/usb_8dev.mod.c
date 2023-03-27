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
	{ 0xaae7faf5, "can_change_mtu" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xb9f3fc35, "can_free_echo_skb" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x738d543, "can_put_echo_skb" },
	{ 0x1444e565, "usb_unanchor_urb" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xb9788c68, "usb_anchor_urb" },
	{ 0x4fcafe41, "usb_alloc_coherent" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0x7da4ac10, "open_candev" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0x2707f7c0, "can_get_echo_skb" },
	{ 0x4e553255, "close_candev" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x44239691, "_dev_info" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x3a68c7b2, "register_candev" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0xe3cb7337, "alloc_candev_mqs" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x461ccb2f, "usb_string" },
	{ 0x4f967470, "netif_device_detach" },
	{ 0x2713098, "can_bus_off" },
	{ 0x30cceca, "alloc_can_err_skb" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x40761ec2, "netif_rx" },
	{ 0xe432fc34, "alloc_can_skb" },
	{ 0xc7f84d1b, "netdev_warn" },
	{ 0x835033cd, "netdev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfaf1442c, "usb_bulk_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf0f31154, "free_candev" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0xe5c02461, "netdev_info" },
	{ 0xb4af96ed, "usb_free_coherent" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v0483p1234d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A067C334C1A9B190F0FED8F");
