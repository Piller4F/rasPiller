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
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0xfeb785f3, "snd_soc_put_volsw" },
	{ 0xe97c26c4, "snd_soc_get_volsw" },
	{ 0x6bf72fbe, "snd_soc_put_volsw_range" },
	{ 0x16bc1b0f, "snd_soc_info_volsw_range" },
	{ 0xfd2a211f, "snd_soc_get_volsw_range" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9214249a, "snd_soc_info_volsw" },
	{ 0x3bfaf863, "devm_snd_soc_register_component" },
	{ 0xca4cf59e, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "4C404A614AEDA841005A0DD");
