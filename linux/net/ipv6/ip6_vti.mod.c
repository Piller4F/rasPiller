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
	{ 0x5e052c26, "ip6_tnl_get_link_net" },
	{ 0x3620a1ae, "ip6_tnl_get_iflink" },
	{ 0x31fc241, "dev_get_tstats64" },
	{ 0xf74ce92, "rtnl_link_unregister" },
	{ 0x435b23bf, "unregister_pernet_device" },
	{ 0xe23d56ea, "xfrm6_protocol_deregister" },
	{ 0xa9e29d83, "xfrm6_tunnel_deregister" },
	{ 0xf56d8a2, "rtnl_link_register" },
	{ 0x847bba3a, "xfrm6_tunnel_register" },
	{ 0x6517557e, "xfrm6_protocol_register" },
	{ 0x54475510, "register_pernet_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x638c7455, "ns_capable" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x1c3d143e, "icmpv6_ndo_send" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xc4bfe3fb, "ip6_route_output_flags" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0x31feac02, "icmp_ndo_send" },
	{ 0x8c5055bb, "ip6_tnl_xmit_ctl" },
	{ 0xd4c5fe47, "xfrm_lookup_route" },
	{ 0xcee8d0b3, "ip_route_output_key_hash" },
	{ 0x8d7726df, "__xfrm_decode_session" },
	{ 0x984cc407, "xfrm6_tunnel_spi_lookup" },
	{ 0x997c08ec, "xfrm_input" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xf3b7cd6, "ip6_tnl_rcv_ctl" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x47b7d86c, "__xfrm_state_destroy" },
	{ 0xc9a84f9, "ip6_redirect" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xcc5ae9de, "ip6_update_pmtu" },
	{ 0xabaedbc4, "make_kuid" },
	{ 0x8c5d0b23, "xfrm_state_lookup" },
	{ 0x679c22fb, "netdev_state_change" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xec11806, "register_netdevice" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x4a8e774f, "skb_scrub_packet" },
	{ 0x59795a5e, "__xfrm_policy_check" },
	{ 0xc051115b, "free_netdev" },
	{ 0xe914e41e, "strcpy" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0xadc5e3a, "init_net" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x2fdb3ab2, "ip_tunnel_header_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xf6149499, "dst_release" },
	{ 0xfd40bd29, "rt6_lookup" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xebe09d0c, "__dev_get_by_index" },
	{ 0x4d56bc7, "ip6_tnl_get_cap" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x185f97af, "unregister_netdevice_queue" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7ca2fd32, "nla_put" },
};

MODULE_INFO(depends, "ip6_tunnel,ipv6,tunnel6,xfrm6_tunnel");


MODULE_INFO(srcversion, "D096D70D04B6AC2A5443EE8");
