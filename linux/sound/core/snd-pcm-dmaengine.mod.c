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
	{ 0x6f3cc412, "snd_pcm_period_elapsed" },
	{ 0xf928b4f9, "snd_pcm_hw_constraint_integer" },
	{ 0x96654ff3, "dma_get_slave_caps" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x89e5d2f6, "__dma_request_channel" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xc95fd56d, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "snd-pcm");


MODULE_INFO(srcversion, "631DC9D0593A0EEB33B337A");
