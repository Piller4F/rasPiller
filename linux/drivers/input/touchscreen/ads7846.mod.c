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
	{ 0x20105980, "driver_unregister" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0x8c1398da, "devm_kfree" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0xef735b85, "sysfs_create_group" },
	{ 0x44239691, "_dev_info" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x95fc5f46, "of_get_named_gpio_flags" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x37f09290, "of_property_read_variable_u16_array" },
	{ 0x26559349, "of_match_device" },
	{ 0xe4c3763f, "gpiod_set_debounce" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0x8df4d91c, "hwmon_device_register_with_groups" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x60df4cb1, "regulator_get" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x55ad7703, "touchscreen_parse_properties" },
	{ 0x7f9832e7, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd6011851, "input_free_device" },
	{ 0x6f140995, "input_allocate_device" },
	{ 0x73b71578, "spi_setup" },
	{ 0xde3fe2c3, "regulator_enable" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xdcb764ad, "memset" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x771f85fb, "input_event" },
	{ 0xb2b9020d, "touchscreen_report_pos" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x2715240, "spi_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6f414e08, "gpiod_get_raw_value" },
	{ 0x3a109e75, "gpio_to_desc" },
	{ 0xfe990052, "gpio_free" },
	{ 0xe24abb5, "regulator_disable" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x8351fc63, "regulator_put" },
	{ 0x2e8dc91c, "hwmon_device_unregister" },
	{ 0x1b396629, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x54bd79d9, "sysfs_remove_group" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,tsc2046");
MODULE_ALIAS("of:N*T*Cti,tsc2046C*");
MODULE_ALIAS("of:N*T*Cti,ads7843");
MODULE_ALIAS("of:N*T*Cti,ads7843C*");
MODULE_ALIAS("of:N*T*Cti,ads7845");
MODULE_ALIAS("of:N*T*Cti,ads7845C*");
MODULE_ALIAS("of:N*T*Cti,ads7846");
MODULE_ALIAS("of:N*T*Cti,ads7846C*");
MODULE_ALIAS("of:N*T*Cti,ads7873");
MODULE_ALIAS("of:N*T*Cti,ads7873C*");

MODULE_INFO(srcversion, "CECB56E0787B73088C5DCCD");
