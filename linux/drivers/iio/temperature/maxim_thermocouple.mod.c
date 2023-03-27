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
	{ 0x20105980, "driver_unregister" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0xf71bdd2c, "iio_push_to_buffers" },
	{ 0xa23327b2, "iio_get_time_ns" },
	{ 0xfa4021fc, "iio_trigger_notify_done" },
	{ 0x1023d3d4, "iio_device_release_direct_mode" },
	{ 0x42aee21c, "iio_device_claim_direct_mode" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2715240, "spi_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x2b29befb, "__devm_iio_device_register" },
	{ 0xada92cbb, "devm_iio_triggered_buffer_setup_ext" },
	{ 0x8a21ba91, "devm_iio_device_alloc" },
	{ 0xc8cbd20d, "spi_get_device_id" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cmaxim,max6675");
MODULE_ALIAS("of:N*T*Cmaxim,max6675C*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855");
MODULE_ALIAS("of:N*T*Cmaxim,max31855C*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855k");
MODULE_ALIAS("of:N*T*Cmaxim,max31855kC*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855j");
MODULE_ALIAS("of:N*T*Cmaxim,max31855jC*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855n");
MODULE_ALIAS("of:N*T*Cmaxim,max31855nC*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855s");
MODULE_ALIAS("of:N*T*Cmaxim,max31855sC*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855t");
MODULE_ALIAS("of:N*T*Cmaxim,max31855tC*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855e");
MODULE_ALIAS("of:N*T*Cmaxim,max31855eC*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855r");
MODULE_ALIAS("of:N*T*Cmaxim,max31855rC*");
MODULE_ALIAS("spi:max6675");
MODULE_ALIAS("spi:max31855");
MODULE_ALIAS("spi:max31855k");
MODULE_ALIAS("spi:max31855j");
MODULE_ALIAS("spi:max31855n");
MODULE_ALIAS("spi:max31855s");
MODULE_ALIAS("spi:max31855t");
MODULE_ALIAS("spi:max31855e");
MODULE_ALIAS("spi:max31855r");

MODULE_INFO(srcversion, "76BAD4AEEC1E43AB8CF3E48");
