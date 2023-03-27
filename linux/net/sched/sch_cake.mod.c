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
	{ 0x598d381a, "unregister_qdisc" },
	{ 0x706384c8, "register_qdisc" },
	{ 0x3ef7d775, "__skb_gso_segment" },
	{ 0x59b2a9f5, "netif_skb_features" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x4665564f, "tcf_classify" },
	{ 0x73b46f13, "qdisc_watchdog_schedule_range_ns" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x85d9e49f, "qdisc_tree_reduce_backlog" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8a768e, "gnet_stats_copy_queue" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xa8ddb80f, "tcf_block_get" },
	{ 0xa4ebb7ba, "qdisc_watchdog_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0xb0efb9df, "nf_ct_get_tuple_skb" },
	{ 0x460f4a34, "flow_hash_from_keys" },
	{ 0x392c7949, "__skb_flow_dissect" },
	{ 0xc9831ad7, "flow_keys_dissector" },
	{ 0xdcb764ad, "memset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf942e76e, "nla_put_64bit" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2a957173, "tcf_block_put" },
	{ 0xfb8e3972, "qdisc_watchdog_cancel" },
	{ 0x42eff981, "kfree_skb_reason" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "95A10891D1C27964FFCADA7");
