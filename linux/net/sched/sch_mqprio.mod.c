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
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8a768e, "gnet_stats_copy_queue" },
	{ 0x27a99989, "gnet_stats_copy_basic" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x683a9560, "__gnet_stats_copy_basic" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xef3f9eb0, "netdev_set_tc_queue" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x4829a47e, "memcpy" },
	{ 0x30f3b603, "qdisc_create_dflt" },
	{ 0x9d6d8c35, "default_qdisc_ops" },
	{ 0xbf03dece, "pfifo_fast_ops" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3f50b0d2, "dev_activate" },
	{ 0xe0a04a23, "dev_deactivate" },
	{ 0x89549736, "netdev_txq_to_tc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x430f0abc, "netdev_set_num_tc" },
	{ 0xdcb764ad, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x26b7da58, "qdisc_put" },
	{ 0x3607e26d, "dev_graft_qdisc" },
	{ 0x3bd29a2e, "qdisc_hash_add" },
	{ 0x1d7fb9b6, "qdisc_hash_del" },
	{ 0x71f025cc, "noop_qdisc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ECE00A6D83F85AA214A82EA");
