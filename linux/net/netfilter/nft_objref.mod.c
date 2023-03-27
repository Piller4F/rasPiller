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
	{ 0x8183bb5f, "nft_dump_register" },
	{ 0x24d0ddde, "nft_set_catchall_lookup" },
	{ 0x945b2040, "nf_tables_bind_set" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0x60b50019, "nft_set_lookup_global" },
	{ 0xee017045, "nf_tables_deactivate_set" },
	{ 0xf873e117, "nf_tables_destroy_set" },
	{ 0xc5ff1c18, "nft_obj_lookup" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x98cf60b3, "strlen" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "73A522DABE88DFDFED054AE");
