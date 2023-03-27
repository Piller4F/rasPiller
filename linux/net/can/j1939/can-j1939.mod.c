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
	{ 0xe5c02461, "netdev_info" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6b3830d, "can_rx_register" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x25b5a5c9, "iov_iter_revert" },
	{ 0x5e06bc5c, "refcount_dec_and_lock" },
	{ 0x3e6a656a, "netdev_notice" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xcd05764d, "can_proto_unregister" },
	{ 0xd577cabe, "_copy_from_iter" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xbabe8df, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x8a969d4b, "sock_queue_rcv_skb" },
	{ 0xe6ecbeae, "skb_recv_datagram" },
	{ 0xa4aa6834, "netdev_alert" },
	{ 0x9010573b, "sock_queue_err_skb" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xc492e2d, "sock_no_sendpage" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbbca8fba, "sock_no_mmap" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0x5b89bed1, "sock_efree" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xdcb764ad, "memset" },
	{ 0xbc6526e3, "sock_no_socketpair" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xad39f347, "sock_recv_errqueue" },
	{ 0xd2c99738, "__kmalloc_track_caller" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x5d0a64b1, "sock_no_listen" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x448ea7c9, "sock_no_accept" },
	{ 0xc7275ee2, "netdev_printk" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x27600d4d, "sk_free" },
	{ 0xe99db1f6, "dev_get_by_index" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4102e5f3, "sock_no_shutdown" },
	{ 0x8dc6d198, "can_send" },
	{ 0x53a6f8b6, "__sock_recv_ts_and_drops" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xeb137ec8, "datagram_poll" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x3340d03c, "can_proto_register" },
	{ 0xc91801f5, "sock_alloc_send_skb" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xeb70cc38, "put_cmsg" },
	{ 0xcad16848, "sk_error_report" },
	{ 0x835033cd, "netdev_err" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc7f84d1b, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x5b34b83a, "can_sock_destruct" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0xf942e76e, "nla_put_64bit" },
	{ 0xe1194d5, "hrtimer_try_to_cancel" },
	{ 0x1ad3b57e, "can_rx_unregister" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x43ad8cd7, "_copy_to_iter" },
	{ 0xe9f005b7, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "072DD4A49BFDA9861387987");
