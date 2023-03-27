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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x19ed7456, "dev_remove_pack" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xfb47c0c8, "dev_add_pack" },
	{ 0xb81d8e1f, "proc_create_seq_private" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc5dc4f28, "dev_close" },
	{ 0x185f97af, "unregister_netdevice_queue" },
	{ 0x5a921311, "strncmp" },
	{ 0xc051115b, "free_netdev" },
	{ 0xec11806, "register_netdevice" },
	{ 0xdcb764ad, "memset" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0x92997ed8, "_printk" },
	{ 0xdf6501ba, "ax25_ip_xmit" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0x9fa52c93, "dev_queue_xmit" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x40761ec2, "netif_rx" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xadc5e3a, "init_net" },
	{ 0x2f07a679, "seq_puts" },
	{ 0x393cac96, "seq_printf" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8eaff41f, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xac93ae05, "ax25_bcast" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "95F2570245F23CFD5E20877");
