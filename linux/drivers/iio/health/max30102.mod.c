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
	{ 0xf9a482f9, "msleep" },
	{ 0x100168ce, "iio_device_unregister" },
	{ 0x44239691, "_dev_info" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x7db53154, "__iio_device_register" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0xd6a7b2e5, "devm_iio_kfifo_buffer_setup_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8a21ba91, "devm_iio_device_alloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf71bdd2c, "iio_push_to_buffers" },
	{ 0xd93c21f4, "i2c_smbus_read_i2c_block_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x63c4d61f, "__bitmap_weight" },
};

MODULE_INFO(depends, "industrialio,regmap-i2c,kfifo_buf");

MODULE_ALIAS("of:N*T*Cmaxim,max30102");
MODULE_ALIAS("of:N*T*Cmaxim,max30102C*");
MODULE_ALIAS("of:N*T*Cmaxim,max30105");
MODULE_ALIAS("of:N*T*Cmaxim,max30105C*");
MODULE_ALIAS("i2c:max30102");
MODULE_ALIAS("i2c:max30105");

MODULE_INFO(srcversion, "AAC57FEBAB42638A87C7A1C");
