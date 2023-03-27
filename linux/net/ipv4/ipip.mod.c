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
	{ 0xcb89f4ee, "ip_tunnel_dellink" },
	{ 0x2b48b0db, "ip_tunnel_get_iflink" },
	{ 0x31fc241, "dev_get_tstats64" },
	{ 0xe886d511, "ip_tunnel_change_mtu" },
	{ 0x607f21e3, "ip_tunnel_siocdevprivate" },
	{ 0x9e90086d, "ip_tunnel_uninit" },
	{ 0xf74ce92, "rtnl_link_unregister" },
	{ 0x435b23bf, "unregister_pernet_device" },
	{ 0x45deb145, "xfrm4_tunnel_deregister" },
	{ 0xf56d8a2, "rtnl_link_register" },
	{ 0x8fa16d2e, "xfrm4_tunnel_register" },
	{ 0x54475510, "register_pernet_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x59795a5e, "__xfrm_policy_check" },
	{ 0x3f3c412e, "ip_tunnel_rcv" },
	{ 0xc8efcfae, "metadata_dst_alloc" },
	{ 0x7e3e0317, "__iptunnel_pull_header" },
	{ 0xdff8c043, "ip_tunnel_init_net" },
	{ 0xe865b1a4, "ip_tunnel_delete_nets" },
	{ 0xadea974b, "ipv4_redirect" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6eda0e84, "ipv4_update_pmtu" },
	{ 0x33e90696, "ip_tunnel_lookup" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xced0a987, "ip_tunnel_init" },
	{ 0x872790c8, "ip_tunnel_xmit" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x7313d20a, "ip_md_tunnel_xmit" },
	{ 0x7446b5f1, "iptunnel_handle_offloads" },
	{ 0xc29bee24, "ip_tunnel_ctl" },
	{ 0x91a2cebf, "ip_tunnel_setup" },
	{ 0x2fdb3ab2, "ip_tunnel_header_ops" },
	{ 0x28607e3c, "ip_tunnel_newlink" },
	{ 0x77b1bfaf, "ip_tunnel_changelink" },
	{ 0xa52aeae8, "ip_tunnel_encap_setup" },
	{ 0xdcb764ad, "memset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7ca2fd32, "nla_put" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");


MODULE_INFO(srcversion, "AA6787DB088B0A4753B3C4D");
