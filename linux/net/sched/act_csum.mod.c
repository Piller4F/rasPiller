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
	{ 0x4ad6b58b, "tcf_unregister_action" },
	{ 0xd76095b, "tcf_register_action" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0xc2a13f32, "__skb_checksum" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x6205d686, "tcf_idr_cleanup" },
	{ 0xdcd61258, "tcf_idr_release" },
	{ 0xdd5bd05a, "tcf_idr_create_from_flags" },
	{ 0xbb8f6ddc, "tcf_chain_put_by_act" },
	{ 0xb681ef3e, "tcf_action_set_ctrlact" },
	{ 0x969e052, "tcf_action_check_ctrlact" },
	{ 0x94d3611e, "tcf_idr_check_alloc" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xb15b4109, "crc32c" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xf942e76e, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x5b84be22, "tcf_idr_search" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xaa15155b, "tcf_generic_walker" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d73902e, "tcf_idrinfo_destroy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc7a4fbed, "rtnl_lock" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "40F66CF5C84A36DA583CF2D");
