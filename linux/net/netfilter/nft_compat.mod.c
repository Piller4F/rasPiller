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
	{ 0x73a07593, "nfnetlink_subsys_unregister" },
	{ 0x2ce58ec9, "nft_unregister_expr" },
	{ 0xaff22ef, "nfnetlink_subsys_register" },
	{ 0x7e17e26d, "nft_register_expr" },
	{ 0x544241c1, "xt_request_find_match" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xe431dde6, "xt_request_find_target" },
	{ 0x92997ed8, "_printk" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xadab222b, "nfnetlink_unicast" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x98cf60b3, "strlen" },
	{ 0x7d8fa849, "__nlmsg_put" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x68173019, "try_module_get" },
	{ 0xcf3879b6, "nft_request_module" },
	{ 0xe7626d1d, "xt_check_target" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x892c7016, "xt_check_match" },
	{ 0x3251d762, "nf_tables_trans_destroy_flush_work" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2ca39914, "nla_reserve" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0x1acd7981, "module_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
};

MODULE_INFO(depends, "nfnetlink,nf_tables,x_tables");


MODULE_INFO(srcversion, "EF227717735F9E251AF9688");
