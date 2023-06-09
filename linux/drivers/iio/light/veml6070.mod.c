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
	{ 0x163f4a3f, "_dev_err" },
	{ 0x7db53154, "__iio_device_register" },
	{ 0xc8a6ce1e, "i2c_new_dummy_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8a21ba91, "devm_iio_device_alloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6e3bfe2e, "i2c_smbus_read_byte" },
	{ 0xf9a482f9, "msleep" },
	{ 0x18e442e, "i2c_smbus_write_byte" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xee25a3b1, "i2c_unregister_device" },
	{ 0x100168ce, "iio_device_unregister" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("i2c:veml6070");

MODULE_INFO(srcversion, "D59105A7C94D2748EAAE985");
