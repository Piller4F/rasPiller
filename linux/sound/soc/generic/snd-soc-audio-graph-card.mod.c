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
	{ 0x437dc107, "of_phandle_iterator_init" },
	{ 0xd9231f82, "asoc_graph_card_probe" },
	{ 0x3d621286, "asoc_simple_remove" },
	{ 0x82202391, "of_node_name_eq" },
	{ 0x4095190d, "snd_soc_pm_ops" },
	{ 0xa8b2c5f9, "asoc_simple_parse_widgets" },
	{ 0x5ffe64a5, "asoc_simple_startup" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0xe611d31b, "of_graph_get_port_parent" },
	{ 0x3834901e, "asoc_simple_canonicalize_cpu" },
	{ 0xdcb764ad, "memset" },
	{ 0xd9f7a221, "snd_soc_find_dai_with_mutex" },
	{ 0x311244e1, "asoc_simple_init_priv" },
	{ 0x22ea036e, "asoc_simple_be_hw_params_fixup" },
	{ 0x7db56bdd, "of_graph_get_next_endpoint" },
	{ 0x6557d76, "asoc_simple_parse_daifmt" },
	{ 0x1e41be0, "asoc_simple_parse_routing" },
	{ 0x52e120e8, "asoc_simple_canonicalize_platform" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8c1398da, "devm_kfree" },
	{ 0xbab97110, "of_graph_get_endpoint_count" },
	{ 0x7408e820, "asoc_simple_parse_card_name" },
	{ 0x27e71c13, "snd_soc_dai_link_set_capabilities" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa1438c8f, "of_get_next_child" },
	{ 0x63848f67, "of_get_property" },
	{ 0xd2dd61b5, "snd_soc_of_parse_node_prefix" },
	{ 0xd87501d8, "asoc_simple_dai_init" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xfe8e7038, "snd_soc_get_dai_id" },
	{ 0xecf31ab6, "of_phandle_iterator_next" },
	{ 0xe49fb038, "of_get_parent" },
	{ 0x86c4d0c, "of_graph_parse_endpoint" },
	{ 0xab9ca372, "snd_soc_get_dai_name" },
	{ 0x467a172e, "asoc_simple_shutdown" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
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
	{ 0x90d8cf16, "of_graph_get_remote_endpoint" },
	{ 0x32d8d858, "asoc_simple_parse_convert" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-simple-card-utils");

MODULE_ALIAS("of:N*T*Caudio-graph-card");
MODULE_ALIAS("of:N*T*Caudio-graph-cardC*");
MODULE_ALIAS("of:N*T*Caudio-graph-scu-card");
MODULE_ALIAS("of:N*T*Caudio-graph-scu-cardC*");

MODULE_INFO(srcversion, "6C5350C85D55C6A33BE015F");
