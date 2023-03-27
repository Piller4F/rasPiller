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
	{ 0x38f48af7, "put_user_ifreq" },
	{ 0xdda5b3bb, "dev_load" },
	{ 0xf6bf2b2d, "sock_init_data" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x25b5a5c9, "iov_iter_revert" },
	{ 0xc10f4e62, "dev_getbyhwaddr_rcu" },
	{ 0x316aad68, "sock_gettstamp" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xd577cabe, "_copy_from_iter" },
	{ 0xf6149499, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x56a90618, "dev_get_by_name" },
	{ 0x8d939648, "sock_no_getname" },
	{ 0x8a969d4b, "sock_queue_rcv_skb" },
	{ 0xe6ecbeae, "skb_recv_datagram" },
	{ 0xe9ffd76e, "sk_common_release" },
	{ 0x1ff60d9c, "sock_common_recvmsg" },
	{ 0xc492e2d, "sock_no_sendpage" },
	{ 0xbbca8fba, "sock_no_mmap" },
	{ 0xdc125ab4, "ieee802154_hdr_pull" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0xbc6526e3, "sock_no_socketpair" },
	{ 0xd0c89817, "sk_alloc" },
	{ 0x9fbee235, "skb_copy_datagram_iter" },
	{ 0x9e65d54f, "sock_no_bind" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0x638c7455, "ns_capable" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xb59dc2d1, "sock_prot_inuse_add" },
	{ 0x5d0a64b1, "sock_no_listen" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x448ea7c9, "sock_no_accept" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xe99db1f6, "dev_get_by_index" },
	{ 0x19ed7456, "dev_remove_pack" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xadc5e3a, "init_net" },
	{ 0x4102e5f3, "sock_no_shutdown" },
	{ 0x53a6f8b6, "__sock_recv_ts_and_drops" },
	{ 0xc6cbbc89, "capable" },
	{ 0x32178799, "proto_register" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xeb137ec8, "datagram_poll" },
	{ 0xe01798b7, "sock_register" },
	{ 0xb56735d3, "dev_getfirstbyhwtype" },
	{ 0x1353e697, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xc91801f5, "sock_alloc_send_skb" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xeb70cc38, "put_cmsg" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1f8687a, "sock_common_setsockopt" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x5f363967, "sock_common_getsockopt" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x33fc2a31, "get_user_ifreq" },
	{ 0xfb47c0c8, "dev_add_pack" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x9fa52c93, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe9f005b7, "skb_free_datagram" },
};

MODULE_INFO(depends, "ieee802154");


MODULE_INFO(srcversion, "147CDB96890B3007AA86857");
