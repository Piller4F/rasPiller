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
	{ 0x771f85fb, "input_event" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2715240, "spi_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x373fb346, "pm_runtime_enable" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x4495f8ae, "input_set_max_poll_interval" },
	{ 0xd94466e3, "input_set_min_poll_interval" },
	{ 0x8c312910, "input_set_poll_interval" },
	{ 0x40eb2ddc, "input_setup_polling" },
	{ 0x73b71578, "spi_setup" },
	{ 0x75464319, "input_ff_create_memless" },
	{ 0x3d632891, "input_set_capability" },
	{ 0x7f9832e7, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x531366d7, "devm_input_allocate_device" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0xae0ce2ef, "__pm_runtime_idle" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("spi:psxpad-spi");

MODULE_INFO(srcversion, "D4C9AF2175BA95E846753B9");
