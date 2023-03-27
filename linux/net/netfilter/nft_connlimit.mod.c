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
	{ 0x23ba1bb5, "nft_unregister_obj" },
	{ 0x7e17e26d, "nft_register_expr" },
	{ 0x8bc338f6, "nft_register_obj" },
	{ 0xa85fd64a, "nf_ct_netns_put" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x2ec27ea4, "nf_ct_get_tuplepr" },
	{ 0x4a421b3a, "nf_conncount_add" },
	{ 0x5b9701f6, "nf_ct_netns_get" },
	{ 0x8c4cb9c3, "nf_conncount_list_init" },
	{ 0x3ff55ad3, "nf_conncount_cache_free" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x6441a1e1, "nf_conncount_gc_list" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack,nf_conncount");


MODULE_INFO(srcversion, "B8DC463C25B81894E7A2271");
