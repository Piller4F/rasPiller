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
	{ 0xf9a482f9, "msleep" },
	{ 0xe20e5fbd, "clk_hw_register_clkdev" },
	{ 0xb41f770a, "snd_soc_dapm_get_enum_double" },
	{ 0xc09992a7, "snd_soc_dapm_get_volsw" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0xe24abb5, "regulator_disable" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0x3a109e75, "gpio_to_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0xb7ae0cba, "snd_soc_component_update_bits" },
	{ 0xfeb785f3, "snd_soc_put_volsw" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0xe97c26c4, "snd_soc_get_volsw" },
	{ 0x8c3a062a, "of_clk_get_parent_name" },
	{ 0x8166570, "snd_soc_info_enum_double" },
	{ 0x51b872e6, "devm_clk_register" },
	{ 0x2a22511d, "snd_soc_add_component_controls" },
	{ 0xe2acb59b, "dev_get_regmap" },
	{ 0x8fb6ab01, "snd_soc_dapm_put_volsw" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x6d333db7, "snd_ctl_boolean_mono_info" },
	{ 0xb48e5cec, "devm_gpio_request_one" },
	{ 0x9214249a, "snd_soc_info_volsw" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x3d8ee7cc, "snd_soc_get_enum_double" },
	{ 0x433630a9, "devm_regulator_get" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0xace95a6e, "devm_clk_bulk_get" },
	{ 0x92997ed8, "_printk" },
	{ 0x3bfaf863, "devm_snd_soc_register_component" },
	{ 0x95fc5f46, "of_get_named_gpio_flags" },
	{ 0x67ce7ef7, "snd_soc_component_write" },
	{ 0x43168e2f, "devm_regulator_get_optional" },
	{ 0x86cd1836, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xab53e96d, "snd_soc_put_enum_double" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0x2313ab84, "gpiod_set_raw_value_cansleep" },
	{ 0x7d8e8ea3, "snd_soc_component_read" },
	{ 0x66c2c10f, "of_property_match_string" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xf89a697a, "regmap_write" },
	{ 0xde3fe2c3, "regulator_enable" },
	{ 0x54fc2a9b, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core,snd,snd-pcm");


MODULE_INFO(srcversion, "1C7AAE038CC3F961C37FCE1");
