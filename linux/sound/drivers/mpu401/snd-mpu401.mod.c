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
	{ 0x27339f09, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0xcbf29f79, "snd_mpu401_uart_new" },
	{ 0x871b3c7f, "snd_devm_card_new" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x21012113, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0xc2ded2db, "param_ops_charp" },
	{ 0xdcb764ad, "memset" },
	{ 0xefbfd9c, "platform_device_unregister" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0x4e42530f, "param_ops_long" },
	{ 0xb8714612, "snd_card_register" },
	{ 0x13868293, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-mpu401-uart,snd");


MODULE_INFO(srcversion, "79DE2256DA0653975AC6DC4");
