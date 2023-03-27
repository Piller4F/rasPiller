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
	{ 0xf9a482f9, "msleep" },
	{ 0xa75efb1c, "gpiod_direction_output_raw" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xefb15704, "w1_add_master_device" },
	{ 0xca2da281, "gpiod_direction_output" },
	{ 0xec38999a, "devm_gpiod_get_index_optional" },
	{ 0x12e0322e, "devm_gpiod_get_index" },
	{ 0x63848f67, "of_get_property" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xcd646fab, "of_root" },
	{ 0xaf18e39b, "gpiod_get_value" },
	{ 0xd5958368, "w1_remove_master_device" },
	{ 0xb127e82, "gpiod_set_value" },
};

MODULE_INFO(depends, "wire");

MODULE_ALIAS("of:N*T*Cw1-gpio");
MODULE_ALIAS("of:N*T*Cw1-gpioC*");

MODULE_INFO(srcversion, "89D33780A3861BE22B688C6");
