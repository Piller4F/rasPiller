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
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xe786d32a, "of_prop_next_u32" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x44239691, "_dev_info" },
	{ 0xa8f5047a, "devm_thermal_of_cooling_device_register" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x3ba9b8b7, "gpiod_to_irq" },
	{ 0x24888b48, "devm_hwmon_device_register_with_groups" },
	{ 0x3d6a8166, "devm_add_action" },
	{ 0xca2da281, "gpiod_direction_output" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x12e0322e, "devm_gpiod_get_index" },
	{ 0xd78b7ce6, "gpiod_count" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x683f20ea, "kobject_uevent" },
	{ 0xb76d6ccf, "sysfs_notify" },
	{ 0xfd457b8, "gpiod_get_value_cansleep" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-fan");
MODULE_ALIAS("of:N*T*Cgpio-fanC*");

MODULE_INFO(srcversion, "4C6A56DC90897ECDAE4E3B8");
