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
	{ 0x4d9638fb, "xt_unregister_match" },
	{ 0x91ddba6c, "xt_register_match" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0xe3b0ed1b, "ipv6_skip_exthdr" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "5ABA30B4AE75D6B2D183797");
