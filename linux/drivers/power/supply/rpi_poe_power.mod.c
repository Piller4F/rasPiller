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
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x86baf6a0, "power_supply_get_drvdata" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0xed549a5f, "rpi_firmware_get" },
	{ 0x693a304d, "of_parse_phandle" },
	{ 0x6b8dbdb2, "devm_power_supply_register" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0xe2acb59b, "dev_get_regmap" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x5ba1eadb, "of_device_is_available" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,rpi-poe-power-supply");
MODULE_ALIAS("of:N*T*Craspberrypi,rpi-poe-power-supplyC*");

MODULE_INFO(srcversion, "133BC102285E19477B75ADB");
