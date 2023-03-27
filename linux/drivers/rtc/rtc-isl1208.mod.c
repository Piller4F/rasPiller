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
	{ 0xecd7e4ca, "of_irq_get_byname" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0x21635e33, "devm_rtc_nvmem_register" },
	{ 0x9ce1e901, "rtc_add_group" },
	{ 0xdcb764ad, "memset" },
	{ 0x91dee67f, "devm_rtc_allocate_device" },
	{ 0xf1128625, "of_device_get_match_data" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x67ddba8d, "rtc_update_irq" },
	{ 0xb76d6ccf, "sysfs_notify" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x393cac96, "seq_printf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xd93c21f4, "i2c_smbus_read_i2c_block_data" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x43664e27, "i2c_smbus_write_i2c_block_data" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xbe2aed38, "i2c_smbus_write_byte_data" },
	{ 0x8b342d78, "i2c_smbus_read_byte_data" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cisil,isl1208");
MODULE_ALIAS("of:N*T*Cisil,isl1208C*");
MODULE_ALIAS("of:N*T*Cisil,isl1209");
MODULE_ALIAS("of:N*T*Cisil,isl1209C*");
MODULE_ALIAS("of:N*T*Cisil,isl1218");
MODULE_ALIAS("of:N*T*Cisil,isl1218C*");
MODULE_ALIAS("of:N*T*Cisil,isl1219");
MODULE_ALIAS("of:N*T*Cisil,isl1219C*");
MODULE_ALIAS("i2c:isl1208");
MODULE_ALIAS("i2c:isl1209");
MODULE_ALIAS("i2c:isl1218");
MODULE_ALIAS("i2c:isl1219");

MODULE_INFO(srcversion, "FA14C750637FEB891E9658C");
