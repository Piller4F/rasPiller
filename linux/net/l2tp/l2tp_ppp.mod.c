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
	{ 0xbbca8fba, "sock_no_mmap" },
	{ 0x4102e5f3, "sock_no_shutdown" },
	{ 0x5d0a64b1, "sock_no_listen" },
	{ 0x8713a40b, "pppox_compat_ioctl" },
	{ 0x8a668e7d, "pppox_ioctl" },
	{ 0xeb137ec8, "datagram_poll" },
	{ 0x448ea7c9, "sock_no_accept" },
	{ 0xbc6526e3, "sock_no_socketpair" },
	{ 0x9e65d54f, "sock_no_bind" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0x435b23bf, "unregister_pernet_device" },
	{ 0x1353e697, "proto_unregister" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0xcd8d6c8a, "l2tp_nl_register_ops" },
	{ 0x890e0c40, "register_pppox_proto" },
	{ 0x32178799, "proto_register" },
	{ 0x54475510, "register_pernet_device" },
	{ 0x25b5a5c9, "iov_iter_revert" },
	{ 0xd577cabe, "_copy_from_iter" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xbaaaac58, "sock_wmalloc" },
	{ 0xca98015, "l2tp_session_set_header_len" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdcb764ad, "memset" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x4286f30f, "pppox_unbind_sock" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe64d7785, "l2tp_xmit_skb" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x2f07a679, "seq_puts" },
	{ 0x1043f5ad, "ppp_dev_name" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x393cac96, "seq_printf" },
	{ 0x92997ed8, "_printk" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x8a969d4b, "sock_queue_rcv_skb" },
	{ 0xcfff5f4f, "ppp_input" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x27600d4d, "sk_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x8cabce1f, "l2tp_session_delete" },
	{ 0x10b97e3e, "ppp_register_net_channel" },
	{ 0xf6149499, "dst_release" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7e743f3d, "l2tp_session_register" },
	{ 0x5b643f51, "l2tp_session_inc_refcount" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x241af2f6, "l2tp_session_create" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc7c48472, "l2tp_tunnel_delete" },
	{ 0x39588f, "l2tp_tunnel_get_session" },
	{ 0x1a7508da, "l2tp_tunnel_register" },
	{ 0x54909e14, "l2tp_tunnel_inc_refcount" },
	{ 0xda22ab38, "l2tp_tunnel_create" },
	{ 0x624e4712, "l2tp_tunnel_get" },
	{ 0xe1f7f753, "release_sock" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0xdf6b3bc3, "l2tp_session_get_nth" },
	{ 0xb4d1c515, "l2tp_tunnel_get_nth" },
	{ 0x49ac4e5d, "l2tp_tunnel_dec_refcount" },
	{ 0xe4bddf10, "proc_create_net_data" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9fbee235, "skb_copy_datagram_iter" },
	{ 0xe6ecbeae, "skb_recv_datagram" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xdf208c8d, "l2tp_udp_encap_recv" },
	{ 0x53c68bf6, "l2tp_session_dec_refcount" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0xf6bf2b2d, "sock_init_data" },
	{ 0xd0c89817, "sk_alloc" },
};

MODULE_INFO(depends, "pppox,l2tp_netlink,l2tp_core,ppp_generic");


MODULE_INFO(srcversion, "AE00F1660DE5F8B741CF374");
