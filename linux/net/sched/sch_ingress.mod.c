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
	{ 0x598d381a, "unregister_qdisc" },
	{ 0x706384c8, "register_qdisc" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0xe7f3439b, "mini_qdisc_pair_swap" },
	{ 0x52317659, "mini_qdisc_pair_block_init" },
	{ 0x938f77c, "tcf_block_get_ext" },
	{ 0x4806f956, "mini_qdisc_pair_init" },
	{ 0x7be6905, "net_inc_egress_queue" },
	{ 0x2c3054f9, "net_inc_ingress_queue" },
	{ 0x86f85114, "net_dec_egress_queue" },
	{ 0x46013233, "net_dec_ingress_queue" },
	{ 0x5130b1fb, "tcf_block_put_ext" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EBF77A2FC1E32262EB9808E");
