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
	{ 0x27339f09, "param_ops_int" },
	{ 0xa0d9db34, "tcp_unregister_congestion_control" },
	{ 0x78d97b23, "tcp_register_congestion_control" },
	{ 0xff7d6002, "tcp_slow_start" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x3b0917b1, "tcp_reno_undo_cwnd" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdcb764ad, "memset" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BC44096EBCDFCCC747066F0");
