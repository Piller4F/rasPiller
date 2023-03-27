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
	{ 0x693a304d, "of_parse_phandle" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0xd0f9583a, "snd_soc_unregister_card" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xf3ab8ce8, "snd_soc_dai_set_bclk_ratio" },
	{ 0x44239691, "_dev_info" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x7d8e8ea3, "snd_soc_component_read" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x30f8c3c, "snd_soc_register_card" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Caudiophonics,i-sabre-q2m");
MODULE_ALIAS("of:N*T*Caudiophonics,i-sabre-q2mC*");

MODULE_INFO(srcversion, "2FB28EA593ED0EF40893F8B");
