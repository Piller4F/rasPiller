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
	{ 0x2c761af5, "__pm_runtime_disable" },
	{ 0xe5c61ec4, "devm_gpiochip_add_data_with_key" },
	{ 0x373fb346, "pm_runtime_enable" },
	{ 0xdcb764ad, "memset" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xae0ce2ef, "__pm_runtime_idle" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0x64afca98, "gpiochip_line_is_persistent" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x842bd345, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc274cbd, "regcache_drop_region" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0x97df9f42, "gpiochip_get_data" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AD52C4C462D62BF4C460E6C");
