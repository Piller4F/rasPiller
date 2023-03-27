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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe1f7f753, "release_sock" },
	{ 0x33a860c8, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xe1a8d7c9, "net_rwsem" },
	{ 0x53b954a2, "up_read" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x36673d86, "nf_queue_nf_hook_drop" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf44a904a, "net_ns_barrier" },
	{ 0x6030cbd6, "nf_nat_hook" },
	{ 0xa2ae6fdc, "ip_ct_attach" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf5d0e159, "nf_defrag_ipv6_enable" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x7592cb4f, "inet_proto_csum_replace4" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc2a13f32, "__skb_checksum" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe17678a, "siphash_4u64" },
	{ 0xb15b4109, "crc32c" },
	{ 0xba53adab, "nla_policy_len" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x665f0364, "nf_ip_checksum" },
	{ 0x52179a44, "nf_log_packet" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0xea27ad7f, "nf_unregister_net_hooks" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x100588a9, "skb_ensure_writable" },
	{ 0xdd169036, "nf_checksum_partial" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0xa1018fa2, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xadc5e3a, "init_net" },
	{ 0x51d13875, "nf_hooks_lwtunnel_sysctl_handler" },
	{ 0x7cd3fe52, "nf_checksum" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x1acd7981, "module_put" },
	{ 0x41314665, "kmem_cache_alloc" },
	{ 0xa9af3739, "nf_register_net_hooks" },
	{ 0xe3b0ed1b, "ipv6_skip_exthdr" },
	{ 0xaee578fb, "nf_defrag_ipv6_disable" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x14c6e4ce, "param_get_uint" },
	{ 0xd2982207, "nf_unregister_sockopt" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x2cf494f0, "nf_ct_hook" },
	{ 0x96b759ad, "kmem_cache_create" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8d40777, "nf_defrag_ipv4_enable" },
	{ 0xbb0b8075, "param_set_uint" },
	{ 0xf942e76e, "nla_put_64bit" },
	{ 0xc0efa09f, "nf_register_sockopt" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xbba5d6a5, "register_net_sysctl" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0xfc03a4ca, "proc_dou8vec_minmax" },
	{ 0xaf82b861, "nf_ip6_checksum" },
	{ 0xfd61e3ca, "nf_defrag_ipv4_disable" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x68173019, "try_module_get" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x219e54ee, "__do_once_done" },
};

MODULE_INFO(depends, "nf_defrag_ipv6,nf_defrag_ipv4");


MODULE_INFO(srcversion, "32E1D47C6E2A0975C1A6083");
