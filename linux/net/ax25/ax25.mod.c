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
	{ 0xf6bf2b2d, "sock_init_data" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb81d8e1f, "proc_create_seq_private" },
	{ 0x25b5a5c9, "iov_iter_revert" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0x913c3c7f, "from_kuid_munged" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x3452ed0f, "send_sig" },
	{ 0x316aad68, "sock_gettstamp" },
	{ 0x2f07a679, "seq_puts" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xd577cabe, "_copy_from_iter" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x42d9296a, "skb_copy" },
	{ 0x393cac96, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0x8a969d4b, "sock_queue_rcv_skb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x46fafcfb, "skb_set_owner_w" },
	{ 0x703fd655, "sock_i_ino" },
	{ 0xed872701, "sock_rfree" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x40761ec2, "netif_rx" },
	{ 0xc492e2d, "sock_no_sendpage" },
	{ 0xbbca8fba, "sock_no_mmap" },
	{ 0x4d2b8f08, "skb_dequeue_tail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0xbc6526e3, "sock_no_socketpair" },
	{ 0xd0c89817, "sk_alloc" },
	{ 0xfccb672a, "__skb_wait_for_more_packets" },
	{ 0x9fbee235, "skb_copy_datagram_iter" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x543ef284, "seq_hlist_start" },
	{ 0x5792f848, "strlcpy" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x27600d4d, "sk_free" },
	{ 0x19ed7456, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xadc5e3a, "init_net" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x32178799, "proto_register" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0xabaedbc4, "make_kuid" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xeb137ec8, "datagram_poll" },
	{ 0xe01798b7, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0x1353e697, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xc91801f5, "sock_alloc_send_skb" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xfd63100d, "__dev_get_by_name" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x1b45b5a9, "__skb_try_recv_datagram" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfb47c0c8, "dev_add_pack" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9fa52c93, "dev_queue_xmit" },
	{ 0xbba5d6a5, "register_net_sysctl" },
	{ 0x91d9848d, "skb_expand_head" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe9f005b7, "skb_free_datagram" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "02D1F5036485B082F75134A");
