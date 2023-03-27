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
	{ 0xe44c7c3f, "regulator_get_bypass_regmap" },
	{ 0x902d3861, "regulator_is_enabled_regmap" },
	{ 0xfd3b217f, "regulator_get_voltage_sel_regmap" },
	{ 0xa07f3608, "regulator_set_voltage_sel_regmap" },
	{ 0xb8b9327b, "regulator_map_voltage_linear_range" },
	{ 0x93464be5, "regulator_list_voltage_linear_range" },
	{ 0xa990f689, "platform_unregister_drivers" },
	{ 0x2aaf3a54, "__platform_register_drivers" },
	{ 0xc1541204, "regulator_disable_regmap" },
	{ 0xbab49695, "regulator_enable_regmap" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4a8de07, "regulator_set_bypass_regmap" },
	{ 0xf8587c7e, "rdev_get_drvdata" },
	{ 0xdcb764ad, "memset" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x1efa4bb4, "of_get_regulator_init_data" },
	{ 0xf1d26d04, "of_get_child_by_name" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0x388db8ce, "devm_regulator_register" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4be8383b, "snd_soc_component_force_enable_pin" },
	{ 0x62becdf4, "snd_soc_dapm_sync" },
	{ 0x1ddda2f4, "snd_soc_component_disable_pin" },
	{ 0x2cc71b34, "regmap_read" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "01ABA19F50E943028A046A3");
