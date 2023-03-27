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
	{ 0xb0d904b7, "raid6_empty_zero_page" },
	{ 0x8a6dfff8, "dmaengine_unmap_put" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0x2b30f429, "raid6_call" },
	{ 0xa39055e1, "async_tx_submit" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xebeddb2e, "dmaengine_get_unmap_data" },
	{ 0xa43b0aa6, "__async_tx_find_channel" },
	{ 0xc399def0, "async_xor_offs" },
	{ 0xd4010db0, "__free_pages" },
	{ 0x9fd9307a, "async_tx_quiesce" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xb7219ef8, "dma_map_page_attrs" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x17f54263, "raid6_gfexp" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "raid6_pq,async_tx,async_xor");


MODULE_INFO(srcversion, "6135C3A1A03DA6A7CCBE102");
