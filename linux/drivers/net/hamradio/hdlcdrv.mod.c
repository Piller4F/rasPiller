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
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdf6501ba, "ax25_ip_xmit" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x40761ec2, "netif_rx" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc051115b, "free_netdev" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0x81bb8729, "__dev_kfree_skb_irq" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8eaff41f, "ax25_header_ops" },
};

MODULE_INFO(depends, "ax25,crc-ccitt");


MODULE_INFO(srcversion, "EDA9EC2AEC39CD7CA9AA042");
