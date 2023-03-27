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
	{ 0xb7ae0cba, "snd_soc_component_update_bits" },
	{ 0xfeb785f3, "snd_soc_put_volsw" },
	{ 0xe97c26c4, "snd_soc_get_volsw" },
	{ 0xb31af892, "devm_regulator_bulk_get" },
	{ 0xd8c68e76, "regulator_bulk_enable" },
	{ 0x8166570, "snd_soc_info_enum_double" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9214249a, "snd_soc_info_volsw" },
	{ 0x26f61a7e, "regulator_bulk_disable" },
	{ 0x3bfaf863, "devm_snd_soc_register_component" },
	{ 0x67ce7ef7, "snd_soc_component_write" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x7958798, "regcache_sync" },
	{ 0x389fd0bd, "regcache_cache_only" },
	{ 0x54fc2a9b, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "BD508A956A04F31CCFCCCD6");
