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
	{ 0x559208a6, "nanddev_mtd_max_bad_blocks" },
	{ 0x59ca2ed1, "nand_ecc_finish_io_req" },
	{ 0xcd15b80b, "mtd_ooblayout_get_databytes" },
	{ 0xe2b60236, "spi_mem_supports_op" },
	{ 0x767ae028, "spi_mem_adjust_op_size" },
	{ 0x6a81eb8d, "nanddev_isreserved" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7d5f2415, "devm_spi_mem_dirmap_create" },
	{ 0x9a5bb18c, "nanddev_isbad" },
	{ 0x918f7351, "mtd_ooblayout_set_databytes" },
	{ 0x585afa7, "nanddev_ecc_engine_init" },
	{ 0x1fab608, "nanddev_markbad" },
	{ 0xdcb764ad, "memset" },
	{ 0x5e0cb0c9, "mtd_ooblayout_count_freebytes" },
	{ 0x6ee29e17, "spi_mem_driver_unregister" },
	{ 0xd26547a7, "spi_mem_dirmap_write" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xdcccca3e, "of_property_read_string" },
	{ 0x3ac5059b, "nanddev_mtd_erase" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x44239691, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x40dbe952, "nanddev_ecc_engine_cleanup" },
	{ 0x80f24ab1, "nand_ecc_prepare_io_req" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x8eb61361, "mtd_device_parse_register" },
	{ 0x525946d1, "nanddev_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbef9b5d0, "spi_mem_poll_status" },
	{ 0x170d418e, "nanddev_cleanup" },
	{ 0xcb7a951e, "spi_mem_exec_op" },
	{ 0xd61910ed, "mtd_device_unregister" },
	{ 0x99b170e5, "spi_mem_dirmap_read" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x848494ec, "spi_mem_driver_register_with_owner" },
};

MODULE_INFO(depends, "nandcore,mtd");

MODULE_ALIAS("spi:spi-nand");
MODULE_ALIAS("of:N*T*Cspi-nand");
MODULE_ALIAS("of:N*T*Cspi-nandC*");

MODULE_INFO(srcversion, "900A00241CFE1C5D0F2F092");
