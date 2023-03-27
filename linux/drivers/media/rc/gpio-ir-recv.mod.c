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
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x373fb346, "pm_runtime_enable" },
	{ 0xcc018b98, "__pm_runtime_set_status" },
	{ 0xb55d3b93, "__pm_runtime_use_autosuspend" },
	{ 0xbd2dccc3, "pm_runtime_set_autosuspend_delay" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0x2b3a89b1, "devm_rc_register_device" },
	{ 0x63848f67, "of_get_property" },
	{ 0xf60b1089, "devm_rc_allocate_device" },
	{ 0x3ba9b8b7, "gpiod_to_irq" },
	{ 0xd1d63978, "devm_gpiod_get" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x29c65353, "ir_raw_event_store_edge" },
	{ 0x842bd345, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xaf18e39b, "gpiod_get_value" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x22ec5205, "cpu_latency_qos_remove_request" },
	{ 0x28afbb08, "cpu_latency_qos_add_request" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-ir-receiver");
MODULE_ALIAS("of:N*T*Cgpio-ir-receiverC*");

MODULE_INFO(srcversion, "5DDEB234BED17634DA37C0C");
