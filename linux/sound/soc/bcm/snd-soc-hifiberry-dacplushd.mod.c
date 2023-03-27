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
	{ 0xf9a482f9, "msleep" },
	{ 0xc2662a37, "devm_snd_soc_register_card" },
	{ 0x693a304d, "of_parse_phandle" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x293ea448, "snd_pcm_hw_constraint_list" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xf3ab8ce8, "snd_soc_dai_set_bclk_ratio" },
	{ 0x86cd1836, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0xb127e82, "gpiod_set_value" },
	{ 0x82395752, "gpiod_put" },
	{ 0xee5b0c9b, "gpiod_get" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplushd");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplushdC*");

MODULE_INFO(srcversion, "910CE419916AF12DA68D93D");
