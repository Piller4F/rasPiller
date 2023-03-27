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
	{ 0xbd014649, "crypto_unregister_template" },
	{ 0x3541deff, "crypto_register_template" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x117cafd9, "skcipher_walk_done" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xffa24b9, "skcipher_walk_virt" },
	{ 0x6a0d2097, "skcipher_register_instance" },
	{ 0xff03c80f, "skcipher_alloc_instance_simple" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5B2E28D99632FBED68477EC");
