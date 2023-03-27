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
	{ 0x13445e92, "param_ops_bool" },
	{ 0x2965a0c2, "ip_tunnel_get_link_net" },
	{ 0x2b48b0db, "ip_tunnel_get_iflink" },
	{ 0x31fc241, "dev_get_tstats64" },
	{ 0xf56d8a2, "rtnl_link_register" },
	{ 0x8fa16d2e, "xfrm4_tunnel_register" },
	{ 0x54475510, "register_pernet_device" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x435b23bf, "unregister_pernet_device" },
	{ 0x45deb145, "xfrm4_tunnel_deregister" },
	{ 0xf74ce92, "rtnl_link_unregister" },
	{ 0x1c3d143e, "icmpv6_ndo_send" },
	{ 0x4cc8288a, "neigh_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x24cf4e89, "dst_cache_set_ip4" },
	{ 0x8e64f9fe, "iptunnel_xmit" },
	{ 0xd592f2fb, "iptun_encaps" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x46fafcfb, "skb_set_owner_w" },
	{ 0x12baeca1, "skb_realloc_headroom" },
	{ 0x42049cf0, "dst_cache_get_ip4" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0x97768aee, "ipv6_chk_prefix" },
	{ 0x92997ed8, "_printk" },
	{ 0x40761ec2, "netif_rx" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x282ed588, "ipv6_chk_custom_prefix" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x872790c8, "ip_tunnel_xmit" },
	{ 0x7446b5f1, "iptunnel_handle_offloads" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x607f21e3, "ip_tunnel_siocdevprivate" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xa52aeae8, "ip_tunnel_encap_setup" },
	{ 0x5792f848, "strlcpy" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xec11806, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xc051115b, "free_netdev" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0xadc5e3a, "init_net" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xe914e41e, "strcpy" },
	{ 0xebe09d0c, "__dev_get_by_index" },
	{ 0xf6149499, "dst_release" },
	{ 0xbd0dcf3c, "ip_route_output_flow" },
	{ 0xabaedbc4, "make_kuid" },
	{ 0x638c7455, "ns_capable" },
	{ 0x59795a5e, "__xfrm_policy_check" },
	{ 0x3f3c412e, "ip_tunnel_rcv" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x7e3e0317, "__iptunnel_pull_header" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xadea974b, "ipv4_redirect" },
	{ 0x6eda0e84, "ipv4_update_pmtu" },
	{ 0x5d214e5c, "ip6_err_gen_icmpv6_unreach" },
	{ 0x56470118, "__warn_printk" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x679c22fb, "netdev_state_change" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x185f97af, "unregister_netdevice_queue" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x2fdb3ab2, "ip_tunnel_header_ops" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4,ipv6");


MODULE_INFO(srcversion, "A5B3BF53B1BC0789C536BE3");
