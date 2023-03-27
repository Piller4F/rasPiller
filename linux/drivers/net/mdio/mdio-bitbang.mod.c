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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe84b5437, "mdiobus_free" },
	{ 0x1acd7981, "module_put" },
	{ 0xd0148e6c, "__module_get" },
	{ 0xb07747ea, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C5BC181B4CCA47DD3A2980B");
