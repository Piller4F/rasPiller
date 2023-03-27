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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd88cb85b, "__of_get_address" },
	{ 0x7faaff71, "devm_ioremap_resource" },
	{ 0xec69aeba, "dma_request_chan" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x5ff38fa7, "platform_get_resource" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x44239691, "_dev_info" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb7219ef8, "dma_map_page_attrs" },
	{ 0xa44c2eb0, "dev_driver_string" },
	{ 0x86cd1836, "devm_clk_get" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc95fd56d, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd727591, "dma_wait_for_async_tx" },
	{ 0xcf2a6966, "up" },
	{ 0xc82329ad, "dma_unmap_page_attrs" },
	{ 0x20bb3feb, "dmam_alloc_attrs" },
	{ 0x2fe527a9, "of_find_device_by_node" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smi");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smiC*");

MODULE_INFO(srcversion, "583BFBAE83BD4B932506A4E");
