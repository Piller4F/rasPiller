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
	{ 0xf1128625, "of_device_get_match_data" },
	{ 0x5d17a538, "asoc_simple_parse_pin_switches" },
	{ 0x3d621286, "asoc_simple_remove" },
	{ 0x4095190d, "snd_soc_pm_ops" },
	{ 0xa8b2c5f9, "asoc_simple_parse_widgets" },
	{ 0x5ffe64a5, "asoc_simple_startup" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x3834901e, "asoc_simple_canonicalize_cpu" },
	{ 0xdcb764ad, "memset" },
	{ 0x311244e1, "asoc_simple_init_priv" },
	{ 0x22ea036e, "asoc_simple_be_hw_params_fixup" },
	{ 0x5172f52a, "snd_soc_of_get_dai_name" },
	{ 0x5ba1eadb, "of_device_is_available" },
	{ 0x6557d76, "asoc_simple_parse_daifmt" },
	{ 0x1e41be0, "asoc_simple_parse_routing" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x52e120e8, "asoc_simple_canonicalize_platform" },
	{ 0x8c1398da, "devm_kfree" },
	{ 0xf1d26d04, "of_get_child_by_name" },
	{ 0x85f8ef2f, "snd_soc_of_parse_aux_devs" },
	{ 0x7408e820, "asoc_simple_parse_card_name" },
	{ 0x27e71c13, "snd_soc_dai_link_set_capabilities" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa1438c8f, "of_get_next_child" },
	{ 0x5d21251f, "asoc_simple_init_jack" },
	{ 0xd2dd61b5, "snd_soc_of_parse_node_prefix" },
	{ 0xd87501d8, "asoc_simple_dai_init" },
	{ 0xe315b3eb, "of_node_get" },
	{ 0xe49fb038, "of_get_parent" },
	{ 0x467a172e, "asoc_simple_shutdown" },
	{ 0xb0fb36d4, "of_parse_phandle_with_args" },
	{ 0xed4a6f91, "asoc_simple_clean_reference" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x28b71b4f, "asoc_simple_set_dailink_name" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x3d5df4cf, "asoc_simple_hw_params" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x91520f85, "asoc_simple_parse_clk" },
	{ 0x5ac47d6e, "snd_soc_of_parse_tdm_slot" },
	{ 0x32d8d858, "asoc_simple_parse_convert" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-simple-card-utils");

MODULE_ALIAS("of:N*T*Csimple-audio-card");
MODULE_ALIAS("of:N*T*Csimple-audio-cardC*");
MODULE_ALIAS("of:N*T*Csimple-scu-audio-card");
MODULE_ALIAS("of:N*T*Csimple-scu-audio-cardC*");

MODULE_INFO(srcversion, "1314761999456A0BD8DAFD9");
