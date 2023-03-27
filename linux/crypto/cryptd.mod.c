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
	{ 0xaafbe958, "crypto_alloc_skcipher" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xe22d30f2, "ahash_register_instance" },
	{ 0x7fa4abe1, "crypto_dequeue_request" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x9f651a6c, "shash_ahash_digest" },
	{ 0xda2e579, "crypto_grab_skcipher" },
	{ 0xbd014649, "crypto_unregister_template" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x6135b795, "crypto_shash_final" },
	{ 0x986cea16, "shash_ahash_finup" },
	{ 0x6a0d2097, "skcipher_register_instance" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x747b5663, "crypto_shash_alg_has_setkey" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8ee08dff, "crypto_grab_shash" },
	{ 0xdcb764ad, "memset" },
	{ 0x73c9ecd2, "crypto_grab_aead" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x3541deff, "crypto_register_template" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1250cebc, "crypto_shash_setkey" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x43897f35, "crypto_drop_spawn" },
	{ 0x3fade900, "crypto_aead_setkey" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x6df9de1a, "crypto_enqueue_request" },
	{ 0x52544d6c, "crypto_skcipher_decrypt" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x5c788f1c, "crypto_skcipher_setkey" },
	{ 0xca4f1e22, "crypto_aead_setauthsize" },
	{ 0x81094cb6, "crypto_alloc_aead" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x76d6fe38, "crypto_spawn_tfm2" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c75a57d, "shash_ahash_update" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x1f6b1b43, "aead_register_instance" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xa8404b06, "crypto_alloc_ahash" },
	{ 0xb4e826c3, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BC77B79DA871D0D3F8BA23D");
