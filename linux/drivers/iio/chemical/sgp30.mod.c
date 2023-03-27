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
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x2b29befb, "__devm_iio_device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0x92cd3d03, "device_get_match_data" },
	{ 0xf496e46, "dev_fwnode" },
	{ 0x8a21ba91, "devm_iio_device_alloc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x9c5d5b94, "crc8" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0xbbcf8b16, "kthread_stop" },
};

MODULE_INFO(depends, "industrialio,crc8");

MODULE_ALIAS("i2c:sgp30");
MODULE_ALIAS("i2c:sgpc3");
MODULE_ALIAS("of:N*T*Csensirion,sgp30");
MODULE_ALIAS("of:N*T*Csensirion,sgp30C*");
MODULE_ALIAS("of:N*T*Csensirion,sgpc3");
MODULE_ALIAS("of:N*T*Csensirion,sgpc3C*");

MODULE_INFO(srcversion, "C7F5BD3E5ADCE3E3C7E444A");
