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
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0x3a109e75, "gpio_to_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfeb785f3, "snd_soc_put_volsw" },
	{ 0xe97c26c4, "snd_soc_get_volsw" },
	{ 0xb31af892, "devm_regulator_bulk_get" },
	{ 0xd8c68e76, "regulator_bulk_enable" },
	{ 0xa75efb1c, "gpiod_direction_output_raw" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x26559349, "of_match_device" },
	{ 0x6d333db7, "snd_ctl_boolean_mono_info" },
	{ 0x9214249a, "snd_soc_info_volsw" },
	{ 0x26f61a7e, "regulator_bulk_disable" },
	{ 0x3bfaf863, "devm_snd_soc_register_component" },
	{ 0x95fc5f46, "of_get_named_gpio_flags" },
	{ 0x63848f67, "of_get_property" },
	{ 0xa198012e, "regcache_mark_dirty" },
	{ 0x9ddce221, "gpiod_set_raw_value" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xfa450902, "devm_gpio_request" },
	{ 0x7958798, "regcache_sync" },
};

MODULE_INFO(depends, "snd-soc-core,snd");

MODULE_ALIAS("of:N*T*Ccirrus,cs4271");
MODULE_ALIAS("of:N*T*Ccirrus,cs4271C*");

MODULE_INFO(srcversion, "B9C1C44D76F8817F838A872");
