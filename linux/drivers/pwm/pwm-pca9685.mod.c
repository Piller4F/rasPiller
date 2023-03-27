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
	{ 0xcc018b98, "__pm_runtime_set_status" },
	{ 0x373fb346, "pm_runtime_enable" },
	{ 0xe5c61ec4, "devm_gpiochip_add_data_with_key" },
	{ 0x1960b33d, "pwmchip_add" },
	{ 0xa387f57e, "device_property_present" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xae0ce2ef, "__pm_runtime_idle" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0x2c761af5, "__pm_runtime_disable" },
	{ 0x5703c7a7, "pwmchip_remove" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0x97df9f42, "gpiochip_get_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf538c801, "regmap_update_bits_base" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cnxp,pca9685-pwm");
MODULE_ALIAS("of:N*T*Cnxp,pca9685-pwmC*");
MODULE_ALIAS("i2c:pca9685");

MODULE_INFO(srcversion, "96304A5EF2D207386E95212");
