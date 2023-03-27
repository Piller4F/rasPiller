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
	{ 0x7ca2fd32, "nla_put" },
	{ 0xf942e76e, "nla_put_64bit" },
	{ 0x2730fee4, "nft_obj_notify" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "7D85F77FF5711F1FC28961D");
