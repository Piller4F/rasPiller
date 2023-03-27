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
	{ 0x2ce58ec9, "nft_unregister_expr" },
	{ 0x7e17e26d, "nft_register_expr" },
	{ 0x86ca5a92, "neigh_xmit" },
	{ 0x24ff8dbf, "dev_get_by_index_rcu" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0xa4d10251, "nf_fwd_netdev_egress" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0x8183bb5f, "nft_dump_register" },
	{ 0xc23cd9bb, "nft_chain_validate_hooks" },
	{ 0xa0f662f0, "nft_fwd_dup_netdev_offload" },
};

MODULE_INFO(depends, "nf_tables,nf_dup_netdev");


MODULE_INFO(srcversion, "F8F47E7C73E4221D978BA0E");
