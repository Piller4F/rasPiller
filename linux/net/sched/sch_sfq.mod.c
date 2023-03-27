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
	{ 0x56470118, "__warn_printk" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xba59f3f4, "rtnl_kfree_skbs" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa8ddb80f, "tcf_block_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x52826b66, "skb_get_hash_perturb" },
	{ 0x85d9e49f, "qdisc_tree_reduce_backlog" },
	{ 0x4665564f, "tcf_classify" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0x17e57eb7, "gnet_stats_copy_app" },
	{ 0x8a768e, "gnet_stats_copy_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2a957173, "tcf_block_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x7ca2fd32, "nla_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D8B3BC032062DD2E03A509D");
