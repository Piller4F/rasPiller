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
	{ 0x4ad6b58b, "tcf_unregister_action" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xd76095b, "tcf_register_action" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x349cba85, "strchr" },
	{ 0xf6149499, "dst_release" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x92997ed8, "_printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3078738f, "tcf_dev_queue_xmit" },
	{ 0x9fa52c93, "dev_queue_xmit" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x5682efd3, "netif_receive_skb" },
	{ 0x62baf4cb, "skb_pull_rcsum" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6205d686, "tcf_idr_cleanup" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xdcd61258, "tcf_idr_release" },
	{ 0xbb8f6ddc, "tcf_chain_put_by_act" },
	{ 0xb681ef3e, "tcf_action_set_ctrlact" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xe99db1f6, "dev_get_by_index" },
	{ 0x969e052, "tcf_action_check_ctrlact" },
	{ 0xdd5bd05a, "tcf_idr_create_from_flags" },
	{ 0x94d3611e, "tcf_idr_check_alloc" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xf942e76e, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x5b84be22, "tcf_idr_search" },
	{ 0xaa15155b, "tcf_generic_walker" },
	{ 0x6c67f531, "tcf_action_update_stats" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d73902e, "tcf_idrinfo_destroy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc7a4fbed, "rtnl_lock" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1B264BE89EB35B373E79FEB");
