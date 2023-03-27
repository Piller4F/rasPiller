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
	{ 0xb4e826c3, "crypto_skcipher_encrypt" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x52544d6c, "crypto_skcipher_decrypt" },
	{ 0x87b8798d, "sg_next" },
	{ 0xcb831539, "crypto_ahash_finup" },
	{ 0x6d1b6f0b, "crypto_aead_encrypt" },
	{ 0xbcb8184a, "crypto_aead_decrypt" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xda2e579, "crypto_grab_skcipher" },
	{ 0x5a921311, "strncmp" },
	{ 0x236e5f00, "crypto_grab_ahash" },
	{ 0x1f6b1b43, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x73c9ecd2, "crypto_grab_aead" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2041685, "shash_register_instance" },
	{ 0xae340e7a, "shash_free_singlespawn_instance" },
	{ 0x4b18fc33, "crypto_inst_setname" },
	{ 0xa517348d, "crypto_grab_spawn" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x18479cfb, "crypto_spawn_tfm" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xd3f1b949, "crypto_cipher_encrypt_one" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5c2d0387, "crypto_cipher_setkey" },
	{ 0x5a66c4b3, "crypto_ahash_setkey" },
	{ 0x5c788f1c, "crypto_skcipher_setkey" },
	{ 0xdcb764ad, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x43897f35, "crypto_drop_spawn" },
	{ 0x76d6fe38, "crypto_spawn_tfm2" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0x3fade900, "crypto_aead_setkey" },
	{ 0xca4f1e22, "crypto_aead_setauthsize" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "869B2F88148A6CFCBE87A38");
