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
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3bfaf863, "devm_snd_soc_register_component" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x6736b8b2, "param_ops_uint" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cdmic-codec");
MODULE_ALIAS("of:N*T*Cdmic-codecC*");

MODULE_INFO(srcversion, "F1D471CC4608F41EE4711CD");
