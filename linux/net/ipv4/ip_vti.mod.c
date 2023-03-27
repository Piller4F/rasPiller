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
	{ 0x2965a0c2, "ip_tunnel_get_link_net" },
	{ 0xcb89f4ee, "ip_tunnel_dellink" },
	{ 0x2b48b0db, "ip_tunnel_get_iflink" },
	{ 0x31fc241, "dev_get_tstats64" },
	{ 0xe886d511, "ip_tunnel_change_mtu" },
	{ 0x607f21e3, "ip_tunnel_siocdevprivate" },
	{ 0x9e90086d, "ip_tunnel_uninit" },
	{ 0xf74ce92, "rtnl_link_unregister" },
	{ 0x435b23bf, "unregister_pernet_device" },
	{ 0x2dd00df9, "xfrm4_protocol_deregister" },
	{ 0x45deb145, "xfrm4_tunnel_deregister" },
	{ 0xf56d8a2, "rtnl_link_register" },
	{ 0x8fa16d2e, "xfrm4_tunnel_register" },
	{ 0xcc3244d1, "xfrm4_protocol_register" },
	{ 0x54475510, "register_pernet_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x1c3d143e, "icmpv6_ndo_send" },
	{ 0x31feac02, "icmp_ndo_send" },
	{ 0xcee8d0b3, "ip_route_output_key_hash" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xf6149499, "dst_release" },
	{ 0xd4c5fe47, "xfrm_lookup_route" },
	{ 0xc4bfe3fb, "ip6_route_output_flags" },
	{ 0x8d7726df, "__xfrm_decode_session" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x997c08ec, "xfrm_input" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x4a8e774f, "skb_scrub_packet" },
	{ 0x59795a5e, "__xfrm_policy_check" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x47b7d86c, "__xfrm_state_destroy" },
	{ 0x6eda0e84, "ipv4_update_pmtu" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xadea974b, "ipv4_redirect" },
	{ 0x8c5d0b23, "xfrm_state_lookup" },
	{ 0x33e90696, "ip_tunnel_lookup" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xdff8c043, "ip_tunnel_init_net" },
	{ 0xe865b1a4, "ip_tunnel_delete_nets" },
	{ 0xced0a987, "ip_tunnel_init" },
	{ 0xc29bee24, "ip_tunnel_ctl" },
	{ 0x91a2cebf, "ip_tunnel_setup" },
	{ 0x2fdb3ab2, "ip_tunnel_header_ops" },
	{ 0x28607e3c, "ip_tunnel_newlink" },
	{ 0x77b1bfaf, "ip_tunnel_changelink" },
	{ 0xdcb764ad, "memset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7ca2fd32, "nla_put" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4,ipv6");


MODULE_INFO(srcversion, "DEB08C43D16739A37C8EEE4");
