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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0xc09992a7, "snd_soc_dapm_get_volsw" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4a6bb99, "snd_soc_dapm_new_controls" },
	{ 0xb7ae0cba, "snd_soc_component_update_bits" },
	{ 0xfeb785f3, "snd_soc_put_volsw" },
	{ 0xe97c26c4, "snd_soc_get_volsw" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8166570, "snd_soc_info_enum_double" },
	{ 0xab001ea3, "snd_soc_dapm_add_routes" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x2a22511d, "snd_soc_add_component_controls" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x8fb6ab01, "snd_soc_dapm_put_volsw" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x6d333db7, "snd_ctl_boolean_mono_info" },
	{ 0x9214249a, "snd_soc_info_volsw" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x3d8ee7cc, "snd_soc_get_enum_double" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3bfaf863, "devm_snd_soc_register_component" },
	{ 0x67ce7ef7, "snd_soc_component_write" },
	{ 0x86cd1836, "devm_clk_get" },
	{ 0xab53e96d, "snd_soc_put_enum_double" },
	{ 0x7d8e8ea3, "snd_soc_component_read" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x7958798, "regcache_sync" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd,regmap-i2c");

MODULE_ALIAS("i2c:wm8960");
MODULE_ALIAS("of:N*T*Cwlf,wm8960");
MODULE_ALIAS("of:N*T*Cwlf,wm8960C*");

MODULE_INFO(srcversion, "EB4E69093384E76CF25ABA4");
