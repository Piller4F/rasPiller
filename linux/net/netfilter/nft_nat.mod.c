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
	{ 0xb060eb89, "nf_nat_setup_info" },
	{ 0xdcb764ad, "memset" },
	{ 0xc23cd9bb, "nft_chain_validate_hooks" },
	{ 0x8b5ae838, "nft_chain_validate_dependency" },
	{ 0x5b9701f6, "nf_ct_netns_get" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0xa85fd64a, "nf_ct_netns_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8183bb5f, "nft_dump_register" },
	{ 0x7ca2fd32, "nla_put" },
};

MODULE_INFO(depends, "nf_tables,nf_nat,nf_conntrack");


MODULE_INFO(srcversion, "D518D794EB0C5C968F379E8");
