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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc2662a37, "devm_snd_soc_register_card" },
	{ 0x693a304d, "of_parse_phandle" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xf3ab8ce8, "snd_soc_dai_set_bclk_ratio" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0x13868293, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Cchipdip,chipdip-dac");
MODULE_ALIAS("of:N*T*Cchipdip,chipdip-dacC*");

MODULE_INFO(srcversion, "28B08C24D92605B681099AE");
