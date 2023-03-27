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
	{ 0xeb37101c, "audit_log_end" },
	{ 0x17a81864, "audit_log_start" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x52179a44, "nf_log_packet" },
	{ 0xb8cd3a7f, "nf_logger_put" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0xe1dcf64a, "audit_log_format" },
	{ 0xe3b0ed1b, "ipv6_skip_exthdr" },
	{ 0xcf3879b6, "nft_request_module" },
	{ 0x37a0cba, "kfree" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd1f2eee2, "nf_logger_find_get" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "8AD27CE73FD1BE028084267");
