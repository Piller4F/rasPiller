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
	{ 0xe7f1fdf9, "simple_open" },
	{ 0xbea4a48b, "simple_attr_release" },
	{ 0x8b19efde, "simple_attr_write" },
	{ 0xf0971c76, "simple_attr_read" },
	{ 0xf97dfac9, "generic_file_llseek" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0xf9ff3c25, "debugfs_create_u16" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0xa44c2eb0, "dev_driver_string" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x350c7015, "devm_device_add_group" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x3b02ae0d, "irq_get_irq_data" },
	{ 0x23bc72ec, "input_mt_init_slots" },
	{ 0x55ad7703, "touchscreen_parse_properties" },
	{ 0x7f9832e7, "input_set_abs_params" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0x5792f848, "strlcpy" },
	{ 0x349cba85, "strchr" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x531366d7, "devm_input_allocate_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0x3d6a8166, "devm_add_action" },
	{ 0xde3fe2c3, "regulator_enable" },
	{ 0x433630a9, "devm_regulator_get" },
	{ 0x92cd3d03, "device_get_match_data" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x96848186, "scnprintf" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x12018465, "input_mt_report_pointer_emulation" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xb2b9020d, "touchscreen_report_pos" },
	{ 0x916944f8, "input_mt_report_slot_state" },
	{ 0x771f85fb, "input_event" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xdcb764ad, "memset" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0x2eb0acab, "simple_attr_open" },
	{ 0xe24abb5, "regulator_disable" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5ee3859, "debugfs_remove" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cedt,edt-ft5206");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5206C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506C*");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236C*");
MODULE_ALIAS("i2c:edt-ft5x06");
MODULE_ALIAS("i2c:edt-ft5506");
MODULE_ALIAS("i2c:ev-ft5726");
MODULE_ALIAS("i2c:ft6236");

MODULE_INFO(srcversion, "3BC1D9323AB6C6B3CD311B8");
