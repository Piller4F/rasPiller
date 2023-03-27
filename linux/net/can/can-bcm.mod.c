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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6b3830d, "can_rx_register" },
	{ 0x25b5a5c9, "iov_iter_revert" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xef34bf3e, "hrtimer_active" },
	{ 0x828e22f4, "hrtimer_forward" },
	{ 0x83a84ef2, "_proc_mkdir" },
	{ 0x316aad68, "sock_gettstamp" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xcd05764d, "can_proto_unregister" },
	{ 0xd577cabe, "_copy_from_iter" },
	{ 0xa6adfbf5, "proc_create_net_single" },
	{ 0x393cac96, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x8d939648, "sock_no_getname" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0x8a969d4b, "sock_queue_rcv_skb" },
	{ 0xe6ecbeae, "skb_recv_datagram" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x703fd655, "sock_i_ino" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc492e2d, "sock_no_sendpage" },
	{ 0xbbca8fba, "sock_no_mmap" },
	{ 0xd06eabd1, "PDE_DATA" },
	{ 0x5b89bed1, "sock_efree" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xdcb764ad, "memset" },
	{ 0xbc6526e3, "sock_no_socketpair" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0x9e65d54f, "sock_no_bind" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0xbd7b056, "seq_putc" },
	{ 0x5d0a64b1, "sock_no_listen" },
	{ 0x448ea7c9, "sock_no_accept" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x24ff8dbf, "dev_get_by_index_rcu" },
	{ 0x27600d4d, "sk_free" },
	{ 0xe99db1f6, "dev_get_by_index" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x4102e5f3, "sock_no_shutdown" },
	{ 0x8dc6d198, "can_send" },
	{ 0x53a6f8b6, "__sock_recv_ts_and_drops" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xeb137ec8, "datagram_poll" },
	{ 0x92997ed8, "_printk" },
	{ 0x3340d03c, "can_proto_register" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0xcad16848, "sk_error_report" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x1ad3b57e, "can_rx_unregister" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x43ad8cd7, "_copy_to_iter" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe9f005b7, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "DA78BDBEC6D597DE2D08DBB");
