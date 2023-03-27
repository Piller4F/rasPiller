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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x38d3dce5, "g_make_token_header" },
	{ 0xc5f63155, "write_bytes_to_xdr_buf" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf54bd49b, "lcm" },
	{ 0xd3f46c9f, "gss_mech_register" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x18ffbdee, "crypto_ahash_final" },
	{ 0xe4493f55, "crypto_alloc_sync_skcipher" },
	{ 0xd7673035, "g_verify_token_header" },
	{ 0x792f9d03, "xdr_buf_subsegment" },
	{ 0xdcb764ad, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x52544d6c, "crypto_skcipher_decrypt" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x856b3b69, "gss_mech_unregister" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x5c788f1c, "crypto_skcipher_setkey" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5a66c4b3, "crypto_ahash_setkey" },
	{ 0x3e9fdffa, "read_bytes_from_xdr_buf" },
	{ 0x4aa9625, "xdr_process_buf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x482ac5a4, "g_token_size" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x68a889ca, "xdr_buf_trim" },
	{ 0xa8404b06, "crypto_alloc_ahash" },
	{ 0xb4e826c3, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "35655CE2551B09A2E12EDBE");
