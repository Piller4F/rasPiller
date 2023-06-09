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
	{ 0xd103296d, "kobject_put" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x33a860c8, "kmem_cache_destroy" },
	{ 0x3f2752d1, "neigh_lookup" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb6e27d7, "stp_proto_unregister" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0xcb9514b4, "sysfs_remove_bin_file" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0x20eadeb6, "ip_compute_csum" },
	{ 0x244db8a6, "nf_queue" },
	{ 0x7442f0f9, "percpu_counter_destroy" },
	{ 0x7b52e38, "rtnl_unregister" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x3e6a656a, "netdev_notice" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0xfe95a5fc, "dev_get_flags" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x7cd1a18f, "ipv6_chk_addr" },
	{ 0xb8ef5789, "dev_disable_lro" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x72815c6f, "dev_uc_add" },
	{ 0xab32255, "netdev_rx_handler_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xfc21419d, "ipv6_dev_mc_dec" },
	{ 0x7d5cd3de, "arp_tbl" },
	{ 0x683f20ea, "kobject_uevent" },
	{ 0xdb1e1d6f, "netif_carrier_on" },
	{ 0xf6149499, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x42d9296a, "skb_copy" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0x2904ae06, "__vlan_find_dev_deep_rcu" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xad841033, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x30ff1042, "rtnl_notify" },
	{ 0x288b92e7, "ipv6_dev_mc_inc" },
	{ 0x46679ae4, "netdev_master_upper_dev_get" },
	{ 0xb6e0ef73, "net_ns_get_ownership" },
	{ 0xe57f8675, "dev_set_allmulti" },
	{ 0x76f1c09d, "is_skb_forwardable" },
	{ 0xd004b369, "call_netdevice_notifiers" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x4c6aa07b, "kobject_del" },
	{ 0xc662ecda, "__tracepoint_br_fdb_external_learn_add" },
	{ 0x4cc8288a, "neigh_destroy" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xb95a1db9, "__netpoll_setup" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x19821689, "__tracepoint_fdb_delete" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x5f98bdb6, "nf_hooks_needed" },
	{ 0xc10d799c, "in_dev_finish_destroy" },
	{ 0xb7887224, "__traceiter_br_fdb_external_learn_add" },
	{ 0x54bd79d9, "sysfs_remove_group" },
	{ 0xf10f857, "netdev_walk_all_upper_dev_rcu" },
	{ 0x42a95bb5, "__ip_mc_inc_group" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x5cb7d13a, "nf_hook_slow" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xe0f91e74, "kobject_create_and_add" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x78bcb566, "netdev_master_upper_dev_link" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0xc86c0d40, "ip_mc_check_igmp" },
	{ 0xece784c2, "rb_first" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x40761ec2, "netif_rx" },
	{ 0x31fc241, "dev_get_tstats64" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x9e540b77, "netif_rx_ni" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xec9655be, "sysfs_rename_link_ns" },
	{ 0x27dc9471, "__tracepoint_br_fdb_update" },
	{ 0x9d30c933, "rtnl_register_module" },
	{ 0xb14ec5b5, "stp_proto_register" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x220a190c, "__ethtool_get_link_ksettings" },
	{ 0x8e102962, "arp_create" },
	{ 0x6d294e43, "clock_t_to_jiffies" },
	{ 0x1df8d46d, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xef735b85, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x5664a274, "inet_select_addr" },
	{ 0x638c7455, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xfad80851, "__skb_warn_lro_forwarding" },
	{ 0xc438e3f9, "kobject_init_and_add" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xcd279169, "nla_find" },
	{ 0xc051115b, "free_netdev" },
	{ 0x5078edfa, "llc_mac_hdr_init" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x5682efd3, "netif_receive_skb" },
	{ 0xc198fe53, "netdev_upper_dev_unlink" },
	{ 0x5a921311, "strncmp" },
	{ 0xf0291b7d, "ndo_dflt_fdb_dump" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa1018fa2, "kmem_cache_free" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x652032cb, "mac_pton" },
	{ 0x15498894, "__traceiter_fdb_delete" },
	{ 0xb7cc0cff, "__tracepoint_br_fdb_add" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x24ff8dbf, "dev_get_by_index_rcu" },
	{ 0xb3635bd6, "arp_send" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb8b0d1be, "rtnl_af_unregister" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3599f100, "sysfs_remove_link" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xbb59d3d5, "inet_confirm_addr" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x67d6716d, "ipv6_stub" },
	{ 0xadc5e3a, "init_net" },
	{ 0x7e3191f6, "try_to_del_timer_sync" },
	{ 0xf74ce92, "rtnl_link_unregister" },
	{ 0xebe09d0c, "__dev_get_by_index" },
	{ 0x68303b95, "__ip_mc_dec_group" },
	{ 0x4998d7f1, "nla_reserve_64bit" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xa6995170, "ipv6_dev_get_saddr" },
	{ 0x3c787dd1, "sysfs_create_link" },
	{ 0xefc01ad4, "rtnl_set_sk_err" },
	{ 0x41314665, "kmem_cache_alloc" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x65811a46, "rtnl_af_register" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb3262370, "netdev_rx_handler_unregister" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0x2ce316ff, "nla_put_nohdr" },
	{ 0xace9e702, "passthru_features_check" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0x8e65d54d, "arp_xmit" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x94999971, "brioctl_set" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x93d992ee, "__percpu_counter_init" },
	{ 0x835033cd, "netdev_err" },
	{ 0xcc3c5964, "ether_setup" },
	{ 0xfd63100d, "__dev_get_by_name" },
	{ 0x679c22fb, "netdev_state_change" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x96b759ad, "kmem_cache_create" },
	{ 0x185f97af, "unregister_netdevice_queue" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0xfbcd8e82, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a6650f8, "dev_get_iflink" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x79259854, "sysfs_create_bin_file" },
	{ 0xf56d8a2, "rtnl_link_register" },
	{ 0x3277a9c3, "netpoll_send_skb" },
	{ 0x80e74046, "dev_uc_del" },
	{ 0x46ba7fca, "__traceiter_br_fdb_update" },
	{ 0xf942e76e, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x1da00537, "__netpoll_free" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf9fb59b2, "__traceiter_br_fdb_add" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x99c14b53, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x409e21d5, "sysfs_create_file_ns" },
	{ 0x9fa52c93, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xd4460780, "ipv6_mc_check_mld" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7d8fa849, "__nlmsg_put" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x83d0e24d, "dev_pre_changeaddr_notify" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xb2cde22f, "dev_set_mtu" },
	{ 0x35c2acb1, "netdev_lower_get_next" },
};

MODULE_INFO(depends, "stp,ipv6,llc");


MODULE_INFO(srcversion, "47F594C7C3FDEA5580A4F04");
