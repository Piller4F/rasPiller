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
	{ 0x19bb6023, "tcf_qevent_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x93678202, "tcf_qevent_validate_change" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3bd29a2e, "qdisc_hash_add" },
	{ 0x6bd25863, "fifo_create_dflt" },
	{ 0x7e68c44a, "bfifo_qdisc_ops" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x4e74744f, "qdisc_offload_graft_helper" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x85d9e49f, "qdisc_tree_reduce_backlog" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x71f025cc, "noop_qdisc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x1f5e342b, "tcf_qevent_handle" },
	{ 0x6565dfed, "__qdisc_calculate_pkt_len" },
	{ 0x26b7da58, "qdisc_put" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6dbcc9ca, "tcf_qevent_destroy" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x3856302c, "tcf_qevent_dump" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0xcd420de7, "qdisc_offload_dump_helper" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4d715606, "qdisc_reset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x17e57eb7, "gnet_stats_copy_app" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2AF217620EFACB032A55184");
