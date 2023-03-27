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
	{ 0xbbca8fba, "sock_no_mmap" },
	{ 0x4102e5f3, "sock_no_shutdown" },
	{ 0x5d0a64b1, "sock_no_listen" },
	{ 0xb96301bf, "sock_no_ioctl" },
	{ 0xa96a2249, "af_alg_poll" },
	{ 0x8d939648, "sock_no_getname" },
	{ 0x448ea7c9, "sock_no_accept" },
	{ 0xbc6526e3, "sock_no_socketpair" },
	{ 0xbd7f1345, "sock_no_connect" },
	{ 0x9e65d54f, "sock_no_bind" },
	{ 0xca94d2da, "af_alg_release" },
	{ 0xfc0f18e7, "af_alg_unregister_type" },
	{ 0xf78bcfe3, "af_alg_register_type" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x27600d4d, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x52544d6c, "crypto_skcipher_decrypt" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd2b34c06, "af_alg_wmem_wakeup" },
	{ 0x5da173e1, "af_alg_free_resources" },
	{ 0xb4e826c3, "crypto_skcipher_encrypt" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xeb2b6180, "af_alg_count_tsgl" },
	{ 0xa6c763d6, "af_alg_get_rsgl" },
	{ 0xe55f6646, "af_alg_alloc_areq" },
	{ 0xd1a338e, "af_alg_wait_for_data" },
	{ 0x253260b9, "crypto_req_done" },
	{ 0x6899bfa2, "af_alg_async_cb" },
	{ 0xaf66a317, "af_alg_sendpage" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe1f7f753, "release_sock" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0xaafbe958, "crypto_alloc_skcipher" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0x5c788f1c, "crypto_skcipher_setkey" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0x644c4a57, "sock_kmalloc" },
	{ 0x73f7b769, "af_alg_release_parent" },
	{ 0x2ee1c075, "sock_kfree_s" },
	{ 0xeac9f293, "sock_kzfree_s" },
	{ 0xc42e7e3d, "af_alg_pull_tsgl" },
	{ 0x9efab5c3, "af_alg_sendmsg" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "190A33BF4F1D68180B21D49");
