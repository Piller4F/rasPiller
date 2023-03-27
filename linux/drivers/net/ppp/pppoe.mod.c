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
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x19ed7456, "dev_remove_pack" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x435b23bf, "unregister_pernet_device" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xfb47c0c8, "dev_add_pack" },
	{ 0x1353e697, "proto_unregister" },
	{ 0x890e0c40, "register_pppox_proto" },
	{ 0x32178799, "proto_register" },
	{ 0x54475510, "register_pernet_device" },
	{ 0x10b97e3e, "ppp_register_net_channel" },
	{ 0x56a90618, "dev_get_by_name" },
	{ 0xcfff5f4f, "ppp_input" },
	{ 0x8a969d4b, "sock_queue_rcv_skb" },
	{ 0xdcb764ad, "memset" },
	{ 0xaf2ad9ba, "dev_get_by_name_rcu" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x66e779bd, "pskb_trim_rcsum_slow" },
	{ 0xd2995a81, "__sk_receive_skb" },
	{ 0x62baf4cb, "skb_pull_rcsum" },
	{ 0x4286f30f, "pppox_unbind_sock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x27600d4d, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xe4bddf10, "proc_create_net_data" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x25b5a5c9, "iov_iter_revert" },
	{ 0xe1f7f753, "release_sock" },
	{ 0xd577cabe, "_copy_from_iter" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xbaaaac58, "sock_wmalloc" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0x9fa52c93, "dev_queue_xmit" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x2f07a679, "seq_puts" },
	{ 0x393cac96, "seq_printf" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x9fbee235, "skb_copy_datagram_iter" },
	{ 0xe6ecbeae, "skb_recv_datagram" },
	{ 0xf6bf2b2d, "sock_init_data" },
	{ 0xd0c89817, "sk_alloc" },
};

MODULE_INFO(depends, "pppox,ppp_generic");


MODULE_INFO(srcversion, "47376A06A487CF4CC62EF5E");
