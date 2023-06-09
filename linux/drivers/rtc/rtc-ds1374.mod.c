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
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xd93c21f4, "i2c_smbus_read_i2c_block_data" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x43664e27, "i2c_smbus_write_i2c_block_data" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x329f6a5b, "__devm_rtc_register_device" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x91dee67f, "devm_rtc_allocate_device" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x67ddba8d, "rtc_update_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xbe2aed38, "i2c_smbus_write_byte_data" },
	{ 0x8b342d78, "i2c_smbus_read_byte_data" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xaefb2a4c, "devm_free_irq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdallas,ds1374");
MODULE_ALIAS("of:N*T*Cdallas,ds1374C*");
MODULE_ALIAS("i2c:ds1374");

MODULE_INFO(srcversion, "DF51EFB2D2DD8B4C0A02131");
