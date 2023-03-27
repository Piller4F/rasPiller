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
	{ 0xfa1175cd, "input_mt_sync_frame" },
	{ 0xb2b9020d, "touchscreen_report_pos" },
	{ 0x916944f8, "input_mt_report_slot_state" },
	{ 0x771f85fb, "input_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x350c7015, "devm_device_add_group" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x531366d7, "devm_input_allocate_device" },
	{ 0x23bc72ec, "input_mt_init_slots" },
	{ 0x55ad7703, "touchscreen_parse_properties" },
	{ 0x7f9832e7, "input_set_abs_params" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x4829a47e, "memcpy" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x96848186, "scnprintf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cazoteq,iqs550");
MODULE_ALIAS("of:N*T*Cazoteq,iqs550C*");
MODULE_ALIAS("of:N*T*Cazoteq,iqs572");
MODULE_ALIAS("of:N*T*Cazoteq,iqs572C*");
MODULE_ALIAS("of:N*T*Cazoteq,iqs525");
MODULE_ALIAS("of:N*T*Cazoteq,iqs525C*");
MODULE_ALIAS("i2c:iqs550");
MODULE_ALIAS("i2c:iqs572");
MODULE_ALIAS("i2c:iqs525");

MODULE_INFO(srcversion, "B7C99D890EBBBA8825B5EE6");
