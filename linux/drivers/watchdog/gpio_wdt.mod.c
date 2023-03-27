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
	{ 0x13445e92, "param_ops_bool" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7cbda652, "devm_watchdog_register_device" },
	{ 0x9cecd02, "watchdog_init_timeout" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0xd1d63978, "devm_gpiod_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdcccca3e, "of_property_read_string" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xf28855b, "gpiod_direction_input" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xca2da281, "gpiod_direction_output" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Clinux,wdt-gpio");
MODULE_ALIAS("of:N*T*Clinux,wdt-gpioC*");

MODULE_INFO(srcversion, "01163A0D9430CA4A42546FF");
