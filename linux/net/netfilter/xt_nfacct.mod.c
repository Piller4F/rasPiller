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
	{ 0xa2f06cb2, "xt_unregister_matches" },
	{ 0x6e60e22a, "xt_register_matches" },
	{ 0x72847e65, "nfnl_acct_overquota" },
	{ 0x8f97e31b, "nfnl_acct_update" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92a88e1b, "nfnl_acct_find_get" },
	{ 0xbecf5d14, "nfnl_acct_put" },
};

MODULE_INFO(depends, "x_tables,nfnetlink_acct");


MODULE_INFO(srcversion, "7C93FD91F907A288AB11768");
