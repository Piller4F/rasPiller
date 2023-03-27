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
	{ 0x34df9eaa, "skb_trim" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x3a589575, "qdisc_class_hash_grow" },
	{ 0xeb2391c9, "gen_new_estimator" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa13e780a, "gen_replace_estimator" },
	{ 0x6565dfed, "__qdisc_calculate_pkt_len" },
	{ 0x4665564f, "tcf_classify" },
	{ 0x73b46f13, "qdisc_watchdog_schedule_range_ns" },
	{ 0x8a768e, "gnet_stats_copy_queue" },
	{ 0xbbefdf5e, "gnet_stats_copy_rate_est" },
	{ 0x27a99989, "gnet_stats_copy_basic" },
	{ 0x91a7b1da, "qdisc_class_hash_remove" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x85d9e49f, "qdisc_tree_reduce_backlog" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x71f025cc, "noop_qdisc" },
	{ 0xc4212ab9, "qdisc_class_hash_insert" },
	{ 0x3bd29a2e, "qdisc_hash_add" },
	{ 0x30f3b603, "qdisc_create_dflt" },
	{ 0x1fefdfb7, "pfifo_qdisc_ops" },
	{ 0x117093be, "qdisc_class_hash_init" },
	{ 0xa8ddb80f, "tcf_block_get" },
	{ 0xa0d87339, "qdisc_get_rtab" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xa4ebb7ba, "qdisc_watchdog_init" },
	{ 0x48641829, "__netif_schedule" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x92997ed8, "_printk" },
	{ 0x4d715606, "qdisc_reset" },
	{ 0xdcb764ad, "memset" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xfb8e3972, "qdisc_watchdog_cancel" },
	{ 0xf53d4c26, "qdisc_class_hash_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0x26b7da58, "qdisc_put" },
	{ 0x2a957173, "tcf_block_put" },
	{ 0x17e57eb7, "gnet_stats_copy_app" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BC6289C61B2ED905139377E");
