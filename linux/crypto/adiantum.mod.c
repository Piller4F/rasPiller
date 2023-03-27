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
	{ 0x6a0d2097, "skcipher_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92997ed8, "_printk" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8ee08dff, "crypto_grab_shash" },
	{ 0xa517348d, "crypto_grab_spawn" },
	{ 0xda2e579, "crypto_grab_skcipher" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x1250cebc, "crypto_shash_setkey" },
	{ 0xd45b9cf4, "poly1305_core_setkey" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x5c2d0387, "crypto_cipher_setkey" },
	{ 0x253260b9, "crypto_req_done" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5c788f1c, "crypto_skcipher_setkey" },
	{ 0x37a0cba, "kfree" },
	{ 0x43897f35, "crypto_drop_spawn" },
	{ 0xd3f1b949, "crypto_cipher_encrypt_one" },
	{ 0xb4e826c3, "crypto_skcipher_encrypt" },
	{ 0xbcb90cb3, "poly1305_core_emit" },
	{ 0x21f3700, "poly1305_core_blocks" },
	{ 0xc3d47c82, "crypto_cipher_decrypt_one" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6135b795, "crypto_shash_final" },
	{ 0x1c335893, "sg_miter_stop" },
	{ 0x158b2e1d, "crypto_shash_update" },
	{ 0xb5a96b43, "sg_miter_next" },
	{ 0x76c08af4, "sg_miter_start" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x18479cfb, "crypto_spawn_tfm" },
	{ 0x76d6fe38, "crypto_spawn_tfm2" },
	{ 0x1caff506, "crypto_destroy_tfm" },
};

MODULE_INFO(depends, "libpoly1305");


MODULE_INFO(srcversion, "E2DD3E9C82110E8C4F75C22");
