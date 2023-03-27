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
	{ 0xfd457b8, "gpiod_get_value_cansleep" },
	{ 0x12e0322e, "devm_gpiod_get_index" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x5ef81b1a, "devm_spi_register_controller" },
	{ 0xadabf590, "spi_bitbang_init" },
	{ 0xc8c135c4, "spi_bitbang_setup_transfer" },
	{ 0xd1d63978, "devm_gpiod_get" },
	{ 0xa387f57e, "device_property_present" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0x2216a252, "__devm_spi_alloc_controller" },
	{ 0x61c30c25, "spi_bitbang_setup" },
	{ 0xcf7ecced, "spi_bitbang_cleanup" },
	{ 0xca2da281, "gpiod_direction_output" },
	{ 0xf28855b, "gpiod_direction_input" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
};

MODULE_INFO(depends, "spi-bitbang");

MODULE_ALIAS("of:N*T*Cspi-gpio");
MODULE_ALIAS("of:N*T*Cspi-gpioC*");

MODULE_INFO(srcversion, "D4E6B50CE6EF60D7DF88B1A");
