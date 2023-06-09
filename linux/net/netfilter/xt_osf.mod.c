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
	{ 0x92997ed8, "_printk" },
	{ 0x91ddba6c, "xt_register_match" },
	{ 0xa67e9ec5, "nf_osf_match" },
	{ 0x35eff5e0, "nf_osf_fingers" },
};

MODULE_INFO(depends, "x_tables,nfnetlink_osf");


MODULE_INFO(srcversion, "2422F8C4AFEA7A587C7512F");
