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
	{ 0x5cbcd8b7, "aic3x_remove" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0xa86ddf9e, "aic3x_probe" },
	{ 0xd744b662, "aic3x_regmap" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0x4829a47e, "memcpy" },
};

MODULE_INFO(depends, "snd-soc-tlv320aic3x,regmap-i2c");

MODULE_ALIAS("i2c:tlv320aic3x");
MODULE_ALIAS("i2c:tlv320aic33");
MODULE_ALIAS("i2c:tlv320aic3007");
MODULE_ALIAS("i2c:tlv320aic3104");
MODULE_ALIAS("i2c:tlv320aic3106");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3x");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3xC*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic33");
MODULE_ALIAS("of:N*T*Cti,tlv320aic33C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3007");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3007C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3104");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3104C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3106");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3106C*");

MODULE_INFO(srcversion, "CB1A3682FE8BA22F3174A33");
