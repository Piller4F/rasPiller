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
	{ 0x591d2839, "default_llseek" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0x57815298, "proc_set_size" },
	{ 0xd2207e91, "proc_create" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BCCA857F7228316D1F618E6");
