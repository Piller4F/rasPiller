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
	{ 0xc3c1d958, "crypto_unregister_templates" },
	{ 0x14ff171, "crypto_register_templates" },
	{ 0xd3f1b949, "crypto_cipher_encrypt_one" },
	{ 0x117cafd9, "skcipher_walk_done" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xffa24b9, "skcipher_walk_virt" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xda2e579, "crypto_grab_skcipher" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x6a0d2097, "skcipher_register_instance" },
	{ 0xff03c80f, "skcipher_alloc_instance_simple" },
	{ 0x37a0cba, "kfree" },
	{ 0x43897f35, "crypto_drop_spawn" },
	{ 0x5c788f1c, "crypto_skcipher_setkey" },
	{ 0xb4e826c3, "crypto_skcipher_encrypt" },
	{ 0x76d6fe38, "crypto_spawn_tfm2" },
	{ 0x1caff506, "crypto_destroy_tfm" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "24B98D4E96BE16D932FA8FA");
