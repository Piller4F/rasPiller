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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x7e97eb37, "dev_change_flags" },
	{ 0x275265dd, "vlan_filter_push_vids" },
	{ 0x675305, "dev_mc_unsync" },
	{ 0x484d903a, "vlan_filter_drop_vids" },
	{ 0xfe95a5fc, "dev_get_flags" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xe61d59d0, "proc_create_single_data" },
	{ 0xa2e76409, "garp_uninit_applicant" },
	{ 0x68deb1bf, "vlan_dev_vlan_id" },
	{ 0x72815c6f, "dev_uc_add" },
	{ 0x83a84ef2, "_proc_mkdir" },
	{ 0x2f07a679, "seq_puts" },
	{ 0xa68d1f78, "garp_request_join" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x9f26bc9a, "vlan_uses_dev" },
	{ 0xdb1e1d6f, "netif_carrier_on" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x393cac96, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xad841033, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0xe57f8675, "dev_set_allmulti" },
	{ 0xd236c7a4, "vlan_vid_del" },
	{ 0xd004b369, "call_netdevice_notifiers" },
	{ 0x19f50f24, "linkwatch_fire_event" },
	{ 0x16429852, "vlan_vid_add" },
	{ 0xb95a1db9, "__netpoll_setup" },
	{ 0x844fd485, "garp_init_applicant" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x440cc275, "proc_remove" },
	{ 0xc8078eb6, "vlan_ioctl_set" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x220a190c, "__ethtool_get_link_ksettings" },
	{ 0x1df8d46d, "ethtool_op_get_link" },
	{ 0x638c7455, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xc051115b, "free_netdev" },
	{ 0x946f93a1, "garp_register_application" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0xc198fe53, "netdev_upper_dev_unlink" },
	{ 0x5792f848, "strlcpy" },
	{ 0xfbb8a761, "strscpy_pad" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x68a90e49, "netif_stacked_transfer_operstate" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xadc5e3a, "init_net" },
	{ 0xf74ce92, "rtnl_link_unregister" },
	{ 0xebe09d0c, "__dev_get_by_index" },
	{ 0x75189666, "garp_request_leave" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x890c73ec, "eth_header_parse" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x9eed38df, "netdev_upper_dev_link" },
	{ 0xe4bddf10, "proc_create_net_data" },
	{ 0xcc3c5964, "ether_setup" },
	{ 0xd6f258cb, "dev_uc_unsync" },
	{ 0xfd63100d, "__dev_get_by_name" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xe6c4e20c, "garp_unregister_application" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x185f97af, "unregister_netdevice_queue" },
	{ 0xc7f84d1b, "netdev_warn" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0xfbcd8e82, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x58b4645c, "dev_close_many" },
	{ 0xf56d8a2, "rtnl_link_register" },
	{ 0x3277a9c3, "netpoll_send_skb" },
	{ 0x80e74046, "dev_uc_del" },
	{ 0x75ea9025, "dev_uc_sync" },
	{ 0x1da00537, "__netpoll_free" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x431ec3a9, "__nla_validate" },
	{ 0x99c14b53, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9fa52c93, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0xb4255a4d, "dev_mc_sync" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa3c6f253, "dev_get_stats" },
	{ 0xb2cde22f, "dev_set_mtu" },
};

MODULE_INFO(depends, "garp");


MODULE_INFO(srcversion, "2027994B2785298484F5DDF");
