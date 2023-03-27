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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xae0ce2ef, "__pm_runtime_idle" },
	{ 0x53c8130, "regulator_set_voltage" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2c761af5, "__pm_runtime_disable" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0xb55d3b93, "__pm_runtime_use_autosuspend" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x842bd345, "__pm_runtime_suspend" },
	{ 0xe24abb5, "regulator_disable" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x1992cb5f, "mfd_remove_devices" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x3a109e75, "gpio_to_desc" },
	{ 0x283d2cbc, "irq_create_mapping_affinity" },
	{ 0xea764101, "regmap_bulk_read" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd1d63978, "devm_gpiod_get" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0xb31af892, "devm_regulator_bulk_get" },
	{ 0xd8c68e76, "regulator_bulk_enable" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xc37d5485, "__irq_domain_add" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xbd86ca3b, "__irq_resolve_mapping" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x93a5a4e1, "mfd_add_devices" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3b02ae0d, "irq_get_irq_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xb2709efc, "regmap_multi_reg_write_bypassed" },
	{ 0xb48e5cec, "devm_gpio_request_one" },
	{ 0x6a2169ce, "gpiod_get_raw_value_cansleep" },
	{ 0x3ee039eb, "regmap_add_irq_chip" },
	{ 0x44239691, "_dev_info" },
	{ 0x912dc8e6, "handle_simple_irq" },
	{ 0x26f61a7e, "regulator_bulk_disable" },
	{ 0x373fb346, "pm_runtime_enable" },
	{ 0x5f3babe3, "irq_set_chip_and_handler_name" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xcc018b98, "__pm_runtime_set_status" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x86cd1836, "devm_clk_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa198012e, "regcache_mark_dirty" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3ba9b8b7, "gpiod_to_irq" },
	{ 0x8351fc63, "regulator_put" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0xaf21f0d1, "irq_domain_remove" },
	{ 0xbd2dccc3, "pm_runtime_set_autosuspend_delay" },
	{ 0x2313ab84, "gpiod_set_raw_value_cansleep" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x60df4cb1, "regulator_get" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x7958798, "regcache_sync" },
	{ 0x389fd0bd, "regcache_cache_only" },
	{ 0x44871195, "irq_domain_xlate_twocell" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xde3fe2c3, "regulator_enable" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B323A5D33E8EA507C6DE1AC");
