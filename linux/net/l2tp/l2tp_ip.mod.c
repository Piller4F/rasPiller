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
	{ 0x53c68bf6, "l2tp_session_dec_refcount" },
	{ 0x25b5a5c9, "iov_iter_revert" },
	{ 0xfb675e10, "ip_getsockopt" },
	{ 0x6da7fd7c, "ip_setsockopt" },
	{ 0x14db5f9e, "sk_setup_caps" },
	{ 0x316aad68, "sock_gettstamp" },
	{ 0xd577cabe, "_copy_from_iter" },
	{ 0xf6149499, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x1f4f32ac, "l2tp_recv_common" },
	{ 0x8a969d4b, "sock_queue_rcv_skb" },
	{ 0xe6ecbeae, "skb_recv_datagram" },
	{ 0x1c0684df, "inet_sendmsg" },
	{ 0x9bb62930, "inet_del_protocol" },
	{ 0xe9ffd76e, "sk_common_release" },
	{ 0x56b14a8d, "inet_dgram_connect" },
	{ 0x1ff60d9c, "sock_common_recvmsg" },
	{ 0xc492e2d, "sock_no_sendpage" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xbbca8fba, "sock_no_mmap" },
	{ 0xbc6526e3, "sock_no_socketpair" },
	{ 0xa8d6be9, "__sock_recv_wifi_status" },
	{ 0x9fbee235, "skb_copy_datagram_iter" },
	{ 0xf59a8fc2, "security_sk_classify_flow" },
	{ 0xf01f5cc0, "inet_addr_type" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0x5d0a64b1, "sock_no_listen" },
	{ 0x448ea7c9, "sock_no_accept" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x27600d4d, "sk_free" },
	{ 0x4bf514d4, "inet_shutdown" },
	{ 0xb3b0aae4, "inet_add_protocol" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x27ffccae, "__sock_recv_timestamp" },
	{ 0x946d6861, "inet_ioctl" },
	{ 0xd2995a81, "__sk_receive_skb" },
	{ 0x42a36fdf, "ip_cmsg_recv_offset" },
	{ 0x32178799, "proto_register" },
	{ 0x13e5c84d, "__sk_dst_check" },
	{ 0xf16f3d8b, "inet_release" },
	{ 0xabaedbc4, "make_kuid" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xeb137ec8, "datagram_poll" },
	{ 0x1353e697, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xbd0dcf3c, "ip_route_output_flow" },
	{ 0x1f8687a, "sock_common_setsockopt" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x59795a5e, "__xfrm_policy_check" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xd0e2c734, "inet_register_protosw" },
	{ 0xb10c6e3f, "__udp_disconnect" },
	{ 0xc7c48472, "l2tp_tunnel_delete" },
	{ 0x3ad7ab07, "inet_bind" },
	{ 0x5f363967, "sock_common_getsockopt" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xfd3368cf, "__ip4_datagram_connect" },
	{ 0xbaaaac58, "sock_wmalloc" },
	{ 0x71f726d9, "l2tp_session_get" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xdd17826a, "ip_queue_xmit" },
	{ 0x2c223dbc, "l2tp_sk_to_tunnel" },
	{ 0xe1728b04, "inet_unregister_protosw" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe9f005b7, "skb_free_datagram" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "D172510D2E6796E9296EB36");
