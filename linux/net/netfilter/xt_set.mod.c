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
	{ 0xc75ef391, "xt_unregister_targets" },
	{ 0xa2f06cb2, "xt_unregister_matches" },
	{ 0x39467869, "xt_register_targets" },
	{ 0x6e60e22a, "xt_register_matches" },
	{ 0xfcd0171e, "ip_set_test" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe3d6dc56, "ip_set_del" },
	{ 0xf1ecc18b, "ip_set_add" },
	{ 0xdcb764ad, "memset" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x4cedd419, "ip_set_nfnl_get_byindex" },
	{ 0x3f179fed, "ip_set_nfnl_put" },
};

MODULE_INFO(depends, "x_tables,ip_set");


MODULE_INFO(srcversion, "2664E89D13CED67CA5A2AEC");
