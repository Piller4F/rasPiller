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
	{ 0xc03b1145, "lib80211_unregister_crypto_ops" },
	{ 0xdce63e97, "lib80211_register_crypto_ops" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xbcb8184a, "crypto_aead_decrypt" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x6d1b6f0b, "crypto_aead_encrypt" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x81094cb6, "crypto_alloc_aead" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0x3fade900, "crypto_aead_setkey" },
	{ 0xca4f1e22, "crypto_aead_setauthsize" },
	{ 0xdcb764ad, "memset" },
	{ 0x393cac96, "seq_printf" },
};

MODULE_INFO(depends, "lib80211");


MODULE_INFO(srcversion, "843C3708FAD475ADEDDCAA4");
