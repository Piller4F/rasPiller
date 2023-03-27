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
	{ 0x329f6a5b, "__devm_rtc_register_device" },
	{ 0x91dee67f, "devm_rtc_allocate_device" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdallas,ds1672");
MODULE_ALIAS("of:N*T*Cdallas,ds1672C*");
MODULE_ALIAS("i2c:ds1672");

MODULE_INFO(srcversion, "0E32223333E7E54F5AACD7A");
