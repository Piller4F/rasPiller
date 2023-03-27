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
	{ 0xb0bbcb9a, "dev_err_probe" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0xaf6cae95, "pps_register_source" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3ba9b8b7, "gpiod_to_irq" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xa387f57e, "device_property_present" },
	{ 0xd1d63978, "devm_gpiod_get" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x72696844, "pps_event" },
	{ 0xaf18e39b, "gpiod_get_value" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x4cb27100, "ktime_get_snapshot" },
	{ 0x44239691, "_dev_info" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x17573857, "pps_unregister_source" },
	{ 0xb127e82, "gpiod_set_value" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpps-gpio");
MODULE_ALIAS("of:N*T*Cpps-gpioC*");

MODULE_INFO(srcversion, "F819621FD7009AA57B6E27F");
