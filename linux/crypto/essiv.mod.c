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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0x6d1b6f0b, "crypto_aead_encrypt" },
	{ 0xbcb8184a, "crypto_aead_decrypt" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x6a0d2097, "skcipher_register_instance" },
	{ 0x1f6b1b43, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x747b5663, "crypto_shash_alg_has_setkey" },
	{ 0x55f4c481, "crypto_mod_put" },
	{ 0xbf845945, "crypto_alg_mod_lookup" },
	{ 0x4829a47e, "memcpy" },
	{ 0x92997ed8, "_printk" },
	{ 0x349cba85, "strchr" },
	{ 0x9f984513, "strrchr" },
	{ 0x5a921311, "strncmp" },
	{ 0x73c9ecd2, "crypto_grab_aead" },
	{ 0xda2e579, "crypto_grab_skcipher" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xb4e826c3, "crypto_skcipher_encrypt" },
	{ 0x6a22f5fa, "crypto_shash_tfm_digest" },
	{ 0x5c788f1c, "crypto_skcipher_setkey" },
	{ 0x3fade900, "crypto_aead_setkey" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5c2d0387, "crypto_cipher_setkey" },
	{ 0xb0355248, "crypto_shash_finup" },
	{ 0x158b2e1d, "crypto_shash_update" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x43897f35, "crypto_drop_spawn" },
	{ 0x52544d6c, "crypto_skcipher_decrypt" },
	{ 0xd3f1b949, "crypto_cipher_encrypt_one" },
	{ 0xca4f1e22, "crypto_aead_setauthsize" },
	{ 0x24d18093, "crypto_alloc_shash" },
	{ 0x8228e911, "crypto_alloc_base" },
	{ 0x76d6fe38, "crypto_spawn_tfm2" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "authenc");


MODULE_INFO(srcversion, "6C391FBA9370E4FB4E9E09E");
