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
	{ 0x13445e92, "param_ops_bool" },
	{ 0xb0b10a74, "hid_unregister_driver" },
	{ 0xdd34dae3, "__hid_register_driver" },
	{ 0xa353aef4, "device_create_file" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x4528c1b8, "input_ff_create" },
	{ 0x8c1398da, "devm_kfree" },
	{ 0x6626afca, "down" },
	{ 0xcf2a6966, "up" },
	{ 0xa467f8a3, "hid_hw_start" },
	{ 0xef735b85, "sysfs_create_group" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6115ec1f, "hid_open_report" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xd6011851, "input_free_device" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x531366d7, "devm_input_allocate_device" },
	{ 0x478fbcb6, "power_supply_powers" },
	{ 0x6b8dbdb2, "devm_power_supply_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb41e3eae, "devm_kmemdup" },
	{ 0x37ebf39e, "devm_kasprintf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x8b13a8b8, "hid_snto32" },
	{ 0x23261909, "hid_field_extract" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb17e2653, "hid_report_raw_event" },
	{ 0x655ce997, "power_supply_changed" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x92997ed8, "_printk" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdcb764ad, "memset" },
	{ 0x5495392, "hid_debug" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x23bc72ec, "input_mt_init_slots" },
	{ 0x3d632891, "input_set_capability" },
	{ 0x8fb0cb9d, "input_alloc_absinfo" },
	{ 0x7f9832e7, "input_set_abs_params" },
	{ 0xc310b981, "strnstr" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6fe8451e, "device_remove_file" },
	{ 0x44239691, "_dev_info" },
	{ 0x96848186, "scnprintf" },
	{ 0x5a921311, "strncmp" },
	{ 0x86baf6a0, "power_supply_get_drvdata" },
	{ 0xc5dbd270, "hid_hw_close" },
	{ 0xcef6dead, "hid_hw_open" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf864e474, "hid_hw_stop" },
	{ 0x54bd79d9, "sysfs_remove_group" },
	{ 0xfa1175cd, "input_mt_sync_frame" },
	{ 0x916944f8, "input_mt_report_slot_state" },
	{ 0x26395768, "input_mt_get_slot_by_key" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xcdc86b55, "sched_clock" },
	{ 0x771f85fb, "input_event" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g0102v0000046Dp00004011");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004101");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B00C");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00001017");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004010");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004050");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004007");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000402D");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000101B");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000406D");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000405E");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000404A");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004072");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B013");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B018");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B01F");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000406A");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004041");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004060");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004071");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004069");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004082");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000101A");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004024");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004002");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B305");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B309");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B30B");
MODULE_ALIAS("hid:b0003g0102v0000046Dp*");
MODULE_ALIAS("hid:b0003g0104v0000046Dp00000049");
MODULE_ALIAS("hid:b0003g0104v0000046Dp00000057");
MODULE_ALIAS("hid:b0003g0104v0000046Dp0000005C");
MODULE_ALIAS("hid:b0003g0104v0000046Dp000000FE");
MODULE_ALIAS("hid:b0003g0104v0000046Dp*");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C082");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C087");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C090");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C081");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C086");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C091");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C262");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C088");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B305");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B309");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B30B");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B008");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B012");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B01D");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B01E");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B023");

MODULE_INFO(srcversion, "C480F782BDEB42D9AC28E4D");
