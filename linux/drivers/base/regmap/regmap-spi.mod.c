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
	{ 0xedc84a05, "__devm_regmap_init" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x3bcf5676, "regmap_async_complete_cb" },
	{ 0xdcb764ad, "memset" },
	{ 0x3fd5981f, "spi_async" },
	{ 0xe126db3, "__regmap_init" },
	{ 0x2715240, "spi_sync" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x36043ee3, "spi_write_then_read" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2964FBCD15473D3E7A2D5FA");
