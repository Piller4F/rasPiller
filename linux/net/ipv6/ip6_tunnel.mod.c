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
	{ 0xec11806, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa9e29d83, "xfrm6_tunnel_deregister" },
	{ 0x54475510, "register_pernet_device" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf6149499, "dst_release" },
	{ 0xc8efcfae, "metadata_dst_alloc" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x8f390533, "dst_cache_set_ip6" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x46fafcfb, "skb_set_owner_w" },
	{ 0x4cc8288a, "neigh_destroy" },
	{ 0xa9102c38, "__icmp_send" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x12baeca1, "skb_realloc_headroom" },
	{ 0x4a8e774f, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xc9a84f9, "ip6_redirect" },
	{ 0x31fc241, "dev_get_tstats64" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0x2c29c284, "__icmpv6_send" },
	{ 0x7e3e0317, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x435b23bf, "unregister_pernet_device" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0x638c7455, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xc051115b, "free_netdev" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x31feac02, "icmp_ndo_send" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa03b50aa, "dst_cache_get" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0xf7588de8, "gro_cells_receive" },
	{ 0x24ff8dbf, "dev_get_by_index_rcu" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xadc5e3a, "init_net" },
	{ 0xf74ce92, "rtnl_link_unregister" },
	{ 0xebe09d0c, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xa6995170, "ipv6_dev_get_saddr" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x1c3d143e, "icmpv6_ndo_send" },
	{ 0x54e723e5, "ip_route_input_noref" },
	{ 0xd76c5f0b, "ipv6_chk_addr_and_flags" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xc4bfe3fb, "ip6_route_output_flags" },
	{ 0xabaedbc4, "make_kuid" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x92997ed8, "_printk" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0x47f8d635, "__get_hash_from_flowi6" },
	{ 0xc42e99a7, "eth_type_trans" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xcc5ae9de, "ip6_update_pmtu" },
	{ 0x679c22fb, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x7446b5f1, "iptunnel_handle_offloads" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x185f97af, "unregister_netdevice_queue" },
	{ 0xbd0dcf3c, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xbc1bee16, "gro_cells_init" },
	{ 0x59795a5e, "__xfrm_policy_check" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xfd40bd29, "rt6_lookup" },
	{ 0x2fdb3ab2, "ip_tunnel_header_ops" },
	{ 0xefef8e24, "ip6tun_encaps" },
	{ 0xf56d8a2, "rtnl_link_register" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xf7cd832d, "ip6_local_out" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0xc84a52bc, "ip6_dst_hoplimit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x847bba3a, "xfrm6_tunnel_register" },
	{ 0x2fa8337c, "xfrm_lookup" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0x31490669, "ipv6_push_frag_opts" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "tunnel6,ipv6");


MODULE_INFO(srcversion, "0D03CCFEF0BA1B36D1D68E6");
