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
	{ 0xc2662a37, "devm_snd_soc_register_card" },
	{ 0xb41f770a, "snd_soc_dapm_get_enum_double" },
	{ 0x693a304d, "of_parse_phandle" },
	{ 0x8da0fd7d, "snd_soc_dai_set_pll" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb7ae0cba, "snd_soc_component_update_bits" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x8166570, "snd_soc_info_enum_double" },
	{ 0xdb3bdc37, "snd_soc_component_set_pll" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x6d333db7, "snd_ctl_boolean_mono_info" },
	{ 0x4fc5fb1, "snd_soc_get_pcm_runtime" },
	{ 0xf3ab8ce8, "snd_soc_dai_set_bclk_ratio" },
	{ 0xfca28544, "snd_soc_dai_set_clkdiv" },
	{ 0x64591ba4, "snd_soc_dai_set_sysclk" },
	{ 0xcb6a202, "snd_soc_component_set_sysclk" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xe556a9c5, "snd_pcm_hw_constraint_minmax" },
	{ 0x7d8e8ea3, "snd_soc_component_read" },
	{ 0x9f47e414, "snd_soc_dai_set_tdm_slot" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xe914e41e, "strcpy" },
	{ 0x54fc2a9b, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core,snd,snd-pcm");

MODULE_ALIAS("of:N*T*Cwlf,rpi-cirrus");
MODULE_ALIAS("of:N*T*Cwlf,rpi-cirrusC*");

MODULE_INFO(srcversion, "923FC751286E458A8F9F4DA");
