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
	{ 0xc492e2d, "sock_no_sendpage" },
	{ 0xbbca8fba, "sock_no_mmap" },
	{ 0x4102e5f3, "sock_no_shutdown" },
	{ 0x5d0a64b1, "sock_no_listen" },
	{ 0xb96301bf, "sock_no_ioctl" },
	{ 0xeb137ec8, "datagram_poll" },
	{ 0x8d939648, "sock_no_getname" },
	{ 0x448ea7c9, "sock_no_accept" },
	{ 0xbc6526e3, "sock_no_socketpair" },
	{ 0xbd7f1345, "sock_no_connect" },
	{ 0x9e65d54f, "sock_no_bind" },
	{ 0x5a7bcf75, "xfrm_register_km" },
	{ 0xe01798b7, "sock_register" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x32178799, "proto_register" },
	{ 0x1353e697, "proto_unregister" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x70a9273f, "xfrm_unregister_km" },
	{ 0xdc824f6a, "xfrm_alloc_spi" },
	{ 0xfeb5d0aa, "verify_spi_info" },
	{ 0xb4736255, "xfrm_find_acq" },
	{ 0xd4a27388, "xfrm_policy_byid" },
	{ 0x761bada, "xfrm_audit_policy_add" },
	{ 0x867cfe92, "xfrm_policy_insert" },
	{ 0x32cad019, "xfrm_policy_alloc" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x63f1245b, "xfrm_policy_destroy" },
	{ 0x1479110c, "xfrm_audit_policy_delete" },
	{ 0xf39986f, "xfrm_policy_bysel_ctx" },
	{ 0x27600d4d, "sk_free" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x3fb7c29f, "xfrm_find_acq_byseq" },
	{ 0x72395dc1, "xfrm_calg_get_byid" },
	{ 0x5c699441, "xfrm_aalg_get_byid" },
	{ 0x37a0cba, "kfree" },
	{ 0xb0a22bf, "xfrm_state_add" },
	{ 0x9c0723e9, "xfrm_audit_state_add" },
	{ 0x9e15a8a0, "xfrm_state_update" },
	{ 0xcd5025f9, "xfrm_init_state" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe914e41e, "strcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc80741, "xfrm_ealg_get_byid" },
	{ 0x7dae1325, "xfrm_state_alloc" },
	{ 0xf6bf2b2d, "sock_init_data" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd0c89817, "sk_alloc" },
	{ 0x638c7455, "ns_capable" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x47b7d86c, "__xfrm_state_destroy" },
	{ 0xe9de031a, "xfrm_audit_state_delete" },
	{ 0xd222b4ea, "xfrm_state_delete" },
	{ 0x92997ed8, "_printk" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0xc6b1fdbe, "xfrm_aalg_get_byidx" },
	{ 0xb73be794, "xfrm_ealg_get_byidx" },
	{ 0x7a8ca627, "xfrm_count_pfkey_enc_supported" },
	{ 0xa575945, "xfrm_count_pfkey_auth_supported" },
	{ 0x28e23139, "xfrm_probe_algs" },
	{ 0x42d9296a, "skb_copy" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x53a6f8b6, "__sock_recv_ts_and_drops" },
	{ 0xe9f005b7, "skb_free_datagram" },
	{ 0x9fbee235, "skb_copy_datagram_iter" },
	{ 0xe6ecbeae, "skb_recv_datagram" },
	{ 0x25b5a5c9, "iov_iter_revert" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd577cabe, "_copy_from_iter" },
	{ 0xf4876732, "km_state_notify" },
	{ 0xe9274a7, "xfrm_state_flush" },
	{ 0xa980492f, "km_policy_notify" },
	{ 0xb87838b2, "xfrm_policy_flush" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0xdcb764ad, "memset" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xed872701, "sock_rfree" },
	{ 0xbabe8df, "skb_clone" },
	{ 0xe4bddf10, "proc_create_net_data" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0x1e9edfb7, "seq_hlist_start_head_rcu" },
	{ 0x67b78eb3, "seq_hlist_next_rcu" },
	{ 0x393cac96, "seq_printf" },
	{ 0x703fd655, "sock_i_ino" },
	{ 0x913c3c7f, "from_kuid_munged" },
	{ 0xde98cf21, "sock_i_uid" },
	{ 0x8c5d0b23, "xfrm_state_lookup" },
	{ 0x9c8506da, "xfrm_state_walk" },
	{ 0x873f6473, "xfrm_state_walk_done" },
	{ 0x4196c3ef, "xfrm_policy_walk_done" },
	{ 0x71f46402, "xfrm_policy_walk" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "A56217022F1B6D6F811DE04");
