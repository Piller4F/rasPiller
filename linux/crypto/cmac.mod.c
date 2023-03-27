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
	{ 0x5c2d0387, "crypto_cipher_setkey" },
	{ 0xd3f1b949, "crypto_cipher_encrypt_one" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2041685, "shash_register_instance" },
	{ 0x4b18fc33, "crypto_inst_setname" },
	{ 0xae340e7a, "shash_free_singlespawn_instance" },
	{ 0xa517348d, "crypto_grab_spawn" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x18479cfb, "crypto_spawn_tfm" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0xdcb764ad, "memset" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7A34247E7C7DD07D5FBEDC3");
