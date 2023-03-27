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
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x8946ea72, "fpsimd_context_busy" },
	{ 0xc8ebca9f, "crypto_unregister_skciphers" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0x117cafd9, "skcipher_walk_done" },
	{ 0xc0b2377b, "crypto_register_skciphers" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xffa24b9, "skcipher_walk_virt" },
	{ 0xaaa4b9bc, "hchacha_block_generic" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x622f73ad, "cpu_hwcaps" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0xcec122d7, "chacha_crypt_generic" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "libchacha");


MODULE_INFO(srcversion, "F8ED46A6BE9C3BA9E79C0CE");
