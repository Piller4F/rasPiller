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
	{ 0x2ef5b9cc, "inet_diag_unregister" },
	{ 0xddd69c67, "inet_diag_register" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x98cf60b3, "strlen" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x60075f4c, "inet_diag_dump_icsk" },
	{ 0x1adfe5d3, "inet_diag_dump_one_icsk" },
	{ 0x463219fb, "tcp_hashinfo" },
	{ 0x59d00e4d, "tcp_get_info" },
};

MODULE_INFO(depends, "inet_diag");


MODULE_INFO(srcversion, "99724035650F8E1CF79510D");
