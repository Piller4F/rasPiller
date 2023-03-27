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
	{ 0x66e779bd, "pskb_trim_rcsum_slow" },
	{ 0xb3acd91b, "skb_ext_add" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x4dafed6a, "ip_do_fragment" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xf6149499, "dst_release" },
	{ 0x2904ae06, "__vlan_find_dev_deep_rcu" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x4cc8288a, "neigh_destroy" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x5f98bdb6, "nf_hooks_needed" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x5cb7d13a, "nf_hook_slow" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xdcb764ad, "memset" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0x5be9bbb0, "br_dev_queue_push_xmit" },
	{ 0xea27ad7f, "nf_unregister_net_hooks" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xadc5e3a, "init_net" },
	{ 0x9de1cc35, "br_forward_finish" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x54e723e5, "ip_route_input_noref" },
	{ 0x3bfe1899, "nf_ipv6_ops" },
	{ 0xa9af3739, "nf_register_net_hooks" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x62baf4cb, "skb_pull_rcsum" },
	{ 0xbd0dcf3c, "ip_route_output_flow" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2dce48db, "nf_br_ops" },
	{ 0x8a623472, "__skb_ext_del" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xf3fbd639, "br_handle_frame_finish" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xbba5d6a5, "register_net_sysctl" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "bridge,ipv6");


MODULE_INFO(srcversion, "651BA2D80C310CA9E8D386E");
