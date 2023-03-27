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
	{ 0x42efcbb2, "mmc_gpio_get_cd" },
	{ 0x49802993, "mmc_gpio_get_ro" },
	{ 0x20105980, "driver_unregister" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0x5c7b3860, "mmc_request_done" },
	{ 0x3ba48b4f, "spi_bus_unlock" },
	{ 0x87b8798d, "sg_next" },
	{ 0x16c2ed71, "flush_dcache_page" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x5f06dc8d, "spi_bus_lock" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x44239691, "_dev_info" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa44c2eb0, "dev_driver_string" },
	{ 0x8aa5aaf, "mmc_gpiod_request_cd_irq" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xd2d74cb0, "mmc_gpiod_request_ro" },
	{ 0x1e89438d, "mmc_gpiod_request_cd" },
	{ 0xc9e800fb, "mmc_add_host" },
	{ 0xb7219ef8, "dma_map_page_attrs" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xb2d2bd1a, "mmc_spi_get_pdata" },
	{ 0xa1296228, "mmc_alloc_host" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xc4493a09, "mmc_free_host" },
	{ 0xaf6c19a6, "mmc_spi_put_pdata" },
	{ 0x37a0cba, "kfree" },
	{ 0xc82329ad, "dma_unmap_page_attrs" },
	{ 0x11f9c12a, "mmc_remove_host" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x73b71578, "spi_setup" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba55d23e, "crc7_be" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2715240, "spi_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x2e80a424, "dma_sync_single_for_cpu" },
	{ 0x6eac67ef, "spi_sync_locked" },
	{ 0x4f336844, "dma_sync_single_for_device" },
	{ 0xf017493c, "mmc_detect_change" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
};

MODULE_INFO(depends, "of_mmc_spi,crc7");

MODULE_ALIAS("of:N*T*Cmmc-spi-slot");
MODULE_ALIAS("of:N*T*Cmmc-spi-slotC*");
MODULE_ALIAS("spi:mmc-spi-slot");

MODULE_INFO(srcversion, "8742B0F94C1DA713466644A");
