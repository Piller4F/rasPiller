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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa77bfd29, "register_inet6addr_validator_notifier" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x973cb9e7, "dev_forward_skb" },
	{ 0x7e97eb37, "dev_change_flags" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x675305, "dev_mc_unsync" },
	{ 0xc32c71af, "register_inetaddr_validator_notifier" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x8cfd77b0, "ip_local_out" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xab63baa5, "unregister_inetaddr_validator_notifier" },
	{ 0xab32255, "netdev_rx_handler_register" },
	{ 0xf6149499, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xbabe8df, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0xe57f8675, "dev_set_allmulti" },
	{ 0xd236c7a4, "vlan_vid_del" },
	{ 0xd004b369, "call_netdevice_notifiers" },
	{ 0x16429852, "vlan_vid_add" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x47c65bfc, "unregister_inet6addr_validator_notifier" },
	{ 0x4a8e774f, "skb_scrub_packet" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x40761ec2, "netif_rx" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xdcb764ad, "memset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x220a190c, "__ethtool_get_link_ksettings" },
	{ 0x1df8d46d, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xea27ad7f, "nf_unregister_net_hooks" },
	{ 0x638c7455, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xffb7c514, "ida_free" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0xc198fe53, "netdev_upper_dev_unlink" },
	{ 0x5792f848, "strlcpy" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x68a90e49, "netif_stacked_transfer_operstate" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xf74ce92, "rtnl_link_unregister" },
	{ 0xebe09d0c, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x54e723e5, "ip_route_input_noref" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xc4bfe3fb, "ip6_route_output_flags" },
	{ 0xa9af3739, "nf_register_net_hooks" },
	{ 0xd6e4f4ef, "eth_header_cache_update" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x890c73ec, "eth_header_parse" },
	{ 0xb3262370, "netdev_rx_handler_unregister" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x9eed38df, "netdev_upper_dev_link" },
	{ 0x835033cd, "netdev_err" },
	{ 0xcc3c5964, "ether_setup" },
	{ 0xd6f258cb, "dev_uc_unsync" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x185f97af, "unregister_netdevice_queue" },
	{ 0xbd0dcf3c, "ip_route_output_flow" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x37a0cba, "kfree" },
	{ 0xe76c264a, "eth_header_cache" },
	{ 0xf56d8a2, "rtnl_link_register" },
	{ 0x75ea9025, "dev_uc_sync" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf7cd832d, "ip6_local_out" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x99c14b53, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9fa52c93, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x815d423a, "netdev_is_rx_handler_busy" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xb4255a4d, "dev_mc_sync" },
	{ 0x83d0e24d, "dev_pre_changeaddr_notify" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x4d8f4d40, "ip6_route_input_lookup" },
	{ 0x219e54ee, "__do_once_done" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "4E468608E7E17F7FC25CC3B");
