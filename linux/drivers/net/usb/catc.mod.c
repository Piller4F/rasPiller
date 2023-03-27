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
	{ 0x1df8d46d, "ethtool_op_get_link" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0xd7e682ff, "eth_mac_addr" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1b6678ba, "alloc_etherdev_mqs" },
	{ 0x28537419, "usb_set_interface" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x40761ec2, "netif_rx" },
	{ 0xc42e99a7, "eth_type_trans" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0xad841033, "netif_carrier_off" },
	{ 0xdb1e1d6f, "netif_carrier_on" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x604e2abd, "usb_unlink_urb" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x4829a47e, "memcpy" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0xc051115b, "free_netdev" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xb6526fd6, "unregister_netdev" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0423p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0423p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D1p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E987D43C4FB5E393984CD6D");
