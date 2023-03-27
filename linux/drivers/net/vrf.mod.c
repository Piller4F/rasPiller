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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0xd7e682ff, "eth_mac_addr" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0x3b530aac, "l3mdev_table_lookup_unregister" },
	{ 0xf56d8a2, "rtnl_link_register" },
	{ 0x79b28e3d, "l3mdev_table_lookup_register" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa8604ebf, "nd_tbl" },
	{ 0x5664a274, "inet_select_addr" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0x8b3b8a75, "ip6_dst_lookup_flow" },
	{ 0xbd0dcf3c, "ip_route_output_flow" },
	{ 0x40761ec2, "netif_rx" },
	{ 0xc42e99a7, "eth_type_trans" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x1304a549, "ip6_dst_alloc" },
	{ 0x79a41562, "fib6_new_table" },
	{ 0xf8ad33d5, "rt_dst_alloc" },
	{ 0x15403583, "fib_new_table" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x4829a47e, "memcpy" },
	{ 0x67d6716d, "ipv6_stub" },
	{ 0x30f4f56c, "__neigh_create" },
	{ 0x91d9848d, "skb_expand_head" },
	{ 0x9fa52c93, "dev_queue_xmit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7d5cd3de, "arp_tbl" },
	{ 0xf6149499, "dst_release" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x35c2acb1, "netdev_lower_get_next" },
	{ 0x78bcb566, "netdev_master_upper_dev_link" },
	{ 0x46679ae4, "netdev_master_upper_dev_get" },
	{ 0x7e97eb37, "dev_change_flags" },
	{ 0xc198fe53, "netdev_upper_dev_unlink" },
	{ 0x5cb7d13a, "nf_hook_slow" },
	{ 0x5f98bdb6, "nf_hooks_needed" },
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x835033cd, "netdev_err" },
	{ 0x185f97af, "unregister_netdevice_queue" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xec11806, "register_netdevice" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2f9a62d5, "dev_queue_xmit_nit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0xfae2c801, "fib_nl_delrule" },
	{ 0x10dd6f8f, "fib_nl_newrule" },
	{ 0x7d8fa849, "__nlmsg_put" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xbba5d6a5, "register_net_sysctl" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x37a0cba, "kfree" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xcc3c5964, "ether_setup" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xdcb764ad, "memset" },
	{ 0xe5010661, "ip6_pol_route" },
	{ 0x5792f848, "strlcpy" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7ca2fd32, "nla_put" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "A424D7369D3AC260768B499");
