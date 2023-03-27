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
	{ 0xb0bbcb9a, "dev_err_probe" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xbd86ca3b, "__irq_resolve_mapping" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9f5a7205, "devm_pinctrl_register" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x97df9f42, "gpiochip_get_data" },
	{ 0x912dc8e6, "handle_simple_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdefd8972, "pinctrl_dev_get_drvdata" },
	{ 0xf1f77a51, "pinconf_generic_dt_free_map" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xe5c61ec4, "devm_gpiochip_add_data_with_key" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x7958798, "regcache_sync" },
	{ 0x389fd0bd, "regcache_cache_only" },
	{ 0xeb482fee, "pinconf_generic_dt_node_to_map" },
	{ 0xa387f57e, "device_property_present" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C5DAD80BCDA2312630C4483");
