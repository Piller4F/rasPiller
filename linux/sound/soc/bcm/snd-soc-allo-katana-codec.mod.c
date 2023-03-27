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
	{ 0xfeb785f3, "snd_soc_put_volsw" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0xc9220ea9, "snd_soc_register_component" },
	{ 0xe97c26c4, "snd_soc_get_volsw" },
	{ 0x8166570, "snd_soc_info_enum_double" },
	{ 0xdcb764ad, "memset" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x410839b6, "snd_soc_unregister_component" },
	{ 0x9214249a, "snd_soc_info_volsw" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x3d8ee7cc, "snd_soc_get_enum_double" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0xab53e96d, "snd_soc_put_enum_double" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xf89a697a, "regmap_write" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,regmap-i2c");

MODULE_ALIAS("i2c:allo-katana-codec");
MODULE_ALIAS("of:N*T*Callo,allo-katana-codec");
MODULE_ALIAS("of:N*T*Callo,allo-katana-codecC*");

MODULE_INFO(srcversion, "73E509B8FF0A4D3F2D92358");
