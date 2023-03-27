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
	{ 0x8a768e, "gnet_stats_copy_queue" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xa8ddb80f, "tcf_block_get" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x56470118, "__warn_printk" },
	{ 0x17e57eb7, "gnet_stats_copy_app" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x872a40c5, "__skb_get_hash" },
	{ 0x85d9e49f, "qdisc_tree_reduce_backlog" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4665564f, "tcf_classify" },
	{ 0xdcb764ad, "memset" },
	{ 0xba59f3f4, "rtnl_kfree_skbs" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2a957173, "tcf_block_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7E6F078B55953FA02EBF231");
