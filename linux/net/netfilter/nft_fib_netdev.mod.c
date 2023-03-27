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
	{ 0xb3c36947, "nft_fib_policy" },
	{ 0xd6ec49, "nft_fib_validate" },
	{ 0x40a5c0bf, "nft_fib_dump" },
	{ 0x8405e6ac, "nft_fib_init" },
	{ 0x2ce58ec9, "nft_unregister_expr" },
	{ 0x7e17e26d, "nft_register_expr" },
	{ 0xe704780f, "nft_fib6_eval_type" },
	{ 0xf4d9dc0f, "nft_fib4_eval" },
	{ 0x93c803dc, "nft_fib4_eval_type" },
	{ 0x7398b3c3, "nft_fib6_eval" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
};

MODULE_INFO(depends, "nft_fib,nf_tables,nft_fib_ipv6,nft_fib_ipv4,ipv6");


MODULE_INFO(srcversion, "329D4829B68F05467D6D82D");
