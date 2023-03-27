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
	{ 0x3f2752d1, "neigh_lookup" },
	{ 0x60b9901c, "inet_frag_kill" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0xf6149499, "dst_release" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x42d9296a, "skb_copy" },
	{ 0xd2fc6268, "lowpan_header_compress" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9ed538b6, "init_user_ns" },
	{ 0x4cc8288a, "neigh_destroy" },
	{ 0x5f22bf56, "fqdir_exit" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x805ca0f3, "inet_frag_find" },
	{ 0xf478e2a2, "inet_frag_reasm_prepare" },
	{ 0x40761ec2, "netif_rx" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xdcb764ad, "memset" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0x359b14ac, "inet_frags_fini" },
	{ 0xccb6a389, "ieee802154_hdr_peek" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xe99db1f6, "dev_get_by_index" },
	{ 0x19ed7456, "dev_remove_pack" },
	{ 0xa8604ebf, "nd_tbl" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xadc5e3a, "init_net" },
	{ 0xf74ce92, "rtnl_link_unregister" },
	{ 0x8d036199, "lowpan_header_decompress" },
	{ 0x5d865209, "fqdir_init" },
	{ 0x2425fd6f, "skb_copy_expand" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x8657ec10, "inet_frag_reasm_finish" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7ec26c26, "inet_frag_destroy" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xeaffe2ed, "lowpan_unregister_netdevice" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x2f9379e6, "ieee802154_hdr_peek_addrs" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf56d8a2, "rtnl_link_register" },
	{ 0xfe28fafc, "lowpan_register_netdevice" },
	{ 0xe8274efa, "inet_frags_init" },
	{ 0x86936809, "inet_frag_queue_insert" },
	{ 0xfb47c0c8, "dev_add_pack" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9fa52c93, "dev_queue_xmit" },
	{ 0xbba5d6a5, "register_net_sysctl" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x87e2553b, "ieee802154_max_payload" },
};

MODULE_INFO(depends, "6lowpan,ieee802154,ipv6");


MODULE_INFO(srcversion, "555B70E9FE86BA0E48AE312");
