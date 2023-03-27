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
	{ 0x693a304d, "of_parse_phandle" },
	{ 0xd1d63978, "devm_gpiod_get" },
	{ 0x8da0fd7d, "snd_soc_dai_set_pll" },
	{ 0xb7ae0cba, "snd_soc_component_update_bits" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0xbb76c120, "of_match_node" },
	{ 0xdcccca3e, "of_property_read_string" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xf3ab8ce8, "snd_soc_dai_set_bclk_ratio" },
	{ 0x92997ed8, "_printk" },
	{ 0xfca28544, "snd_soc_dai_set_clkdiv" },
	{ 0x64591ba4, "snd_soc_dai_set_sysclk" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0x13868293, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cjustboom,justboom-digi");
MODULE_ALIAS("of:N*T*Cjustboom,justboom-digiC*");
MODULE_ALIAS("of:N*T*Ciqaudio,wm8804-digi");
MODULE_ALIAS("of:N*T*Ciqaudio,wm8804-digiC*");
MODULE_ALIAS("of:N*T*Callo,allo-digione");
MODULE_ALIAS("of:N*T*Callo,allo-digioneC*");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-digi");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-digiC*");

MODULE_INFO(srcversion, "E21B7867E1AC6BA9F69B8A6");
