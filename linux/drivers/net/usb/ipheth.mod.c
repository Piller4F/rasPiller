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
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x28537419, "usb_set_interface" },
	{ 0xdb1e1d6f, "netif_carrier_on" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x40761ec2, "netif_rx" },
	{ 0xc42e99a7, "eth_type_trans" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0x56470118, "__warn_printk" },
	{ 0xdcb764ad, "memset" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0xc051115b, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x44239691, "_dev_info" },
	{ 0xc3f110d4, "netif_tx_stop_all_queues" },
	{ 0xad841033, "netif_carrier_off" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0x4fcafe41, "usb_alloc_coherent" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x7e5f8713, "usb_altnum_to_altsetting" },
	{ 0xdd64e639, "strscpy" },
	{ 0x1b6678ba, "alloc_etherdev_mqs" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x604e2abd, "usb_unlink_urb" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xb4af96ed, "usb_free_coherent" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFiscFDip01in*");

MODULE_INFO(srcversion, "EDC16BF11C212DE839558B9");
