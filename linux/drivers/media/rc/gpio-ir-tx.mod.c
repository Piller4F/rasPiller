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
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0xb127e82, "gpiod_set_value" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x2b3a89b1, "devm_rc_register_device" },
	{ 0xd1d63978, "devm_gpiod_get" },
	{ 0xf60b1089, "devm_rc_allocate_device" },
	{ 0xca4cf59e, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-ir-tx");
MODULE_ALIAS("of:N*T*Cgpio-ir-txC*");

MODULE_INFO(srcversion, "E14CF388053FE6036573EC0");
