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
	{ 0xa8ddb80f, "tcf_block_get" },
	{ 0x71f025cc, "noop_qdisc" },
	{ 0x3bd29a2e, "qdisc_hash_add" },
	{ 0x30f3b603, "qdisc_create_dflt" },
	{ 0x1fefdfb7, "pfifo_qdisc_ops" },
	{ 0x4e74744f, "qdisc_offload_graft_helper" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x85d9e49f, "qdisc_tree_reduce_backlog" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8a768e, "gnet_stats_copy_queue" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x27a99989, "gnet_stats_copy_basic" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x26b7da58, "qdisc_put" },
	{ 0x2a957173, "tcf_block_put" },
	{ 0x4665564f, "tcf_classify" },
	{ 0x6565dfed, "__qdisc_calculate_pkt_len" },
	{ 0x4d715606, "qdisc_reset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0xcd420de7, "qdisc_offload_dump_helper" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C4716B50AB3FBD9AE69D7D1");
