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
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0xdcccca3e, "of_property_read_string" },
	{ 0xd0f9583a, "snd_soc_unregister_card" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x4fc5fb1, "snd_soc_get_pcm_runtime" },
	{ 0x44239691, "_dev_info" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0x47a230ac, "snd_soc_limit_volume" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x30f8c3c, "snd_soc_register_card" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-dac");
MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-dacC*");

MODULE_INFO(srcversion, "78D1F9616A1A8DBEE9A6AAD");
