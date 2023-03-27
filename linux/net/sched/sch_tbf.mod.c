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
	{ 0x73b46f13, "qdisc_watchdog_schedule_range_ns" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xa4ebb7ba, "qdisc_watchdog_init" },
	{ 0x3bd29a2e, "qdisc_hash_add" },
	{ 0x6bd25863, "fifo_create_dflt" },
	{ 0x7e68c44a, "bfifo_qdisc_ops" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0xa0d87339, "qdisc_get_rtab" },
	{ 0xb4599295, "fifo_set_limit" },
	{ 0xb6e36ce2, "psched_ratecfg_precompute" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x71f025cc, "noop_qdisc" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xf942e76e, "nla_put_64bit" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0xcd420de7, "qdisc_offload_dump_helper" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x85d9e49f, "qdisc_tree_reduce_backlog" },
	{ 0x6565dfed, "__qdisc_calculate_pkt_len" },
	{ 0x3ef7d775, "__skb_gso_segment" },
	{ 0x59b2a9f5, "netif_skb_features" },
	{ 0x1a3cc4ab, "skb_gso_validate_mac_len" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4d715606, "qdisc_reset" },
	{ 0x26b7da58, "qdisc_put" },
	{ 0xfb8e3972, "qdisc_watchdog_cancel" },
	{ 0x8da6585d, "__stack_chk_fail" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "47E83AA68F94D502B10144A");
