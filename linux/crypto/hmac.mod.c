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
	{ 0x6135b795, "crypto_shash_final" },
	{ 0x76d6fe38, "crypto_spawn_tfm2" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x71b85de, "crypto_shash_digest" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2041685, "shash_register_instance" },
	{ 0x4b18fc33, "crypto_inst_setname" },
	{ 0xae340e7a, "shash_free_singlespawn_instance" },
	{ 0x747b5663, "crypto_shash_alg_has_setkey" },
	{ 0x8ee08dff, "crypto_grab_shash" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0xb0355248, "crypto_shash_finup" },
	{ 0x158b2e1d, "crypto_shash_update" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6D4B24BF5EA09B4FDC6548C");
