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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x82dca6b9, "sock_diag_put_meminfo" },
	{ 0x5d8476d3, "bpf_sk_storage_diag_alloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0x913c3c7f, "from_kuid_munged" },
	{ 0xd1fd771a, "sock_diag_unregister" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x703fd655, "sock_i_ino" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x67722d74, "sock_diag_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x3350c520, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4998d7f1, "nla_reserve_64bit" },
	{ 0xf665f74f, "sock_load_diag_module" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfe9c88b6, "sock_diag_unregister_inet_compat" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x664363bd, "inet6_lookup" },
	{ 0x7e94d48a, "sock_gen_put" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8e4eb451, "bpf_sk_storage_diag_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xb8ddd296, "sock_diag_check_cookie" },
	{ 0x64efaea7, "sock_diag_save_cookie" },
	{ 0xf942e76e, "nla_put_64bit" },
	{ 0xcf5be350, "__inet_lookup_listener" },
	{ 0xa4c92719, "sock_diag_register_inet_compat" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x6eb9f584, "bpf_sk_storage_diag_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7d8fa849, "__nlmsg_put" },
	{ 0xde98cf21, "sock_i_uid" },
	{ 0x7ae66123, "__netlink_dump_start" },
	{ 0x40cd4899, "netlink_net_capable" },
	{ 0x521c15fc, "__inet_lookup_established" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3B3521FF2F7353B5C91894F");
