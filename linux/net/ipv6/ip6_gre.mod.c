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
	{ 0x5e052c26, "ip6_tnl_get_link_net" },
	{ 0x3620a1ae, "ip6_tnl_get_iflink" },
	{ 0x31fc241, "dev_get_tstats64" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0xd7e682ff, "eth_mac_addr" },
	{ 0x435b23bf, "unregister_pernet_device" },
	{ 0xc94fe2de, "inet6_del_protocol" },
	{ 0xf74ce92, "rtnl_link_unregister" },
	{ 0xf56d8a2, "rtnl_link_register" },
	{ 0xb89058e5, "inet6_add_protocol" },
	{ 0x54475510, "register_pernet_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x679c22fb, "netdev_state_change" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x638c7455, "ns_capable" },
	{ 0xcb1f14a9, "___pskb_trim" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x31feac02, "icmp_ndo_send" },
	{ 0x7446b5f1, "iptunnel_handle_offloads" },
	{ 0x8c5055bb, "ip6_tnl_xmit_ctl" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0xba3e4263, "ip6_tnl_xmit" },
	{ 0xdcb764ad, "memset" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x5792f848, "strlcpy" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xbc1bee16, "gro_cells_init" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x2c29c284, "__icmpv6_send" },
	{ 0xd9ffc7f4, "ip6_tnl_rcv" },
	{ 0xc8efcfae, "metadata_dst_alloc" },
	{ 0x7e3e0317, "__iptunnel_pull_header" },
	{ 0xcc5ae9de, "ip6_update_pmtu" },
	{ 0xc9a84f9, "ip6_redirect" },
	{ 0x7611c31d, "gre_parse_header" },
	{ 0x1c3d143e, "icmpv6_ndo_send" },
	{ 0xe2d14e79, "ip6_tnl_parse_tlv_enc_lim" },
	{ 0xabaedbc4, "make_kuid" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x47f8d635, "__get_hash_from_flowi6" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0xc051115b, "free_netdev" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0xe914e41e, "strcpy" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0xadc5e3a, "init_net" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xcc3c5964, "ether_setup" },
	{ 0xf6149499, "dst_release" },
	{ 0xfd40bd29, "rt6_lookup" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x4d56bc7, "ip6_tnl_get_cap" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x2f9feafd, "ip6_tnl_encap_setup" },
	{ 0x5c75f715, "ip6_tnl_change_mtu" },
	{ 0xec11806, "register_netdevice" },
	{ 0x185f97af, "unregister_netdevice_queue" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x15ba50a6, "jiffies" },
};

MODULE_INFO(depends, "ip6_tunnel,ipv6,gre");


MODULE_INFO(srcversion, "08B9B9C651E3A8B55F7E630");
