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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xda2e579, "crypto_grab_skcipher" },
	{ 0xbd014649, "crypto_unregister_template" },
	{ 0x9fafaf0f, "crypto_get_default_null_skcipher" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x1661441d, "crypto_ahash_digest" },
	{ 0x3541deff, "crypto_register_template" },
	{ 0x43897f35, "crypto_drop_spawn" },
	{ 0x52544d6c, "crypto_skcipher_decrypt" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x5c788f1c, "crypto_skcipher_setkey" },
	{ 0x76d6fe38, "crypto_spawn_tfm2" },
	{ 0x37a0cba, "kfree" },
	{ 0x5a66c4b3, "crypto_ahash_setkey" },
	{ 0x236e5f00, "crypto_grab_ahash" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1f6b1b43, "aead_register_instance" },
	{ 0xb4e826c3, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0D7592B4A36866AEE74547A");
