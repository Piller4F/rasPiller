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
	{ 0x64e48cb4, "iio_read_const_attr" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0xfa4021fc, "iio_trigger_notify_done" },
	{ 0xf71bdd2c, "iio_push_to_buffers" },
	{ 0xa23327b2, "iio_get_time_ns" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1023d3d4, "iio_device_release_direct_mode" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x18e442e, "i2c_smbus_write_byte" },
	{ 0x42aee21c, "iio_device_claim_direct_mode" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x2b29befb, "__devm_iio_device_register" },
	{ 0xada92cbb, "devm_iio_triggered_buffer_setup_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8a21ba91, "devm_iio_device_alloc" },
	{ 0xa08e1f9f, "i2c_smbus_write_word_data" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cti,hdc1000");
MODULE_ALIAS("of:N*T*Cti,hdc1000C*");
MODULE_ALIAS("of:N*T*Cti,hdc1008");
MODULE_ALIAS("of:N*T*Cti,hdc1008C*");
MODULE_ALIAS("of:N*T*Cti,hdc1010");
MODULE_ALIAS("of:N*T*Cti,hdc1010C*");
MODULE_ALIAS("of:N*T*Cti,hdc1050");
MODULE_ALIAS("of:N*T*Cti,hdc1050C*");
MODULE_ALIAS("of:N*T*Cti,hdc1080");
MODULE_ALIAS("of:N*T*Cti,hdc1080C*");
MODULE_ALIAS("i2c:hdc100x");
MODULE_ALIAS("i2c:hdc1000");
MODULE_ALIAS("i2c:hdc1008");
MODULE_ALIAS("i2c:hdc1010");
MODULE_ALIAS("i2c:hdc1050");
MODULE_ALIAS("i2c:hdc1080");

MODULE_INFO(srcversion, "50C719834C1E73D21F9B0D9");
