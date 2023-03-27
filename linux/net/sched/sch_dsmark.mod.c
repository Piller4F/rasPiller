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
	{ 0x92997ed8, "_printk" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x85d9e49f, "qdisc_tree_reduce_backlog" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x4665564f, "tcf_classify" },
	{ 0x6565dfed, "__qdisc_calculate_pkt_len" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x71f025cc, "noop_qdisc" },
	{ 0x3bd29a2e, "qdisc_hash_add" },
	{ 0x30f3b603, "qdisc_create_dflt" },
	{ 0x1fefdfb7, "pfifo_qdisc_ops" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xa8ddb80f, "tcf_block_get" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x4d715606, "qdisc_reset" },
	{ 0x37a0cba, "kfree" },
	{ 0x26b7da58, "qdisc_put" },
	{ 0x2a957173, "tcf_block_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E47CC693DC8D1E56853DE9F");
