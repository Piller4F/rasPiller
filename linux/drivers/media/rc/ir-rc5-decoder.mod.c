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
	{ 0x807449b7, "ir_raw_handler_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xa22bf4f3, "ir_raw_handler_register" },
	{ 0x21d39b2b, "rc_keydown" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7cf52901, "ir_raw_gen_manchester" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "26DF4AB3E9EC7B818452D1A");
