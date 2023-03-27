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
	{ 0xdcf5ece4, "ipv6_getsockopt" },
	{ 0xe81a06fe, "ipv6_setsockopt" },
	{ 0xa799091f, "l2tp_ioctl" },
	{ 0xc492e2d, "sock_no_sendpage" },
	{ 0xbbca8fba, "sock_no_mmap" },
	{ 0x1ff60d9c, "sock_common_recvmsg" },
	{ 0x1c0684df, "inet_sendmsg" },
	{ 0x5f363967, "sock_common_getsockopt" },
	{ 0x1f8687a, "sock_common_setsockopt" },
	{ 0x4bf514d4, "inet_shutdown" },
	{ 0x5d0a64b1, "sock_no_listen" },
	{ 0x316aad68, "sock_gettstamp" },
	{ 0x9ae529ac, "inet6_compat_ioctl" },
	{ 0x9e62d414, "inet6_ioctl" },
	{ 0xeb137ec8, "datagram_poll" },
	{ 0x448ea7c9, "sock_no_accept" },
	{ 0xbc6526e3, "sock_no_socketpair" },
	{ 0x56b14a8d, "inet_dgram_connect" },
	{ 0x8d161754, "inet6_bind" },
	{ 0xb5f286da, "inet6_release" },
	{ 0xc94fe2de, "inet6_del_protocol" },
	{ 0xc0781b9c, "inet6_unregister_protosw" },
	{ 0x5278473f, "inet6_register_protosw" },
	{ 0x1353e697, "proto_unregister" },
	{ 0xb89058e5, "inet6_add_protocol" },
	{ 0x32178799, "proto_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x27600d4d, "sk_free" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xd2995a81, "__sk_receive_skb" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0x59795a5e, "__xfrm_policy_check" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x53c68bf6, "l2tp_session_dec_refcount" },
	{ 0x1f4f32ac, "l2tp_recv_common" },
	{ 0x71f726d9, "l2tp_session_get" },
	{ 0x7cd1a18f, "ipv6_chk_addr" },
	{ 0x24ff8dbf, "dev_get_by_index_rcu" },
	{ 0xc84a52bc, "ip6_dst_hoplimit" },
	{ 0xdab611c4, "__fl6_sock_lookup" },
	{ 0x136fb1cb, "ip6_push_pending_frames" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xcd5835b, "ipv6_flowlabel_exclusive" },
	{ 0xf6149499, "dst_release" },
	{ 0xdb693f1d, "ip6_append_data" },
	{ 0x4bae8591, "ip_generic_getfrag" },
	{ 0x8b3b8a75, "ip6_dst_lookup_flow" },
	{ 0xf59a8fc2, "security_sk_classify_flow" },
	{ 0x3f2092e3, "fl6_update_dst" },
	{ 0x573b5453, "ipv6_fixup_options" },
	{ 0x9bb78fd5, "fl6_merge_options" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb3363ed0, "ip6_datagram_send_ctl" },
	{ 0xdcb764ad, "memset" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe9ffd76e, "sk_common_release" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x8a969d4b, "sock_queue_rcv_skb" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x20f4152, "__ip6_datagram_connect" },
	{ 0xb10c6e3f, "__udp_disconnect" },
	{ 0x43d3af55, "inet6_destroy_sock" },
	{ 0xc7c48472, "l2tp_tunnel_delete" },
	{ 0xe1f7f753, "release_sock" },
	{ 0x188fbdda, "ip6_flush_pending_frames" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0x2c223dbc, "l2tp_sk_to_tunnel" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa8d6be9, "__sock_recv_wifi_status" },
	{ 0x8addf90b, "ip6_datagram_recv_ctl" },
	{ 0x27ffccae, "__sock_recv_timestamp" },
	{ 0xb94df1c8, "ipv6_recv_error" },
	{ 0xe9f005b7, "skb_free_datagram" },
	{ 0x9fbee235, "skb_copy_datagram_iter" },
	{ 0xe6ecbeae, "skb_recv_datagram" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "ipv6,l2tp_ip,l2tp_core");


MODULE_INFO(srcversion, "24268C1612F2D1FA43BAF05");
