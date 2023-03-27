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
	{ 0xaafbe958, "crypto_alloc_skcipher" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x8946ea72, "fpsimd_context_busy" },
	{ 0xdd062180, "cryptd_free_skcipher" },
	{ 0xc8ebca9f, "crypto_unregister_skciphers" },
	{ 0x900e0ee3, "cryptd_free_aead" },
	{ 0x11d48195, "cryptd_skcipher_queued" },
	{ 0xc0b2377b, "crypto_register_skciphers" },
	{ 0xded2b456, "crypto_unregister_skcipher" },
	{ 0xf7a40a0c, "cryptd_aead_queued" },
	{ 0x6d1b6f0b, "crypto_aead_encrypt" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x3521189c, "crypto_register_skcipher" },
	{ 0x3fade900, "crypto_aead_setkey" },
	{ 0xab1f9d64, "cryptd_alloc_skcipher" },
	{ 0x52544d6c, "crypto_skcipher_decrypt" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x622f73ad, "cpu_hwcaps" },
	{ 0xf1a264d7, "cryptd_skcipher_child" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0x912c0ff2, "crypto_unregister_aeads" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x5c788f1c, "crypto_skcipher_setkey" },
	{ 0xbcb8184a, "crypto_aead_decrypt" },
	{ 0xca4f1e22, "crypto_aead_setauthsize" },
	{ 0x81094cb6, "crypto_alloc_aead" },
	{ 0xb20a8279, "crypto_register_aeads" },
	{ 0x37a0cba, "kfree" },
	{ 0x9c8986fd, "crypto_unregister_aead" },
	{ 0x69c8b5be, "crypto_register_aead" },
	{ 0xd527184d, "cryptd_aead_child" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeafe1a3c, "cryptd_alloc_aead" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb4e826c3, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "cryptd");


MODULE_INFO(srcversion, "97509D0C432E67D3007BE03");
