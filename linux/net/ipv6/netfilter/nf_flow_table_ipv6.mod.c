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
	{ 0x7da68436, "nf_flow_offload_ipv6_hook" },
	{ 0xed193bbd, "nf_flow_table_free" },
	{ 0xfccd9bed, "nf_flow_rule_route_ipv6" },
	{ 0xe3c99f41, "nf_flow_table_offload_setup" },
	{ 0x86529bd7, "nf_flow_table_init" },
	{ 0x8b6890a0, "nft_unregister_flowtable_type" },
	{ 0xb88bfde3, "nft_register_flowtable_type" },
};

MODULE_INFO(depends, "nf_flow_table,nf_tables");


MODULE_INFO(srcversion, "8419556D34186EFF9280A4F");
