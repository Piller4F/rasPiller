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
	{ 0x2e7e3446, "ebt_unregister_template" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x7b2a54d8, "ebt_register_template" },
	{ 0x3194cb20, "ebt_do_table" },
	{ 0x5e150051, "ebt_register_table" },
	{ 0xdd845311, "ebt_unregister_table_pre_exit" },
	{ 0x1ed69352, "ebt_unregister_table" },
};

MODULE_INFO(depends, "ebtables");


MODULE_INFO(srcversion, "76EBD6AC0C8C206AF44516D");
