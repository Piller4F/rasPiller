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
	{ 0xe1f7f753, "release_sock" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x54475510, "register_pernet_device" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xde1302d2, "sockfd_lookup" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xcc1b882a, "idr_get_next_ul" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x4ebd5d06, "udp6_set_csum" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x7b261aab, "sock_release" },
	{ 0xf6149499, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xae721402, "sock_create_kern" },
	{ 0x147d924f, "trace_event_buffer_reserve" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xec53c3db, "inet6_csk_xmit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x63460e71, "udp_sock_create6" },
	{ 0xa9a75c44, "setup_udp_tunnel_sock" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xdcb764ad, "memset" },
	{ 0xbe1e211c, "kernel_connect" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xe2f5ce26, "bpf_trace_run1" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x435b23bf, "unregister_pernet_device" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x56837274, "trace_event_reg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x50e9eb95, "kernel_sock_shutdown" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x27600d4d, "sk_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xe3056e58, "fput" },
	{ 0x7fda8347, "perf_trace_run_bpf_submit" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0x20a52f2, "trace_event_ignore_this_pid" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x18cc3332, "trace_event_buffer_commit" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x24209a1a, "event_triggers_call" },
	{ 0x85c5a49d, "bpf_trace_run2" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0xf75e6edb, "udp_set_csum" },
	{ 0x591c79cc, "trace_event_raw_init" },
	{ 0x8ce9945b, "kernel_bind" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x6970de83, "trace_event_printf" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0x1c4ebfb7, "udp_sock_create4" },
	{ 0x7ef23c67, "trace_raw_output_prep" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xdd17826a, "ip_queue_xmit" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
};

MODULE_INFO(depends, "ipv6,ip6_udp_tunnel,udp_tunnel");


MODULE_INFO(srcversion, "D131D2F101ECA73E4757E91");
