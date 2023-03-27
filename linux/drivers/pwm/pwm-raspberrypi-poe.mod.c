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
	{ 0xf89a697a, "regmap_write" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb0bbcb9a, "dev_err_probe" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0x4c45b997, "devm_rpi_firmware_get" },
	{ 0xe49fb038, "of_get_parent" },
	{ 0x249e1cb8, "devm_pwmchip_add" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0xe2acb59b, "dev_get_regmap" },
	{ 0xca4cf59e, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,firmware-poe-pwm");
MODULE_ALIAS("of:N*T*Craspberrypi,firmware-poe-pwmC*");
MODULE_ALIAS("of:N*T*Craspberrypi,poe-pwm");
MODULE_ALIAS("of:N*T*Craspberrypi,poe-pwmC*");

MODULE_INFO(srcversion, "0AC439AB64F49684350FC12");
