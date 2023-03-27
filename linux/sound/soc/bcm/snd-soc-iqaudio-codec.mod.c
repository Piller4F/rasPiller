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
	{ 0xf9a482f9, "msleep" },
	{ 0x693a304d, "of_parse_phandle" },
	{ 0x2ded673, "snd_soc_dapm_info_pin_switch" },
	{ 0x9c94479, "snd_soc_dapm_put_pin_switch" },
	{ 0x8da0fd7d, "snd_soc_dai_set_pll" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0xdcccca3e, "of_property_read_string" },
	{ 0xd0f9583a, "snd_soc_unregister_card" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x4fc5fb1, "snd_soc_get_pcm_runtime" },
	{ 0xf3ab8ce8, "snd_soc_dai_set_bclk_ratio" },
	{ 0x3f7dcb73, "snd_soc_dapm_get_pin_switch" },
	{ 0x62becdf4, "snd_soc_dapm_sync" },
	{ 0x64591ba4, "snd_soc_dai_set_sysclk" },
	{ 0x5e18fb01, "snd_soc_dapm_disable_pin" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x30f8c3c, "snd_soc_register_card" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-codec");
MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-codecC*");

MODULE_INFO(srcversion, "EAE5BBE3BCE3F879E2F864C");
