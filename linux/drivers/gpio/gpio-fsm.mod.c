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
	{ 0xbbc1b23a, "class_unregister" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0xac97d5fa, "__class_register" },
	{ 0xe5c61ec4, "devm_gpiochip_add_data_with_key" },
	{ 0x265e77c1, "device_create_with_groups" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa1438c8f, "of_get_next_child" },
	{ 0xfa6d6f4c, "gpiod_is_active_low" },
	{ 0x3ba9b8b7, "gpiod_to_irq" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0xfa224cdd, "devm_gpiod_get_array_optional" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xaf18e39b, "gpiod_get_value" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0x44239691, "_dev_info" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x97df9f42, "gpiochip_get_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xe2d5255a, "strcmp" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crpi,gpio-fsm");
MODULE_ALIAS("of:N*T*Crpi,gpio-fsmC*");

MODULE_INFO(srcversion, "7B83F80FA4FE12F98E61587");
