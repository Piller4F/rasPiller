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
	{ 0xb0bbcb9a, "dev_err_probe" },
	{ 0x16e2e72e, "devm_gpiod_get_array" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x44239691, "_dev_info" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x159096ba, "devm_mux_chip_register" },
	{ 0x397c7704, "gpiod_set_array_value_cansleep" },
	{ 0xf8d07858, "bitmap_from_arr32" },
	{ 0xd78b7ce6, "gpiod_count" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0xc0fc6e0d, "devm_mux_chip_alloc" },
};

MODULE_INFO(depends, "mux-core");

MODULE_ALIAS("of:N*T*Cgpio-mux");
MODULE_ALIAS("of:N*T*Cgpio-muxC*");

MODULE_INFO(srcversion, "0A3987EA653CEDD78E8BDEA");
