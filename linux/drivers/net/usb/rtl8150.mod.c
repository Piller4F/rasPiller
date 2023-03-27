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
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x3e6a656a, "netdev_notice" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x1b6678ba, "alloc_etherdev_mqs" },
	{ 0x60e5cc72, "netif_device_attach" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x40761ec2, "netif_rx" },
	{ 0xc42e99a7, "eth_type_trans" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x58b68b89, "usb_control_msg_recv" },
	{ 0x19aaa3b6, "usb_control_msg_send" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc051115b, "free_netdev" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x81bb8729, "__dev_kfree_skb_irq" },
	{ 0x604e2abd, "usb_unlink_urb" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xdb1e1d6f, "netif_carrier_on" },
	{ 0x4f967470, "netif_device_detach" },
	{ 0xad841033, "netif_carrier_off" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x44239691, "_dev_info" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3980p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p401Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p401Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8D73106A18612B69D3718B3");
