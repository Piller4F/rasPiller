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
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x97df9f42, "gpiochip_get_data" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xe5c61ec4, "devm_gpiochip_add_data_with_key" },
	{ 0xfe3469a, "devm_backlight_device_register" },
	{ 0x388db8ce, "devm_regulator_register" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf8587c7e, "rdev_get_drvdata" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "backlight,regmap-i2c");

MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panel-regulator");
MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panel-regulatorC*");

MODULE_INFO(srcversion, "7300B6D640E811DF173624B");
