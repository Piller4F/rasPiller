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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xb80e5f41, "skb_queue_head" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x54475510, "register_pernet_device" },
	{ 0x53b954a2, "up_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x68fa94a8, "bpf_prog_create" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x15f90688, "slhc_init" },
	{ 0xc6bfeb6c, "device_destroy" },
	{ 0x43f9ebc8, "slhc_remember" },
	{ 0x845319c9, "__register_chrdev" },
	{ 0x69d7c4f1, "bpf_prog_destroy" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xf36f42a9, "slhc_uncompress" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2efece57, "__put_net" },
	{ 0x4a8e774f, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x668b19a1, "down_read" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x40761ec2, "netif_rx" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0x9fbee235, "skb_copy_datagram_iter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x435b23bf, "unregister_pernet_device" },
	{ 0x638c7455, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xc051115b, "free_netdev" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc7275ee2, "netdev_printk" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x292268, "noop_llseek" },
	{ 0x12284cf8, "device_create" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe3056e58, "fput" },
	{ 0xf74ce92, "rtnl_link_unregister" },
	{ 0x2a928918, "slhc_free" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x1acd7981, "module_put" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0xcdc86b55, "sched_clock" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x835033cd, "netdev_err" },
	{ 0xfd63100d, "__dev_get_by_name" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x62baf4cb, "skb_pull_rcsum" },
	{ 0x185f97af, "unregister_netdevice_queue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x74769d5, "iov_iter_init" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa53005d9, "fget" },
	{ 0xf56d8a2, "rtnl_link_register" },
	{ 0xdcdc0040, "slhc_compress" },
	{ 0x551ab123, "class_destroy" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0x42824447, "__class_create" },
	{ 0x74b8e674, "slhc_toss" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x68173019, "try_module_get" },
};

MODULE_INFO(depends, "slhc");


MODULE_INFO(srcversion, "E1743AD36A407F630351AF7");
