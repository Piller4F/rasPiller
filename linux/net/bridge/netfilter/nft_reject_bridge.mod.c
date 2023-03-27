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
	{ 0x6081751d, "nft_reject_policy" },
	{ 0x391deb8d, "nft_reject_dump" },
	{ 0x21fb899, "nft_reject_init" },
	{ 0x2ce58ec9, "nft_unregister_expr" },
	{ 0x7e17e26d, "nft_register_expr" },
	{ 0xe2c84666, "nft_reject_icmp_code" },
	{ 0x1de558c1, "nft_reject_icmpv6_code" },
	{ 0xd9158cd, "nf_reject_skb_v6_tcp_reset" },
	{ 0xbeeca900, "nf_reject_skb_v4_tcp_reset" },
	{ 0xbc13a571, "br_forward" },
	{ 0xca8b7c19, "nf_reject_skb_v6_unreach" },
	{ 0x70efa4c4, "nf_reject_skb_v4_unreach" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0xc23cd9bb, "nft_chain_validate_hooks" },
};

MODULE_INFO(depends, "nft_reject,nf_tables,nf_reject_ipv6,nf_reject_ipv4,bridge");


MODULE_INFO(srcversion, "F2E25D682C6BFAD20D6B187");
