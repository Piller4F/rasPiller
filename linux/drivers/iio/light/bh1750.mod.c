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
	{ 0x96848186, "scnprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x7db53154, "__iio_device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8a21ba91, "devm_iio_device_alloc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x100168ce, "iio_device_unregister" },
	{ 0x18e442e, "i2c_smbus_write_byte" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Crohm,bh1710");
MODULE_ALIAS("of:N*T*Crohm,bh1710C*");
MODULE_ALIAS("of:N*T*Crohm,bh1715");
MODULE_ALIAS("of:N*T*Crohm,bh1715C*");
MODULE_ALIAS("of:N*T*Crohm,bh1721");
MODULE_ALIAS("of:N*T*Crohm,bh1721C*");
MODULE_ALIAS("of:N*T*Crohm,bh1750");
MODULE_ALIAS("of:N*T*Crohm,bh1750C*");
MODULE_ALIAS("of:N*T*Crohm,bh1751");
MODULE_ALIAS("of:N*T*Crohm,bh1751C*");
MODULE_ALIAS("i2c:bh1710");
MODULE_ALIAS("i2c:bh1715");
MODULE_ALIAS("i2c:bh1721");
MODULE_ALIAS("i2c:bh1750");
MODULE_ALIAS("i2c:bh1751");

MODULE_INFO(srcversion, "6F9DC7C1D69352D3276E37C");
