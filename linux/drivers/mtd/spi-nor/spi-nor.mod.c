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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2b60236, "spi_mem_supports_op" },
	{ 0x767ae028, "spi_mem_adjust_op_size" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4be47a2, "spi_mem_get_name" },
	{ 0x7d5f2415, "devm_spi_mem_dirmap_create" },
	{ 0x6da467cb, "pfn_is_map_memory" },
	{ 0x37ebf39e, "devm_kasprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x6ee29e17, "spi_mem_driver_unregister" },
	{ 0xd26547a7, "spi_mem_dirmap_write" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0xdcccca3e, "of_property_read_string" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0xb7c0f443, "sort" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8c1398da, "devm_kfree" },
	{ 0x1acd7981, "module_put" },
	{ 0x44239691, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x8eb61361, "mtd_device_parse_register" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcb7a951e, "spi_mem_exec_op" },
	{ 0xd61910ed, "mtd_device_unregister" },
	{ 0x99b170e5, "spi_mem_dirmap_read" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x68173019, "try_module_get" },
	{ 0x848494ec, "spi_mem_driver_register_with_owner" },
};

MODULE_INFO(depends, "mtd");

MODULE_ALIAS("spi:spi-nor");
MODULE_ALIAS("spi:s25sl064a");
MODULE_ALIAS("spi:w25x16");
MODULE_ALIAS("spi:m25p10");
MODULE_ALIAS("spi:m25px64");
MODULE_ALIAS("spi:at25df321a");
MODULE_ALIAS("spi:at25df641");
MODULE_ALIAS("spi:at26df081a");
MODULE_ALIAS("spi:mx25l4005a");
MODULE_ALIAS("spi:mx25l1606e");
MODULE_ALIAS("spi:mx25l6405d");
MODULE_ALIAS("spi:mx25l12805d");
MODULE_ALIAS("spi:mx25l25635e");
MODULE_ALIAS("spi:mx66l51235l");
MODULE_ALIAS("spi:n25q064");
MODULE_ALIAS("spi:n25q128a11");
MODULE_ALIAS("spi:n25q128a13");
MODULE_ALIAS("spi:n25q512a");
MODULE_ALIAS("spi:s25fl256s1");
MODULE_ALIAS("spi:s25fl512s");
MODULE_ALIAS("spi:s25sl12801");
MODULE_ALIAS("spi:s25fl008k");
MODULE_ALIAS("spi:s25fl064k");
MODULE_ALIAS("spi:sst25vf040b");
MODULE_ALIAS("spi:sst25vf016b");
MODULE_ALIAS("spi:sst25vf032b");
MODULE_ALIAS("spi:sst25wf040");
MODULE_ALIAS("spi:m25p40");
MODULE_ALIAS("spi:m25p80");
MODULE_ALIAS("spi:m25p16");
MODULE_ALIAS("spi:m25p32");
MODULE_ALIAS("spi:m25p64");
MODULE_ALIAS("spi:m25p128");
MODULE_ALIAS("spi:w25x80");
MODULE_ALIAS("spi:w25x32");
MODULE_ALIAS("spi:w25q32");
MODULE_ALIAS("spi:w25q32dw");
MODULE_ALIAS("spi:w25q80bl");
MODULE_ALIAS("spi:w25q128");
MODULE_ALIAS("spi:w25q256");
MODULE_ALIAS("spi:m25p05-nonjedec");
MODULE_ALIAS("spi:m25p10-nonjedec");
MODULE_ALIAS("spi:m25p20-nonjedec");
MODULE_ALIAS("spi:m25p40-nonjedec");
MODULE_ALIAS("spi:m25p80-nonjedec");
MODULE_ALIAS("spi:m25p16-nonjedec");
MODULE_ALIAS("spi:m25p32-nonjedec");
MODULE_ALIAS("spi:m25p64-nonjedec");
MODULE_ALIAS("spi:m25p128-nonjedec");
MODULE_ALIAS("spi:mr25h128");
MODULE_ALIAS("spi:mr25h256");
MODULE_ALIAS("spi:mr25h10");
MODULE_ALIAS("spi:mr25h40");
MODULE_ALIAS("of:N*T*Cjedec,spi-nor");
MODULE_ALIAS("of:N*T*Cjedec,spi-norC*");

MODULE_INFO(srcversion, "049AA3DF243C4A7E333F1BF");
