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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x973cb9e7, "dev_forward_skb" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x675305, "dev_mc_unsync" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x72815c6f, "dev_uc_add" },
	{ 0xef4f7edc, "__dev_forward_skb" },
	{ 0x62faefd5, "dev_mc_add_excl" },
	{ 0xab32255, "netdev_rx_handler_register" },
	{ 0x9bbb90bf, "dev_uc_add_excl" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xbabe8df, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe57f8675, "dev_set_allmulti" },
	{ 0xd236c7a4, "vlan_vid_del" },
	{ 0xd004b369, "call_netdevice_notifiers" },
	{ 0x19f50f24, "linkwatch_fire_event" },
	{ 0x16429852, "vlan_vid_add" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xb95a1db9, "__netpoll_setup" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x40761ec2, "netif_rx" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdcb764ad, "memset" },
	{ 0x9e540b77, "netif_rx_ni" },
	{ 0x2db3364f, "dev_set_mac_address" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x8975151d, "ip_check_defrag" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x220a190c, "__ethtool_get_link_ksettings" },
	{ 0x1df8d46d, "ethtool_op_get_link" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xc34f66e6, "dev_mc_del" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0xc198fe53, "netdev_upper_dev_unlink" },
	{ 0xf0291b7d, "ndo_dflt_fdb_dump" },
	{ 0x5792f848, "strlcpy" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x68a90e49, "netif_stacked_transfer_operstate" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xadc5e3a, "init_net" },
	{ 0xf74ce92, "rtnl_link_unregister" },
	{ 0xebe09d0c, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xd6e4f4ef, "eth_header_cache_update" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb3262370, "netdev_rx_handler_unregister" },
	{ 0x890c73ec, "eth_header_parse" },
	{ 0xace9e702, "passthru_features_check" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x9eed38df, "netdev_upper_dev_link" },
	{ 0xcc3c5964, "ether_setup" },
	{ 0xd6f258cb, "dev_uc_unsync" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x185f97af, "unregister_netdevice_queue" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0xfbcd8e82, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x425ce53a, "dev_change_proto_down_generic" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe76c264a, "eth_header_cache" },
	{ 0xf56d8a2, "rtnl_link_register" },
	{ 0x3277a9c3, "netpoll_send_skb" },
	{ 0x80e74046, "dev_uc_del" },
	{ 0x75ea9025, "dev_uc_sync" },
	{ 0x1da00537, "__netpoll_free" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x99c14b53, "netdev_update_features" },
	{ 0x68e9fe85, "dev_queue_xmit_accel" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x815d423a, "netdev_is_rx_handler_busy" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb4255a4d, "dev_mc_sync" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xb2cde22f, "dev_set_mtu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "31D343F7ABAFD038E3DC4F5");
