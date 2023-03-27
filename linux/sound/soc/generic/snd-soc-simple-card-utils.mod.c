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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x1ad07240, "of_property_read_string_helper" },
	{ 0x815588a6, "clk_enable" },
	{ 0xdfea3162, "snd_soc_of_parse_card_name" },
	{ 0x909f0c75, "snd_soc_of_parse_audio_simple_widgets" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2ded673, "snd_soc_dapm_info_pin_switch" },
	{ 0x9c94479, "snd_soc_dapm_put_pin_switch" },
	{ 0x337316d9, "snd_soc_runtime_calc_hw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x37ebf39e, "devm_kasprintf" },
	{ 0x97c4cfc2, "snd_soc_daifmt_parse_format" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x5ea6944a, "devm_get_clk_from_child" },
	{ 0x3f7dcb73, "snd_soc_dapm_get_pin_switch" },
	{ 0x74c6fe2, "snd_soc_daifmt_parse_clock_provider_raw" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x95fc5f46, "of_get_named_gpio_flags" },
	{ 0x64591ba4, "snd_soc_dai_set_sysclk" },
	{ 0xc17d7f95, "devm_kvasprintf" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xf4595ee4, "snd_soc_of_parse_audio_routing" },
	{ 0x9b0a0e23, "snd_soc_card_jack_new" },
	{ 0xcb6a202, "snd_soc_component_set_sysclk" },
	{ 0xf9622dd1, "snd_soc_daifmt_clock_provider_from_bitmap" },
	{ 0x4c3ad2b1, "snd_soc_jack_add_gpios" },
	{ 0x9f47e414, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0xca4cf59e, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "25846B710073FD0E0CF1EAF");
