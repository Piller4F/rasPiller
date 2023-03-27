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
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa353aef4, "device_create_file" },
	{ 0x50388cf6, "devm_rtc_device_register" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x393cac96, "seq_printf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0x6fe8451e, "device_remove_file" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cxircom,x1205");
MODULE_ALIAS("of:N*T*Cxircom,x1205C*");
MODULE_ALIAS("i2c:x1205");

MODULE_INFO(srcversion, "EFEB5FD6BA3A18EF728DA33");
