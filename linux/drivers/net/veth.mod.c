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
	{ 0xba7a88df, "ethtool_op_get_ts_info" },
	{ 0x1df8d46d, "ethtool_op_get_link" },
	{ 0xd7e682ff, "eth_mac_addr" },
	{ 0xace9e702, "passthru_features_check" },
	{ 0xf74ce92, "rtnl_link_unregister" },
	{ 0xf56d8a2, "rtnl_link_register" },
	{ 0x8c551e5e, "napi_complete_done" },
	{ 0xb9681621, "xdp_do_flush" },
	{ 0x9e55726a, "bpf_redirect_info" },
	{ 0xdcb764ad, "memset" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x5682efd3, "netif_receive_skb" },
	{ 0xbe4c3417, "xdp_do_redirect" },
	{ 0x91deedaf, "__traceiter_xdp_exception" },
	{ 0xc42e99a7, "eth_type_trans" },
	{ 0x8b7a698b, "__tracepoint_xdp_exception" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0xcdc86b55, "sched_clock" },
	{ 0x92f0776, "xdp_master_redirect" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x146cc88f, "bpf_master_redirect_enabled_key" },
	{ 0x6f8f674a, "bpf_dispatcher_xdp_func" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x2f3f730c, "skb_headers_offset_update" },
	{ 0x6d776777, "skb_copy_header" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xe1d5f7c7, "build_skb" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc051115b, "free_netdev" },
	{ 0x2efece57, "__put_net" },
	{ 0xa0b7f6cf, "rtnl_configure_link" },
	{ 0xec11806, "register_netdevice" },
	{ 0xcba2af73, "rtnl_create_link" },
	{ 0xb5e2842, "rtnl_link_get_net" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x84c03e9a, "rtnl_nla_parse_ifla" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0xb64ddf9e, "skb_tstamp_tx" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x40761ec2, "netif_rx" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xedb4efec, "sock_wfree" },
	{ 0xef4f7edc, "__dev_forward_skb" },
	{ 0x74cf78e0, "skb_clone_tx_timestamp" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x99c14b53, "netdev_update_features" },
	{ 0xe50622c2, "bpf_prog_put" },
	{ 0x51ca0849, "xdp_rxq_info_is_reg" },
	{ 0xdb1e1d6f, "netif_carrier_on" },
	{ 0x92997ed8, "_printk" },
	{ 0xad841033, "netif_carrier_off" },
	{ 0xd9d063e3, "netdev_features_change" },
	{ 0x258e6d74, "napi_enable" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xbb7195a5, "xdp_warn" },
	{ 0xacb80494, "xdp_convert_zc_to_xdp_frame" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd027a371, "__traceiter_xdp_bulk_tx" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xbd5704ec, "__tracepoint_xdp_bulk_tx" },
	{ 0x47279311, "__napi_schedule" },
	{ 0x1ab402df, "napi_schedule_prep" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x129bf20a, "napi_disable" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x84df532d, "__xdp_build_skb_from_frame" },
	{ 0xad8ff428, "napi_gro_receive" },
	{ 0xd91dbd1f, "xdp_alloc_skb_bulk" },
	{ 0x920bf7a1, "netif_set_real_num_rx_queues" },
	{ 0xd1921338, "netif_set_real_num_tx_queues" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1048c491, "dev_lstats_read" },
	{ 0x5792f848, "strlcpy" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x668cbf84, "__netif_napi_del" },
	{ 0x5eed351, "xdp_rxq_info_unreg" },
	{ 0x354f99d0, "netif_napi_add" },
	{ 0x65c7c583, "xdp_rxq_info_reg_mem_model" },
	{ 0x1e853c8d, "xdp_rxq_info_reg" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x9efa7ff1, "xdp_return_frame" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc3c5964, "ether_setup" },
	{ 0x185f97af, "unregister_netdevice_queue" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A97CD39EABFF95355FB754E");
