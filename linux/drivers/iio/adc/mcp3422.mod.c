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
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2b29befb, "__devm_iio_device_register" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8a21ba91, "devm_iio_device_alloc" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cmcp3422");
MODULE_ALIAS("of:N*T*Cmcp3422C*");
MODULE_ALIAS("i2c:mcp3421");
MODULE_ALIAS("i2c:mcp3422");
MODULE_ALIAS("i2c:mcp3423");
MODULE_ALIAS("i2c:mcp3424");
MODULE_ALIAS("i2c:mcp3425");
MODULE_ALIAS("i2c:mcp3426");
MODULE_ALIAS("i2c:mcp3427");
MODULE_ALIAS("i2c:mcp3428");

MODULE_INFO(srcversion, "D0BD6F0E7FA1772DC77609D");
