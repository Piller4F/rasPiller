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
	{ 0xae0ce2ef, "__pm_runtime_idle" },
	{ 0x2c761af5, "__pm_runtime_disable" },
	{ 0xb55d3b93, "__pm_runtime_use_autosuspend" },
	{ 0x842bd345, "__pm_runtime_suspend" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0xea764101, "regmap_bulk_read" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0xb31af892, "devm_regulator_bulk_get" },
	{ 0xd8c68e76, "regulator_bulk_enable" },
	{ 0x9cc76c4c, "regulator_bulk_set_supply_names" },
	{ 0x8a21ba91, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2b29befb, "__devm_iio_device_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3b02ae0d, "irq_get_irq_data" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x3d6a8166, "devm_add_action" },
	{ 0x44239691, "_dev_info" },
	{ 0x26f61a7e, "regulator_bulk_disable" },
	{ 0x373fb346, "pm_runtime_enable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd66c8184, "add_device_randomness" },
	{ 0xcc018b98, "__pm_runtime_set_status" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xbd2dccc3, "pm_runtime_set_autosuspend_delay" },
	{ 0xa6257a2f, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xb127e82, "gpiod_set_value" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf89a697a, "regmap_write" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "DFC65EF58E8D0F99D6D747F");
