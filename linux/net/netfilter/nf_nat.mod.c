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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x6030cbd6, "nf_nat_hook" },
	{ 0x289c3714, "nf_ct_alloc_hashtable" },
	{ 0xab997380, "nf_ct_kill_acct" },
	{ 0xf6149499, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7592cb4f, "inet_proto_csum_replace4" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc2a13f32, "__skb_checksum" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xb15b4109, "crc32c" },
	{ 0x2efece57, "__put_net" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xe88e7940, "inet_proto_csum_replace16" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0xe2985c27, "nf_ct_iterate_destroy" },
	{ 0x665f0364, "nf_ip_checksum" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xdcb764ad, "memset" },
	{ 0x368f4652, "skb_checksum" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5664a274, "inet_select_addr" },
	{ 0xea27ad7f, "nf_unregister_net_hooks" },
	{ 0x100588a9, "skb_ensure_writable" },
	{ 0xa20e1646, "nf_hook_entries_delete_raw" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4a9c0c3d, "ip_route_me_harder" },
	{ 0xc006621b, "nf_conntrack_alter_reply" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x1acd7981, "module_put" },
	{ 0x3bfe1899, "nf_ipv6_ops" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xa9af3739, "nf_register_net_hooks" },
	{ 0xe3b0ed1b, "ipv6_skip_exthdr" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2dd8f4a1, "nf_ct_iterate_cleanup_net" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0x92997ed8, "_printk" },
	{ 0x6ccd7f65, "nf_conntrack_tuple_taken" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf1e90979, "nf_ct_extend_unregister" },
	{ 0x6d0f1845, "nf_ct_helper_expectfn_register" },
	{ 0x5ab3e8e5, "nf_ct_extend_register" },
	{ 0x8d7726df, "__xfrm_decode_session" },
	{ 0xca16db69, "nf_ct_helper_expectfn_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xe634b6c7, "nf_ct_seqadj_set" },
	{ 0x2fa8337c, "xfrm_lookup" },
	{ 0xb54298e1, "nf_hook_entries_insert_raw" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xaf82b861, "nf_ip6_checksum" },
	{ 0x68173019, "try_module_get" },
	{ 0x219e54ee, "__do_once_done" },
	{ 0x2ff4d036, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "3FDCF65F14ABF206391B1D5");
