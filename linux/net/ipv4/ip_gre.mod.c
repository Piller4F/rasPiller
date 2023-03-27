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
	{ 0xc29bee24, "ip_tunnel_ctl" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x54475510, "register_pernet_device" },
	{ 0x2b48b0db, "ip_tunnel_get_iflink" },
	{ 0xf6149499, "dst_release" },
	{ 0xc8efcfae, "metadata_dst_alloc" },
	{ 0x6eda0e84, "ipv4_update_pmtu" },
	{ 0x33e90696, "ip_tunnel_lookup" },
	{ 0xe6f8b856, "__ip_tunnel_change_mtu" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0xa9102c38, "__icmp_send" },
	{ 0x872790c8, "ip_tunnel_xmit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x31fc241, "dev_get_tstats64" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0x7e3e0317, "__iptunnel_pull_header" },
	{ 0x91a2cebf, "ip_tunnel_setup" },
	{ 0xcb89f4ee, "ip_tunnel_dellink" },
	{ 0xdcb764ad, "memset" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xe865b1a4, "ip_tunnel_delete_nets" },
	{ 0x646e024f, "gre_add_protocol" },
	{ 0x28607e3c, "ip_tunnel_newlink" },
	{ 0x435b23bf, "unregister_pernet_device" },
	{ 0x9e90086d, "ip_tunnel_uninit" },
	{ 0xc051115b, "free_netdev" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0xc240bec8, "gre_del_protocol" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xced0a987, "ip_tunnel_init" },
	{ 0x2965a0c2, "ip_tunnel_get_link_net" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x872a40c5, "__skb_get_hash" },
	{ 0xf74ce92, "rtnl_link_unregister" },
	{ 0x7313d20a, "ip_md_tunnel_xmit" },
	{ 0x77b1bfaf, "ip_tunnel_changelink" },
	{ 0xa0b7f6cf, "rtnl_configure_link" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xadea974b, "ipv4_redirect" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0xcc3c5964, "ether_setup" },
	{ 0xdff8c043, "ip_tunnel_init_net" },
	{ 0x7446b5f1, "iptunnel_handle_offloads" },
	{ 0xbd0dcf3c, "ip_route_output_flow" },
	{ 0xcba2af73, "rtnl_create_link" },
	{ 0x607f21e3, "ip_tunnel_siocdevprivate" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0x5d214e5c, "ip6_err_gen_icmpv6_unreach" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcb1f14a9, "___pskb_trim" },
	{ 0xf56d8a2, "rtnl_link_register" },
	{ 0xa52aeae8, "ip_tunnel_encap_setup" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xe886d511, "ip_tunnel_change_mtu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd7e682ff, "eth_mac_addr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7611c31d, "gre_parse_header" },
	{ 0x3f3c412e, "ip_tunnel_rcv" },
};

MODULE_INFO(depends, "ip_tunnel,gre,ipv6");


MODULE_INFO(srcversion, "4D7FC7C20076A981E9ACA46");
