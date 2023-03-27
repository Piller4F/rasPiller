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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xd7ea7094, "nf_unregister_queue_handler" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x7bcd6ef2, "nf_register_queue_handler" },
	{ 0x73a07593, "nfnetlink_subsys_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xaff22ef, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x1acd7981, "module_put" },
	{ 0x8fa49443, "nf_queue_entry_free" },
	{ 0x3b659824, "nf_queue_entry_get_refs" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3ef7d775, "__skb_gso_segment" },
	{ 0x92997ed8, "_printk" },
	{ 0xe3491e3d, "skb_checksum_help" },
	{ 0xadab222b, "nfnetlink_unicast" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x10680e1c, "skb_zerocopy_headlen" },
	{ 0xcc2fab79, "skb_zerocopy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x74227cca, "from_kgid_munged" },
	{ 0x913c3c7f, "from_kuid_munged" },
	{ 0x9ed538b6, "init_user_ns" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x74c7ad8f, "__nla_reserve" },
	{ 0x7d8fa849, "__nlmsg_put" },
	{ 0xed7fe6df, "skb_tx_error" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x68173019, "try_module_get" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xcb1f14a9, "___pskb_trim" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x2425fd6f, "skb_copy_expand" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x4829a47e, "memcpy" },
	{ 0x100588a9, "skb_ensure_writable" },
	{ 0xd32245cd, "nfnl_ct_hook" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0xe4bddf10, "proc_create_net_data" },
	{ 0xdcb764ad, "memset" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x393cac96, "seq_printf" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xbce162d1, "nf_reinject" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2cf494f0, "nf_ct_hook" },
	{ 0x8d522714, "__rcu_read_lock" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "941752342D187A05410FD38");
