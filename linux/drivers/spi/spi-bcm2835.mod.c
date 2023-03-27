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
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x4829a47e, "memcpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x43b2b5d2, "spi_finalize_current_transfer" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb0bbcb9a, "dev_err_probe" },
	{ 0xc26da441, "debugfs_create_u64" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x196ff623, "spi_register_controller" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xec69aeba, "dma_request_chan" },
	{ 0xd88cb85b, "__of_get_address" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x7606362, "platform_get_irq" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x86cd1836, "devm_clk_get" },
	{ 0xa4a7097c, "devm_platform_ioremap_resource" },
	{ 0x2216a252, "__devm_spi_alloc_controller" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6e5fd52a, "spi_unregister_controller" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0xc95fd56d, "dma_release_channel" },
	{ 0x44239691, "_dev_info" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa44c2eb0, "dev_driver_string" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xb7219ef8, "dma_map_page_attrs" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xdcec3ce9, "gpiochip_request_own_desc" },
	{ 0x6e76d643, "gpiochip_find" },
	{ 0x4f336844, "dma_sync_single_for_device" },
	{ 0xc82329ad, "dma_unmap_page_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x96654ff3, "dma_get_slave_caps" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x342b0b10, "spi_split_transfers_maxsize" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-spi");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-spiC*");

MODULE_INFO(srcversion, "76B9E825743BD9406356BAA");
