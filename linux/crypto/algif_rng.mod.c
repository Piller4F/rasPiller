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
	{ 0xc492e2d, "sock_no_sendpage" },
	{ 0xbbca8fba, "sock_no_mmap" },
	{ 0x9abebc81, "sock_no_sendmsg" },
	{ 0x4102e5f3, "sock_no_shutdown" },
	{ 0x5d0a64b1, "sock_no_listen" },
	{ 0xb96301bf, "sock_no_ioctl" },
	{ 0x8d939648, "sock_no_getname" },
	{ 0x448ea7c9, "sock_no_accept" },
	{ 0xbc6526e3, "sock_no_socketpair" },
	{ 0xbd7f1345, "sock_no_connect" },
	{ 0x9e65d54f, "sock_no_bind" },
	{ 0xca94d2da, "af_alg_release" },
	{ 0xfc0f18e7, "af_alg_unregister_type" },
	{ 0xf78bcfe3, "af_alg_register_type" },
	{ 0x37a0cba, "kfree" },
	{ 0xf400d4b2, "crypto_alloc_rng" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x43ad8cd7, "_copy_to_iter" },
	{ 0xdcb764ad, "memset" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0x3be37afc, "crypto_rng_reset" },
	{ 0x73f7b769, "af_alg_release_parent" },
	{ 0x2ee1c075, "sock_kfree_s" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x644c4a57, "sock_kmalloc" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "C2EE585A86B2D95CD64DC74");
