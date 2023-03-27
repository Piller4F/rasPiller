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
	{ 0x27339f09, "param_ops_int" },
	{ 0x68bae379, "single_release" },
	{ 0xa1803e34, "seq_lseek" },
	{ 0xdcf25530, "seq_read" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x56a90618, "dev_get_by_name" },
	{ 0x9e0c711d, "vzalloc_node" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x652032cb, "mac_pton" },
	{ 0xe914e41e, "strcpy" },
	{ 0x41482d8b, "strndup_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x68173019, "try_module_get" },
	{ 0xc6cbbc89, "capable" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x31a0f1a7, "freezing_slow_path" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xa6257a2f, "complete" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0x368f4652, "skb_checksum" },
	{ 0xeecadb79, "udp4_hwcsum" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x9fa52c93, "dev_queue_xmit" },
	{ 0x5682efd3, "netif_receive_skb" },
	{ 0xc42e99a7, "eth_type_trans" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x4ec77cef, "pktgen_xfrm_outer_mode_output" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x1000e51, "schedule" },
	{ 0x4574f074, "hrtimer_sleeper_start_expires" },
	{ 0xcafd790, "hrtimer_init_sleeper" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x6c8376db, "softnet_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x17afb12f, "__put_page" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x999e8297, "vfree" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xcafbcd20, "kthread_bind" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xd2207e91, "proc_create" },
	{ 0x5a0baca8, "proc_mkdir" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x47b7d86c, "__xfrm_state_destroy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0x9ba47c9e, "__put_task_struct" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xd81baef0, "proc_create_data" },
	{ 0x440cc275, "proc_remove" },
	{ 0x92997ed8, "_printk" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x1acd7981, "module_put" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x1477d3e6, "xfrm_stateonly_find" },
	{ 0xc31409dc, "xfrm_state_lookup_byspi" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x393cac96, "seq_printf" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5a921311, "strncmp" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x98cf60b3, "strlen" },
	{ 0x2f07a679, "seq_puts" },
	{ 0x4558a487, "single_open" },
	{ 0xd06eabd1, "PDE_DATA" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2C6AAAFE89CD97B3FC41936");
