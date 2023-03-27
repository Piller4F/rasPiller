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
	{ 0x6e53f671, "snd_soc_get_volsw_sx" },
	{ 0xb41f770a, "snd_soc_dapm_get_enum_double" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0xc09992a7, "snd_soc_dapm_get_volsw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb7ae0cba, "snd_soc_component_update_bits" },
	{ 0xfeb785f3, "snd_soc_put_volsw" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0xe97c26c4, "snd_soc_get_volsw" },
	{ 0xf6170ed6, "snd_soc_info_volsw_sx" },
	{ 0x8166570, "snd_soc_info_enum_double" },
	{ 0x13e19b34, "snd_soc_bytes_info" },
	{ 0x8fb6ab01, "snd_soc_dapm_put_volsw" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9214249a, "snd_soc_info_volsw" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x44239691, "_dev_info" },
	{ 0x3d8ee7cc, "snd_soc_get_enum_double" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0x3bfaf863, "devm_snd_soc_register_component" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xab53e96d, "snd_soc_put_enum_double" },
	{ 0x983dc881, "snd_soc_bytes_get" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0xe6a11e2b, "snd_soc_bytes_put" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xc6ebf161, "snd_soc_put_volsw_sx" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x54fc2a9b, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Ccirrus,cs4265");
MODULE_ALIAS("of:N*T*Ccirrus,cs4265C*");
MODULE_ALIAS("i2c:cs4265");

MODULE_INFO(srcversion, "2E459F5F5212963E739F2B4");
