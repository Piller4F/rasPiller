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
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0x8fc316b5, "xt_unregister_template" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0xd653684b, "xt_register_template" },
	{ 0xe1eaab99, "ipt_do_table" },
	{ 0x922be1be, "nf_nat_ipv4_register_fn" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2739d806, "xt_find_table" },
	{ 0x7110e8b8, "ipt_register_table" },
	{ 0x82dbb895, "ipt_alloc_initial_table" },
	{ 0x37a0cba, "kfree" },
	{ 0x4655ae2a, "nf_nat_ipv4_unregister_fn" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa0638e09, "ipt_unregister_table_exit" },
};

MODULE_INFO(depends, "x_tables,ip_tables,nf_nat");


MODULE_INFO(srcversion, "16D3EBB4106596D1C30D118");
