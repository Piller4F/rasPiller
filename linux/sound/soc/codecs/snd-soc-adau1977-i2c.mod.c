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
	{ 0xe720f019, "adau1977_probe" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x52d9ea32, "adau1977_regmap_config" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0x4829a47e, "memcpy" },
};

MODULE_INFO(depends, "snd-soc-adau1977,regmap-i2c");

MODULE_ALIAS("i2c:adau1977");
MODULE_ALIAS("i2c:adau1978");
MODULE_ALIAS("i2c:adau1979");

MODULE_INFO(srcversion, "58F5744BCB1826AE5689FD0");
