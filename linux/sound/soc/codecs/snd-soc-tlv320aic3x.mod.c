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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xb41f770a, "snd_soc_dapm_get_enum_double" },
	{ 0x645456ff, "snd_soc_dapm_mixer_update_power" },
	{ 0xa401126b, "regmap_register_patch" },
	{ 0xc09992a7, "snd_soc_dapm_get_volsw" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x3a109e75, "gpio_to_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a6bb99, "snd_soc_dapm_new_controls" },
	{ 0xb7ae0cba, "snd_soc_component_update_bits" },
	{ 0xfeb785f3, "snd_soc_put_volsw" },
	{ 0xe97c26c4, "snd_soc_get_volsw" },
	{ 0xb31af892, "devm_regulator_bulk_get" },
	{ 0xd8c68e76, "regulator_bulk_enable" },
	{ 0x8166570, "snd_soc_info_enum_double" },
	{ 0xce17118b, "snd_soc_dapm_kcontrol_dapm" },
	{ 0xab001ea3, "snd_soc_dapm_add_routes" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x2a22511d, "snd_soc_add_component_controls" },
	{ 0x8fb6ab01, "snd_soc_dapm_put_volsw" },
	{ 0xa75efb1c, "gpiod_direction_output_raw" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9214249a, "snd_soc_info_volsw" },
	{ 0x3d8ee7cc, "snd_soc_get_enum_double" },
	{ 0x26f61a7e, "regulator_bulk_disable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x4f4a7a26, "devm_regulator_register_notifier" },
	{ 0x3bfaf863, "devm_snd_soc_register_component" },
	{ 0xd222e7aa, "regulator_get_voltage" },
	{ 0x95fc5f46, "of_get_named_gpio_flags" },
	{ 0x67ce7ef7, "snd_soc_component_write" },
	{ 0xfe990052, "gpio_free" },
	{ 0xa198012e, "regcache_mark_dirty" },
	{ 0xab53e96d, "snd_soc_put_enum_double" },
	{ 0x9ddce221, "gpiod_set_raw_value" },
	{ 0x6f37604, "snd_soc_component_test_bits" },
	{ 0x7d8e8ea3, "snd_soc_component_read" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x7958798, "regcache_sync" },
	{ 0x389fd0bd, "regcache_cache_only" },
	{ 0x54fc2a9b, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "D681EF95D22DB549DC79D35");
