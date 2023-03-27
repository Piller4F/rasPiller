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
	{ 0x7ae4a27f, "pwm_request" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x8c1398da, "devm_kfree" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0xdcb764ad, "memset" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xca2da281, "gpiod_direction_output" },
	{ 0xff5ab1d1, "regulator_is_enabled" },
	{ 0xfd457b8, "gpiod_get_value_cansleep" },
	{ 0x825e7cc5, "backlight_device_register" },
	{ 0x5e285db8, "devm_pwm_get" },
	{ 0x433630a9, "devm_regulator_get" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xde3fe2c3, "regulator_enable" },
	{ 0xb89e3806, "pwm_free" },
	{ 0x24f393f0, "backlight_device_unregister" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe24abb5, "regulator_disable" },
	{ 0x3a472801, "pwm_apply_state" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
};

MODULE_INFO(depends, "backlight");

MODULE_ALIAS("of:N*T*Cpwm-backlight");
MODULE_ALIAS("of:N*T*Cpwm-backlightC*");

MODULE_INFO(srcversion, "ABED95AB3ACFE0E5B05BF94");
