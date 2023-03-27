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
	{ 0xe24abb5, "regulator_disable" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0x67ff8ab2, "regcache_cache_bypass" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a6bb99, "snd_soc_dapm_new_controls" },
	{ 0xfeb785f3, "snd_soc_put_volsw" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0xe97c26c4, "snd_soc_get_volsw" },
	{ 0xd50f1f4, "snd_pcm_hw_constraint_mask64" },
	{ 0x293ea448, "snd_pcm_hw_constraint_list" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9214249a, "snd_soc_info_volsw" },
	{ 0x433630a9, "devm_regulator_get" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3bfaf863, "devm_snd_soc_register_component" },
	{ 0x43168e2f, "devm_regulator_get_optional" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xa198012e, "regcache_mark_dirty" },
	{ 0xe556a9c5, "snd_pcm_hw_constraint_minmax" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x7958798, "regcache_sync" },
	{ 0x389fd0bd, "regcache_cache_only" },
	{ 0xde3fe2c3, "regulator_enable" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "6651F435ED5D5A3004DCEBB");
