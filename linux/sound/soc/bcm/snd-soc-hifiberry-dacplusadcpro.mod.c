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
	{ 0x3c2b68f7, "of_changeset_apply" },
	{ 0x696f2b63, "of_changeset_init" },
	{ 0x693a304d, "of_parse_phandle" },
	{ 0xa22b682b, "i2c_put_adapter" },
	{ 0xb7ae0cba, "snd_soc_component_update_bits" },
	{ 0xac437f7b, "snd_interval_ratnum" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8166570, "snd_soc_info_enum_double" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x2a22511d, "snd_soc_add_component_controls" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x6e3bfe2e, "i2c_smbus_read_byte" },
	{ 0x559d9ee4, "of_changeset_action" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8c1398da, "devm_kfree" },
	{ 0xf3ab8ce8, "snd_soc_dai_set_bclk_ratio" },
	{ 0x44239691, "_dev_info" },
	{ 0x3d8ee7cc, "snd_soc_get_enum_double" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdf316014, "of_find_compatible_node" },
	{ 0x67ce7ef7, "snd_soc_component_write" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xab53e96d, "snd_soc_put_enum_double" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xd00d909e, "snd_soc_dai_set_fmt" },
	{ 0x7d8e8ea3, "snd_soc_component_read" },
	{ 0x47a230ac, "snd_soc_limit_volume" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x58dfd189, "i2c_get_adapter" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x30f8c3c, "snd_soc_register_card" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplusadcpro");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplusadcproC*");

MODULE_INFO(srcversion, "B2387B174D09B3FF1203337");
