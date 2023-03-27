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
	{ 0x23ba1bb5, "nft_unregister_obj" },
	{ 0x2ce58ec9, "nft_unregister_expr" },
	{ 0x8bc338f6, "nft_register_obj" },
	{ 0x7e17e26d, "nft_register_expr" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xc8efcfae, "metadata_dst_alloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0x431ec3a9, "__nla_validate" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xdcb764ad, "memset" },
	{ 0x3839df4b, "nft_parse_register_store" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8183bb5f, "nft_dump_register" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0xf6149499, "dst_release" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb40d00c6, "metadata_dst_free" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "7DF56DB495F7064FC1CC798");
