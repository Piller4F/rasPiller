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
	{ 0x13445e92, "param_ops_bool" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x8fc316b5, "xt_unregister_template" },
	{ 0x1acdbe8e, "xt_hook_ops_alloc" },
	{ 0xd653684b, "xt_register_template" },
	{ 0x37a0cba, "kfree" },
	{ 0x7b48a4, "ip6t_register_table" },
	{ 0x3b1edf7f, "ip6t_alloc_initial_table" },
	{ 0xa612ad9c, "ip6t_do_table" },
	{ 0xa758acb2, "ip6t_unregister_table_pre_exit" },
	{ 0x529311c, "ip6t_unregister_table_exit" },
};

MODULE_INFO(depends, "x_tables,ip6_tables");


MODULE_INFO(srcversion, "FB63BFE4DD67DCBE811BE0F");
