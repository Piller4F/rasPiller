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
	{ 0xfdf36ba7, "of_clk_add_provider" },
	{ 0x54a5a05, "of_clk_src_simple_get" },
	{ 0x51b872e6, "devm_clk_register" },
	{ 0xdcccca3e, "of_property_read_string" },
	{ 0x329f6a5b, "__devm_rtc_register_device" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x91dee67f, "devm_rtc_allocate_device" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x67ddba8d, "rtc_update_irq" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0x8b342d78, "i2c_smbus_read_byte_data" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdbeba628, "i2c_transfer" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pcf8563");
MODULE_ALIAS("of:N*T*Cnxp,pcf8563C*");
MODULE_ALIAS("of:N*T*Cepson,rtc8564");
MODULE_ALIAS("of:N*T*Cepson,rtc8564C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8564");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8564C*");
MODULE_ALIAS("of:N*T*Cnxp,pca8565");
MODULE_ALIAS("of:N*T*Cnxp,pca8565C*");
MODULE_ALIAS("i2c:pcf8563");
MODULE_ALIAS("i2c:rtc8564");
MODULE_ALIAS("i2c:pca8565");

MODULE_INFO(srcversion, "542ED891FFFE62AE2CCA6CA");
