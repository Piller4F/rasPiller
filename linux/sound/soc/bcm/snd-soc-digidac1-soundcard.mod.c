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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xc2662a37, "devm_snd_soc_register_card" },
	{ 0x693a304d, "of_parse_phandle" },
	{ 0x8da0fd7d, "snd_soc_dai_set_pll" },
	{ 0xb7ae0cba, "snd_soc_component_update_bits" },
	{ 0xfeb785f3, "snd_soc_put_volsw" },
	{ 0xe97c26c4, "snd_soc_get_volsw" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x8166570, "snd_soc_info_enum_double" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x2a22511d, "snd_soc_add_component_controls" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9214249a, "snd_soc_info_volsw" },
	{ 0x4fc5fb1, "snd_soc_get_pcm_runtime" },
	{ 0xf3ab8ce8, "snd_soc_dai_set_bclk_ratio" },
	{ 0x3d8ee7cc, "snd_soc_get_enum_double" },
	{ 0xfca28544, "snd_soc_dai_set_clkdiv" },
	{ 0x96d0a463, "snd_ctl_remove" },
	{ 0x64591ba4, "snd_soc_dai_set_sysclk" },
	{ 0xab53e96d, "snd_soc_put_enum_double" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0xa0a7f6, "snd_soc_card_get_kcontrol" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd");

MODULE_ALIAS("of:N*T*Crra,digidac1-soundcard");
MODULE_ALIAS("of:N*T*Crra,digidac1-soundcardC*");

MODULE_INFO(srcversion, "73BDD96770674EFFBAF8A35");
