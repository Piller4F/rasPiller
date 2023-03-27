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
	{ 0xb5617c05, "request_firmware_nowait" },
	{ 0x37ebf39e, "devm_kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3d6a8166, "devm_add_action" },
	{ 0xde3fe2c3, "regulator_enable" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0x433630a9, "devm_regulator_get" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x44239691, "_dev_info" },
	{ 0x8fb0cb9d, "input_alloc_absinfo" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x23bc72ec, "input_mt_init_slots" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x55ad7703, "touchscreen_parse_properties" },
	{ 0x7f9832e7, "input_set_abs_params" },
	{ 0x3d632891, "input_set_capability" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x531366d7, "devm_input_allocate_device" },
	{ 0xf28855b, "gpiod_direction_input" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb2b9020d, "touchscreen_report_pos" },
	{ 0x916944f8, "input_mt_report_slot_state" },
	{ 0x771f85fb, "input_event" },
	{ 0xfa1175cd, "input_mt_sync_frame" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0xa75efb1c, "gpiod_direction_output_raw" },
	{ 0xca2da281, "gpiod_direction_output" },
	{ 0xe24abb5, "regulator_disable" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x163f4a3f, "_dev_err" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgoodix,gt1151");
MODULE_ALIAS("of:N*T*Cgoodix,gt1151C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt1158");
MODULE_ALIAS("of:N*T*Cgoodix,gt1158C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt5663");
MODULE_ALIAS("of:N*T*Cgoodix,gt5663C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt5688");
MODULE_ALIAS("of:N*T*Cgoodix,gt5688C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt911");
MODULE_ALIAS("of:N*T*Cgoodix,gt911C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9110");
MODULE_ALIAS("of:N*T*Cgoodix,gt9110C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt912");
MODULE_ALIAS("of:N*T*Cgoodix,gt912C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9147");
MODULE_ALIAS("of:N*T*Cgoodix,gt9147C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt917s");
MODULE_ALIAS("of:N*T*Cgoodix,gt917sC*");
MODULE_ALIAS("of:N*T*Cgoodix,gt927");
MODULE_ALIAS("of:N*T*Cgoodix,gt927C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9271");
MODULE_ALIAS("of:N*T*Cgoodix,gt9271C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt928");
MODULE_ALIAS("of:N*T*Cgoodix,gt928C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9286");
MODULE_ALIAS("of:N*T*Cgoodix,gt9286C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt967");
MODULE_ALIAS("of:N*T*Cgoodix,gt967C*");
MODULE_ALIAS("i2c:GDIX1001:00");

MODULE_INFO(srcversion, "03574A8FA10DE139065C8C6");
