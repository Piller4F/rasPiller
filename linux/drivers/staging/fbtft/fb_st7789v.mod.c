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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x20105980, "driver_unregister" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0xb0bbcb9a, "dev_err_probe" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x82395752, "gpiod_put" },
	{ 0x3ba9b8b7, "gpiod_to_irq" },
	{ 0x6a47613f, "gpiod_get_optional" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xa4e39a96, "fbtft_write_vmem16_bus9" },
	{ 0x72114672, "fbtft_write_vmem16_bus8" },
	{ 0x2017779, "fbtft_write_vmem16_bus16" },
	{ 0xa6257a2f, "complete" },
	{ 0xa38288fc, "fbtft_probe_common" },
	{ 0xcb7e6297, "fbtft_remove_common" },
};

MODULE_INFO(depends, "fbtft");

MODULE_ALIAS("of:N*T*Csitronix,st7789v");
MODULE_ALIAS("of:N*T*Csitronix,st7789vC*");
MODULE_ALIAS("of:N*T*Cfbtft,minipitft13");
MODULE_ALIAS("of:N*T*Cfbtft,minipitft13C*");

MODULE_INFO(srcversion, "699B0448B0C67407BDC7CDC");
