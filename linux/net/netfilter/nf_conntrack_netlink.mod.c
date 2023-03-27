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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0x73a07593, "nfnetlink_subsys_unregister" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0xaff22ef, "nfnetlink_subsys_register" },
	{ 0x2dd8f4a1, "nf_ct_iterate_cleanup_net" },
	{ 0xba53adab, "nla_policy_len" },
	{ 0x1aa3392f, "nf_ct_remove_expectations" },
	{ 0xb854ada3, "nf_conntrack_eventmask_report" },
	{ 0x24d273d1, "add_timer" },
	{ 0x835175a6, "__nf_ct_expect_find" },
	{ 0xf3018467, "nf_ct_expect_related_report" },
	{ 0xd0307cab, "nf_ct_delete" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x28eff409, "nf_conntrack_hash" },
	{ 0xdba7326b, "nf_conntrack_lock" },
	{ 0xaf0847f0, "nf_conntrack_locks" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x66c7f9a5, "nf_ct_get_id" },
	{ 0xadab222b, "nfnetlink_unicast" },
	{ 0xf38bcdf3, "nf_conntrack_max" },
	{ 0x43e1df94, "nf_conntrack_count" },
	{ 0x56052a8, "nfnetlink_send" },
	{ 0x4f55a157, "nfnetlink_set_err" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x4d306c1c, "nfnetlink_has_listeners" },
	{ 0xc18ac88d, "nf_ct_expect_hsize" },
	{ 0xec8beba6, "nf_ct_expect_hash" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x8acb6846, "nf_conntrack_find_get" },
	{ 0x61d58f22, "nf_conntrack_hash_check_insert" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x2ff4d036, "nf_ct_ext_add" },
	{ 0x3f4a8455, "__nf_ct_try_assign_helper" },
	{ 0x8ffe7c0d, "nf_conntrack_free" },
	{ 0x7c102184, "nf_ct_helper_ext_add" },
	{ 0xc5e4f898, "__nf_conntrack_helper_find" },
	{ 0x2dc4688b, "nf_conntrack_alloc" },
	{ 0x2ededb6, "nf_ct_helper_expectfn_find_by_symbol" },
	{ 0xdcb764ad, "memset" },
	{ 0xf942e76e, "nla_put_64bit" },
	{ 0x98cf60b3, "strlen" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x1a1a2b23, "nf_ct_helper_expectfn_find_by_name" },
	{ 0x98e015f4, "nf_ct_expect_alloc" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x7d8fa849, "__nlmsg_put" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xf096c2ee, "nf_ct_expect_iterate_net" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x680882d2, "nf_ct_unlink_expect_report" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0x88dff9ff, "nf_ct_expect_find_get" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x431ec3a9, "__nla_validate" },
	{ 0x72cd43d8, "nf_ct_l4proto_find" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x86a9f336, "nf_connlabels_replace" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6030cbd6, "nf_nat_hook" },
	{ 0x3f9313a0, "nf_ct_expect_put" },
	{ 0x7ae66123, "__netlink_dump_start" },
	{ 0x219e54ee, "__do_once_done" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xe17678a, "siphash_4u64" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1e540eae, "nf_conntrack_register_notifier" },
	{ 0x4d82c408, "nf_conntrack_unregister_notifier" },
};

MODULE_INFO(depends, "nfnetlink,nf_conntrack");


MODULE_INFO(srcversion, "79998DAE0AE659B1CBC3DA8");
