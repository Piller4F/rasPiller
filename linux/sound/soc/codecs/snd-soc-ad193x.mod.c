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
	{ 0x9a5ca6a7, "regmap_multi_reg_write" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0x4a6bb99, "snd_soc_dapm_new_controls" },
	{ 0xfeb785f3, "snd_soc_put_volsw" },
	{ 0xe97c26c4, "snd_soc_get_volsw" },
	{ 0x8166570, "snd_soc_info_enum_double" },
	{ 0xab001ea3, "snd_soc_dapm_add_routes" },
	{ 0x293ea448, "snd_pcm_hw_constraint_list" },
	{ 0x2a22511d, "snd_soc_add_component_controls" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9214249a, "snd_soc_info_volsw" },
	{ 0x3d8ee7cc, "snd_soc_get_enum_double" },
	{ 0x3bfaf863, "devm_snd_soc_register_component" },
	{ 0x62becdf4, "snd_soc_dapm_sync" },
	{ 0xab53e96d, "snd_soc_put_enum_double" },
	{ 0xca4cf59e, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "AA0ACBCC02C28B3FFFD17EA");
