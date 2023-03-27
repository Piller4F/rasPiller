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
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x7db53154, "__iio_device_register" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x4dd6574f, "devm_regmap_field_alloc" },
	{ 0xb55d3b93, "__pm_runtime_use_autosuspend" },
	{ 0xbd2dccc3, "pm_runtime_set_autosuspend_delay" },
	{ 0x373fb346, "pm_runtime_enable" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0xd6a7b2e5, "devm_iio_kfifo_buffer_setup_ext" },
	{ 0x8a21ba91, "devm_iio_device_alloc" },
	{ 0x18f39e38, "regmap_field_update_bits_base" },
	{ 0xcc018b98, "__pm_runtime_set_status" },
	{ 0x2c761af5, "__pm_runtime_disable" },
	{ 0x100168ce, "iio_device_unregister" },
	{ 0x842bd345, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9bf689c4, "iio_push_event" },
	{ 0xa23327b2, "iio_get_time_ns" },
	{ 0xf71bdd2c, "iio_push_to_buffers" },
	{ 0xea764101, "regmap_bulk_read" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfb8880, "regmap_bulk_write" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "industrialio,regmap-i2c,kfifo_buf");

MODULE_ALIAS("of:N*T*Cavago,apds9960");
MODULE_ALIAS("of:N*T*Cavago,apds9960C*");
MODULE_ALIAS("acpi*:MSHW0184:*");
MODULE_ALIAS("i2c:apds9960");

MODULE_INFO(srcversion, "AF0AF9A3D5B2D7F6E2C3FD3");
