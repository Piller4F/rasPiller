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
	{ 0x64e48cb4, "iio_read_const_attr" },
	{ 0x7fffa136, "iio_validate_scan_mask_onehot" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x1023d3d4, "iio_device_release_direct_mode" },
	{ 0x42aee21c, "iio_device_claim_direct_mode" },
	{ 0x2c761af5, "__pm_runtime_disable" },
	{ 0x100168ce, "iio_device_unregister" },
	{ 0xfa4021fc, "iio_trigger_notify_done" },
	{ 0xf71bdd2c, "iio_push_to_buffers" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x842bd345, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0xb5d40082, "regmap_get_device" },
	{ 0x903e2a53, "fwnode_handle_put" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x7db53154, "__iio_device_register" },
	{ 0x373fb346, "pm_runtime_enable" },
	{ 0xb55d3b93, "__pm_runtime_use_autosuspend" },
	{ 0xbd2dccc3, "pm_runtime_set_autosuspend_delay" },
	{ 0xcc018b98, "__pm_runtime_set_status" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0x3b02ae0d, "irq_get_irq_data" },
	{ 0xada92cbb, "devm_iio_triggered_buffer_setup_ext" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0x87fc0b31, "fwnode_property_read_u32_array" },
	{ 0x66d72ac, "device_get_next_child_node" },
	{ 0x92cd3d03, "device_get_match_data" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8a21ba91, "devm_iio_device_alloc" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9bf689c4, "iio_push_event" },
	{ 0xa23327b2, "iio_get_time_ns" },
	{ 0x2cc71b34, "regmap_read" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer,regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,ads1015");
MODULE_ALIAS("of:N*T*Cti,ads1015C*");
MODULE_ALIAS("of:N*T*Cti,ads1115");
MODULE_ALIAS("of:N*T*Cti,ads1115C*");
MODULE_ALIAS("i2c:ads1015");
MODULE_ALIAS("i2c:ads1115");

MODULE_INFO(srcversion, "8A1C0FB95F9C52A283EEB9A");
