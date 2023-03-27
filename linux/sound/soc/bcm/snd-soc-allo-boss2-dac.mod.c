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
	{ 0xf9a482f9, "msleep" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0xd1d63978, "devm_gpiod_get" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfeb785f3, "snd_soc_put_volsw" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0xc9220ea9, "snd_soc_register_component" },
	{ 0xe97c26c4, "snd_soc_get_volsw" },
	{ 0x8166570, "snd_soc_info_enum_double" },
	{ 0xdcb764ad, "memset" },
	{ 0x293ea448, "snd_pcm_hw_constraint_list" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x410839b6, "snd_soc_unregister_component" },
	{ 0x9214249a, "snd_soc_info_volsw" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x3d8ee7cc, "snd_soc_get_enum_double" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xab53e96d, "snd_soc_put_enum_double" },
	{ 0x37f09290, "of_property_read_variable_u16_array" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xf89a697a, "regmap_write" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,regmap-i2c");

MODULE_ALIAS("i2c:allo-cs43198");
MODULE_ALIAS("of:N*T*Callo,allo-cs43198");
MODULE_ALIAS("of:N*T*Callo,allo-cs43198C*");

MODULE_INFO(srcversion, "1FF4C04CDC8A36359B96F4E");
