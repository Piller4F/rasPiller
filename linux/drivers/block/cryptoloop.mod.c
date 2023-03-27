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
	{ 0xbfee3ad5, "loop_unregister_transfer" },
	{ 0x7eed07bd, "loop_register_transfer" },
	{ 0x52544d6c, "crypto_skcipher_decrypt" },
	{ 0xdcb764ad, "memset" },
	{ 0xb4e826c3, "crypto_skcipher_encrypt" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5c788f1c, "crypto_skcipher_setkey" },
	{ 0xe4493f55, "crypto_alloc_sync_skcipher" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0x9166fada, "strncpy" },
	{ 0x92997ed8, "_printk" },
	{ 0x1caff506, "crypto_destroy_tfm" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "035AAAC9364ECC72715271D");
