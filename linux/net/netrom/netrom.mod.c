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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0xb80e5f41, "skb_queue_head" },
	{ 0xe1f7f753, "release_sock" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf6bf2b2d, "sock_init_data" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb81d8e1f, "proc_create_seq_private" },
	{ 0x1c17066f, "skb_append" },
	{ 0x25b5a5c9, "iov_iter_revert" },
	{ 0x27339f09, "param_ops_int" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x3452ed0f, "send_sig" },
	{ 0x6fa1004e, "sk_stop_timer" },
	{ 0x316aad68, "sock_gettstamp" },
	{ 0x2f07a679, "seq_puts" },
	{ 0xd577cabe, "_copy_from_iter" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x56a90618, "dev_get_by_name" },
	{ 0x393cac96, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0x8a969d4b, "sock_queue_rcv_skb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x60cbeb06, "ax25_linkfail_release" },
	{ 0xe6ecbeae, "skb_recv_datagram" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x46fafcfb, "skb_set_owner_w" },
	{ 0xd7ebc897, "ax25_register_pid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x40761ec2, "netif_rx" },
	{ 0xc492e2d, "sock_no_sendpage" },
	{ 0xbbca8fba, "sock_no_mmap" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0x5b89bed1, "sock_efree" },
	{ 0xdcb764ad, "memset" },
	{ 0xbc6526e3, "sock_no_socketpair" },
	{ 0xd0c89817, "sk_alloc" },
	{ 0x9fbee235, "skb_copy_datagram_iter" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0xafbf69d6, "ax25_listen_release" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0xc051115b, "free_netdev" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0x5a921311, "strncmp" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x27600d4d, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x242852b9, "ax25_uid_policy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x24d273d1, "add_timer" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xadc5e3a, "init_net" },
	{ 0x4102e5f3, "sock_no_shutdown" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2425fd6f, "skb_copy_expand" },
	{ 0x9674d164, "ax25_send_frame" },
	{ 0x32178799, "proto_register" },
	{ 0x50c9a29b, "sk_reset_timer" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xeb137ec8, "datagram_poll" },
	{ 0xe01798b7, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0x1353e697, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0xc91801f5, "sock_alloc_send_skb" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8ede9e26, "ax25_protocol_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x75477a9b, "ax25_listen_register" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14cecd59, "ax25_display_timer" },
	{ 0xc1444946, "ax25cmp" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xbba5d6a5, "register_net_sysctl" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xee02e420, "ax25_findbyuid" },
	{ 0x7eb6add1, "ax25_linkfail_register" },
	{ 0x53dea1ff, "ax2asc" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe9f005b7, "skb_free_datagram" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "C584520BA187D8DF8B5D4E8");
