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
	{ 0x38f48af7, "put_user_ifreq" },
	{ 0xf6bf2b2d, "sock_init_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb81d8e1f, "proc_create_seq_private" },
	{ 0x25b5a5c9, "iov_iter_revert" },
	{ 0x913c3c7f, "from_kuid_munged" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x316aad68, "sock_gettstamp" },
	{ 0x2f07a679, "seq_puts" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd577cabe, "_copy_from_iter" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x42d9296a, "skb_copy" },
	{ 0x393cac96, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x8a969d4b, "sock_queue_rcv_skb" },
	{ 0xe6ecbeae, "skb_recv_datagram" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x12baeca1, "skb_realloc_headroom" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xc492e2d, "sock_no_sendpage" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xbbca8fba, "sock_no_mmap" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0xbc6526e3, "sock_no_socketpair" },
	{ 0x5a0baca8, "proc_mkdir" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xd0c89817, "sk_alloc" },
	{ 0x9fbee235, "skb_copy_datagram_iter" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x5d0a64b1, "sock_no_listen" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x448ea7c9, "sock_no_accept" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x27600d4d, "sk_free" },
	{ 0x19ed7456, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xadc5e3a, "init_net" },
	{ 0x5743598f, "register_snap_client" },
	{ 0x4102e5f3, "sock_no_shutdown" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x32178799, "proto_register" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xeb137ec8, "datagram_poll" },
	{ 0xe01798b7, "sock_register" },
	{ 0x1353e697, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0xc91801f5, "sock_alloc_send_skb" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xfd63100d, "__dev_get_by_name" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xdec1062e, "remove_proc_subtree" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xf2c6467c, "unregister_snap_client" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0x33fc2a31, "get_user_ifreq" },
	{ 0xfb47c0c8, "dev_add_pack" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x9fa52c93, "dev_queue_xmit" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xbba5d6a5, "register_net_sysctl" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xde98cf21, "sock_i_uid" },
	{ 0xd1b7d5b7, "dev_mc_add_global" },
	{ 0xe9f005b7, "skb_free_datagram" },
};

MODULE_INFO(depends, "psnap");


MODULE_INFO(srcversion, "F2495D8873595F38A7752F1");
