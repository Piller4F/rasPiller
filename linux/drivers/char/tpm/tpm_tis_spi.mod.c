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
	{ 0xf1128625, "of_device_get_match_data" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0x6eac67ef, "spi_sync_locked" },
	{ 0x1858edcd, "tpm_tis_core_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x20105980, "driver_unregister" },
	{ 0xba28843e, "tpm_tis_remove" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1471b1c1, "tpm_chip_unregister" },
	{ 0x5f06dc8d, "spi_bus_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc8cbd20d, "spi_get_device_id" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x3ba48b4f, "spi_bus_unlock" },
};

MODULE_INFO(depends, "tpm_tis_core,tpm");

MODULE_ALIAS("acpi*:SMO0768:*");
MODULE_ALIAS("spi:st33htpm-spi");
MODULE_ALIAS("spi:slb9670");
MODULE_ALIAS("spi:tpm_tis_spi");
MODULE_ALIAS("spi:tpm_tis-spi");
MODULE_ALIAS("spi:cr50");
MODULE_ALIAS("of:N*T*Cst,st33htpm-spi");
MODULE_ALIAS("of:N*T*Cst,st33htpm-spiC*");
MODULE_ALIAS("of:N*T*Cinfineon,slb9670");
MODULE_ALIAS("of:N*T*Cinfineon,slb9670C*");
MODULE_ALIAS("of:N*T*Ctcg,tpm_tis-spi");
MODULE_ALIAS("of:N*T*Ctcg,tpm_tis-spiC*");
MODULE_ALIAS("of:N*T*Cgoogle,cr50");
MODULE_ALIAS("of:N*T*Cgoogle,cr50C*");

MODULE_INFO(srcversion, "2D2B255550F1B20EF65A78B");
