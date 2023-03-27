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
	{ 0xf9a482f9, "msleep" },
	{ 0xae0ce2ef, "__pm_runtime_idle" },
	{ 0x2c761af5, "__pm_runtime_disable" },
	{ 0xb55d3b93, "__pm_runtime_use_autosuspend" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x64e48cb4, "iio_read_const_attr" },
	{ 0x842bd345, "__pm_runtime_suspend" },
	{ 0xfa4021fc, "iio_trigger_notify_done" },
	{ 0xb0bbcb9a, "dev_err_probe" },
	{ 0xe24abb5, "regulator_disable" },
	{ 0xea764101, "regmap_bulk_read" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0xfb8880, "regmap_bulk_write" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0x37ebf39e, "devm_kasprintf" },
	{ 0xf78042b8, "regmap_noinc_read" },
	{ 0xd1a25d23, "devm_iio_trigger_alloc" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x8a21ba91, "devm_iio_device_alloc" },
	{ 0xfbb4c92c, "iio_read_mount_matrix" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2b29befb, "__devm_iio_device_register" },
	{ 0xa2418402, "__devm_iio_trigger_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3b02ae0d, "irq_get_irq_data" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x42aee21c, "iio_device_claim_direct_mode" },
	{ 0xcc20ee1, "iio_show_mount_matrix" },
	{ 0x3d6a8166, "devm_add_action" },
	{ 0x433630a9, "devm_regulator_get" },
	{ 0x373fb346, "pm_runtime_enable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5f9abf, "devm_kstrdup" },
	{ 0xcc018b98, "__pm_runtime_set_status" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x68526938, "iio_device_id" },
	{ 0xb18f4e29, "get_device" },
	{ 0xd0148e6c, "__module_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0x1023d3d4, "iio_device_release_direct_mode" },
	{ 0x96848186, "scnprintf" },
	{ 0xf71bdd2c, "iio_push_to_buffers" },
	{ 0xbd2dccc3, "pm_runtime_set_autosuspend_delay" },
	{ 0xb5d40082, "regmap_get_device" },
	{ 0xada92cbb, "devm_iio_triggered_buffer_setup_ext" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf89a697a, "regmap_write" },
	{ 0xde3fe2c3, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "855233172AC42F732FE468E");
