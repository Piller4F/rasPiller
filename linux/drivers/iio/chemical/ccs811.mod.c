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
	{ 0x43664e27, "i2c_smbus_write_i2c_block_data" },
	{ 0x7db53154, "__iio_device_register" },
	{ 0xd2158c17, "iio_triggered_buffer_setup_ext" },
	{ 0xd0148e6c, "__module_get" },
	{ 0xb18f4e29, "get_device" },
	{ 0x691a2aa, "__iio_trigger_register" },
	{ 0xd1a25d23, "devm_iio_trigger_alloc" },
	{ 0x68526938, "iio_device_id" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x18e442e, "i2c_smbus_write_byte" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0x8a21ba91, "devm_iio_device_alloc" },
	{ 0x1023d3d4, "iio_device_release_direct_mode" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb127e82, "gpiod_set_value" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x42aee21c, "iio_device_claim_direct_mode" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xfa4021fc, "iio_trigger_notify_done" },
	{ 0xf71bdd2c, "iio_push_to_buffers" },
	{ 0xa23327b2, "iio_get_time_ns" },
	{ 0xd93c21f4, "i2c_smbus_read_i2c_block_data" },
	{ 0x3527b04a, "iio_trigger_poll" },
	{ 0x8b342d78, "i2c_smbus_read_byte_data" },
	{ 0xbe2aed38, "i2c_smbus_write_byte_data" },
	{ 0xd44bc8d2, "iio_trigger_unregister" },
	{ 0x9db7f65c, "iio_triggered_buffer_cleanup" },
	{ 0x100168ce, "iio_device_unregister" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cams,ccs811");
MODULE_ALIAS("of:N*T*Cams,ccs811C*");
MODULE_ALIAS("i2c:ccs811");

MODULE_INFO(srcversion, "9F564C19F6FF864735D6AFF");
