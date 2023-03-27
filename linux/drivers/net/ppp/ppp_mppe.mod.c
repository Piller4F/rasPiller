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
	{ 0x43a74233, "ppp_unregister_compressor" },
	{ 0x8c3a8d9c, "ppp_register_compressor" },
	{ 0xdcb764ad, "memset" },
	{ 0x34407691, "crypto_has_ahash" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0x6135b795, "crypto_shash_final" },
	{ 0x158b2e1d, "crypto_shash_update" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x24d18093, "crypto_alloc_shash" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x92997ed8, "_printk" },
};

MODULE_INFO(depends, "ppp_generic,libarc4");


MODULE_INFO(srcversion, "0843E154B7E41F10B0035F8");
