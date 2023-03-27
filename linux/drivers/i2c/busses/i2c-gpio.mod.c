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
	{ 0x92997ed8, "_printk" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x44239691, "_dev_info" },
	{ 0x18baf6dd, "desc_to_gpio" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x12e0322e, "devm_gpiod_get_index" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x498cdbb, "i2c_bit_add_numbered_bus" },
	{ 0x5792f848, "strlcpy" },
	{ 0x248cf697, "gpiod_cansleep" },
	{ 0xd1d63978, "devm_gpiod_get" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0xfd457b8, "gpiod_get_value_cansleep" },
	{ 0xeb8454c4, "i2c_del_adapter" },
};

MODULE_INFO(depends, "i2c-algo-bit");

MODULE_ALIAS("of:N*T*Ci2c-gpio");
MODULE_ALIAS("of:N*T*Ci2c-gpioC*");

MODULE_INFO(srcversion, "578A412EE16D4AEF4259045");
