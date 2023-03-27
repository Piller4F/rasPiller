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
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4a6bb99, "snd_soc_dapm_new_controls" },
	{ 0xfeb785f3, "snd_soc_put_volsw" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0xe97c26c4, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb31af892, "devm_regulator_bulk_get" },
	{ 0xd8c68e76, "regulator_bulk_enable" },
	{ 0x8166570, "snd_soc_info_enum_double" },
	{ 0xab001ea3, "snd_soc_dapm_add_routes" },
	{ 0x2a22511d, "snd_soc_add_component_controls" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x26559349, "of_match_device" },
	{ 0x9214249a, "snd_soc_info_volsw" },
	{ 0x44239691, "_dev_info" },
	{ 0x3d8ee7cc, "snd_soc_get_enum_double" },
	{ 0x26f61a7e, "regulator_bulk_disable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3bfaf863, "devm_snd_soc_register_component" },
	{ 0x86cd1836, "devm_clk_get" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xa198012e, "regcache_mark_dirty" },
	{ 0xab53e96d, "snd_soc_put_enum_double" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x7958798, "regcache_sync" },
	{ 0x389fd0bd, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "C3E455727BF0C902FD85071");
