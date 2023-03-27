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
	{ 0x5e0161af, "devm_hwmon_device_register_with_info" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9c5d5b94, "crc8" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "crc8");

MODULE_ALIAS("i2c:sht4x");

MODULE_INFO(srcversion, "E683345110779EE498AAE39");
