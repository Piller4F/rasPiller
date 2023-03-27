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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xae0ce2ef, "__pm_runtime_idle" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2c761af5, "__pm_runtime_disable" },
	{ 0xea124bd1, "gcd" },
	{ 0x10030bd3, "snd_pcm_hw_constraint_ratnums" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x503bd137, "snd_interval_ranges" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfeb785f3, "snd_soc_put_volsw" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0xe97c26c4, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb31af892, "devm_regulator_bulk_get" },
	{ 0xd8c68e76, "regulator_bulk_enable" },
	{ 0x8166570, "snd_soc_info_enum_double" },
	{ 0x293ea448, "snd_pcm_hw_constraint_list" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89d70320, "snd_ctl_boolean_stereo_info" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9214249a, "snd_soc_info_volsw" },
	{ 0x44239691, "_dev_info" },
	{ 0x55a6c9ca, "snd_pcm_hw_rule_add" },
	{ 0x3d8ee7cc, "snd_soc_get_enum_double" },
	{ 0x26f61a7e, "regulator_bulk_disable" },
	{ 0x373fb346, "pm_runtime_enable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4f4a7a26, "devm_regulator_register_notifier" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3bfaf863, "devm_snd_soc_register_component" },
	{ 0xcc018b98, "__pm_runtime_set_status" },
	{ 0x86cd1836, "devm_clk_get" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa198012e, "regcache_mark_dirty" },
	{ 0xab53e96d, "snd_soc_put_enum_double" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x7958798, "regcache_sync" },
	{ 0x389fd0bd, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd");


MODULE_INFO(srcversion, "DDA0171C34706E4A4EC21AB");
