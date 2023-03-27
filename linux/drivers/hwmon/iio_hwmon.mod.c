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
	{ 0x24888b48, "devm_hwmon_device_register_with_groups" },
	{ 0x7410aba2, "strreplace" },
	{ 0x37ebf39e, "devm_kasprintf" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x391dbf4d, "devm_iio_channel_get_all" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa7eb50f7, "iio_get_channel_type" },
	{ 0xd9f20a99, "iio_read_channel_processed" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Ciio-hwmon");
MODULE_ALIAS("of:N*T*Ciio-hwmonC*");

MODULE_INFO(srcversion, "6080B607822E57DC2C80CE4");
