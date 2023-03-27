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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x54475510, "register_pernet_device" },
	{ 0x3ac68802, "genl_register_family" },
	{ 0xc8c04121, "genl_unregister_family" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xfe686b41, "inet6_offloads" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x63460e71, "udp_sock_create6" },
	{ 0xa9a75c44, "setup_udp_tunnel_sock" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xba821a04, "udp_tunnel_sock_release" },
	{ 0xdcb764ad, "memset" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x435b23bf, "unregister_pernet_device" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x3350c520, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x872a40c5, "__skb_get_hash" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xac3201b0, "udp_flow_hashrnd" },
	{ 0x7446b5f1, "iptunnel_handle_offloads" },
	{ 0x6c3d10d0, "inet_offloads" },
	{ 0x37a0cba, "kfree" },
	{ 0x8ce4e137, "genlmsg_put" },
	{ 0x1c4ebfb7, "udp_sock_create4" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5d6c28d0, "inet_get_local_port_range" },
	{ 0x1a678d21, "__skb_checksum_complete" },
};

MODULE_INFO(depends, "ip6_udp_tunnel,udp_tunnel");


MODULE_INFO(srcversion, "69ACF53A51E18745A758356");
