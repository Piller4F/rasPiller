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
	{ 0x693a304d, "of_parse_phandle" },
	{ 0xb7ae0cba, "snd_soc_component_update_bits" },
	{ 0xac437f7b, "snd_interval_ratnum" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0xd0f9583a, "snd_soc_unregister_card" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8c1398da, "devm_kfree" },
	{ 0x4fc5fb1, "snd_soc_get_pcm_runtime" },
	{ 0xf3ab8ce8, "snd_soc_dai_set_bclk_ratio" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0x7d8e8ea3, "snd_soc_component_read" },
	{ 0x47a230ac, "snd_soc_limit_volume" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x30f8c3c, "snd_soc_register_card" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Callo,boss-dac");
MODULE_ALIAS("of:N*T*Callo,boss-dacC*");

MODULE_INFO(srcversion, "D4CB144547C45831F02453B");
