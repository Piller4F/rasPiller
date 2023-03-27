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
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x3ba9b8b7, "gpiod_to_irq" },
	{ 0xf28855b, "gpiod_direction_input" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6f140995, "input_allocate_device" },
	{ 0xea67229b, "rpisense_get_dev" },
	{ 0x771f85fb, "input_event" },
	{ 0xbf96ab8a, "rpisense_reg_read" },
	{ 0xd6011851, "input_free_device" },
	{ 0x1b396629, "input_unregister_device" },
};

MODULE_INFO(depends, "rpisense-core");

MODULE_ALIAS("platform:rpi-sense-js");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-js");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-jsC*");

MODULE_INFO(srcversion, "3A1020FD8FE11A5D677800E");
