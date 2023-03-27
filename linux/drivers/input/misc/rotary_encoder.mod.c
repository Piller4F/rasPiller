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
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x3ba9b8b7, "gpiod_to_irq" },
	{ 0x3d632891, "input_set_capability" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7f9832e7, "input_set_abs_params" },
	{ 0x531366d7, "devm_input_allocate_device" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x16e2e72e, "devm_gpiod_get_array" },
	{ 0x44239691, "_dev_info" },
	{ 0xdb4cbf2b, "device_property_match_string" },
	{ 0xa387f57e, "device_property_present" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xfd457b8, "gpiod_get_value_cansleep" },
	{ 0x771f85fb, "input_event" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crotary-encoder");
MODULE_ALIAS("of:N*T*Crotary-encoderC*");

MODULE_INFO(srcversion, "341AD564B293E1EEFB9394E");
