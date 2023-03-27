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
	{ 0x9c8506da, "xfrm_state_walk" },
	{ 0xd222b4ea, "xfrm_state_delete" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3fb7c29f, "xfrm_find_acq_byseq" },
	{ 0xcf41fb6, "netlink_has_listeners" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x867cfe92, "xfrm_policy_insert" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x9e15a8a0, "xfrm_state_update" },
	{ 0xa980492f, "km_policy_notify" },
	{ 0xe222d7e0, "xfrm_state_lookup_byaddr" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x8658686a, "xfrm_policy_hash_rebuild" },
	{ 0x71f46402, "xfrm_policy_walk" },
	{ 0x47bc8e4a, "km_state_expired" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8de71735, "xfrm_state_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1e47c9cb, "xfrm_policy_delete" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xb87838b2, "xfrm_policy_flush" },
	{ 0x9c0723e9, "xfrm_audit_state_add" },
	{ 0x4d4a6d57, "xfrm_sad_getinfo" },
	{ 0xdcb764ad, "memset" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0x4196c3ef, "xfrm_policy_walk_done" },
	{ 0xaa344eea, "netlink_kernel_release" },
	{ 0x51213072, "__xfrm_state_delete" },
	{ 0x8113b504, "netlink_rcv_skb" },
	{ 0x9166fada, "strncpy" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x3350c520, "netlink_unicast" },
	{ 0xf4876732, "km_state_notify" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5a7bcf75, "xfrm_register_km" },
	{ 0x1e21794f, "km_query" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xdc824f6a, "xfrm_alloc_spi" },
	{ 0xb570c56b, "km_policy_expired" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0xd311e322, "__xfrm_init_state" },
	{ 0x91f4d6a1, "security_locked_down" },
	{ 0xe9274a7, "xfrm_state_flush" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x70a9273f, "xfrm_unregister_km" },
	{ 0x43cd0ea3, "netlink_broadcast" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0x63f1245b, "xfrm_policy_destroy" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x694bb3ba, "xfrm_dev_state_add" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0xb01bebf9, "xfrm_get_acqseq" },
	{ 0x1479110c, "xfrm_audit_policy_delete" },
	{ 0x49ca83, "xfrm_aead_get_byname" },
	{ 0x47b7d86c, "__xfrm_state_destroy" },
	{ 0xf39986f, "xfrm_policy_bysel_ctx" },
	{ 0x32cad019, "xfrm_policy_alloc" },
	{ 0xe9de031a, "xfrm_audit_state_delete" },
	{ 0xd98b7ead, "__netlink_kernel_create" },
	{ 0xb0a22bf, "xfrm_state_add" },
	{ 0x761bada, "xfrm_audit_policy_add" },
	{ 0x8c5d0b23, "xfrm_state_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xee665785, "xfrm_init_replay" },
	{ 0xb1072e90, "__fib6_flush_trees" },
	{ 0xd4a27388, "xfrm_policy_byid" },
	{ 0xb4736255, "xfrm_find_acq" },
	{ 0x873f6473, "xfrm_state_walk_done" },
	{ 0xf942e76e, "nla_put_64bit" },
	{ 0x2ca39914, "nla_reserve" },
	{ 0xfeb5d0aa, "verify_spi_info" },
	{ 0x7dae1325, "xfrm_state_alloc" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7d8fa849, "__nlmsg_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7ae66123, "__netlink_dump_start" },
	{ 0xe914e41e, "strcpy" },
	{ 0x9ee1f1b, "xfrm_spd_getinfo" },
	{ 0x40cd4899, "netlink_net_capable" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "71C5CC7638F46142E02D10E");
