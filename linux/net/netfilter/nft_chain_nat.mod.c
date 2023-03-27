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
	{ 0x4655ae2a, "nf_nat_ipv4_unregister_fn" },
	{ 0x922be1be, "nf_nat_ipv4_register_fn" },
	{ 0xff73c3b1, "nf_nat_ipv6_unregister_fn" },
	{ 0xf4b2f154, "nf_nat_ipv6_register_fn" },
	{ 0xe0c9048c, "nft_unregister_chain_type" },
	{ 0xca55c2ac, "nft_register_chain_type" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa8c55b99, "nft_do_chain" },
	{ 0xd16c38ed, "ipv6_find_hdr" },
	{ 0xafdd7557, "nf_nat_inet_register_fn" },
	{ 0x3e8b8c24, "nf_nat_inet_unregister_fn" },
};

MODULE_INFO(depends, "nf_nat,nf_tables");


MODULE_INFO(srcversion, "355DF73E2976056E9EE21A7");
