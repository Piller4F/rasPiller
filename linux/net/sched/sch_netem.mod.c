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
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0xe3491e3d, "skb_checksum_help" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x42d9296a, "skb_copy" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x3ef7d775, "__skb_gso_segment" },
	{ 0x59b2a9f5, "netif_skb_features" },
	{ 0xbabe8df, "skb_clone" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x84ede85, "skb_orphan_partial" },
	{ 0xf942e76e, "nla_put_64bit" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa4ebb7ba, "qdisc_watchdog_init" },
	{ 0x92997ed8, "_printk" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x85d9e49f, "qdisc_tree_reduce_backlog" },
	{ 0x73b46f13, "qdisc_watchdog_schedule_range_ns" },
	{ 0xb2bb89ba, "kfree_skb_list" },
	{ 0x6565dfed, "__qdisc_calculate_pkt_len" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4d715606, "qdisc_reset" },
	{ 0xba59f3f4, "rtnl_kfree_skbs" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xca9360b5, "rb_next" },
	{ 0xece784c2, "rb_first" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x26b7da58, "qdisc_put" },
	{ 0xfb8e3972, "qdisc_watchdog_cancel" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5629B72441DBFB3BCA757F1");
