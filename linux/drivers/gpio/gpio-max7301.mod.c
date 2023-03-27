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
	{ 0x89ac4143, "__max730x_probe" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x73b71578, "spi_setup" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x36043ee3, "spi_write_then_read" },
	{ 0xc9cf5263, "__max730x_remove" },
};

MODULE_INFO(depends, "gpio-max730x");

MODULE_ALIAS("spi:max7301");

MODULE_INFO(srcversion, "0A2E3C98056F782A3E602FA");
