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
	{ 0xd103296d, "kobject_put" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6fe8451e, "device_remove_file" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x6115ec1f, "hid_open_report" },
	{ 0x98cf60b3, "strlen" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xc5c24f39, "led_trigger_event" },
	{ 0x8fb0cb9d, "input_alloc_absinfo" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9fd9723a, "sysfs_create_files" },
	{ 0x478fbcb6, "power_supply_powers" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x762a3fb4, "__hid_request" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa4d817fa, "devm_led_trigger_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x54bd79d9, "sysfs_remove_group" },
	{ 0x37ebf39e, "devm_kasprintf" },
	{ 0xcc023c02, "hid_input_report" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe0f91e74, "kobject_create_and_add" },
	{ 0xb17e2653, "hid_report_raw_event" },
	{ 0x7f9832e7, "input_set_abs_params" },
	{ 0xc6cb465a, "__kfifo_max_r" },
	{ 0x655ce997, "power_supply_changed" },
	{ 0x771f85fb, "input_event" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xbf629583, "devm_led_classdev_register_ext" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x86baf6a0, "power_supply_get_drvdata" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xef735b85, "sysfs_create_group" },
	{ 0x74ef0c0c, "devres_open_group" },
	{ 0xc5dbd270, "hid_hw_close" },
	{ 0x70b03a70, "__devres_alloc_node" },
	{ 0x5792f848, "strlcpy" },
	{ 0xcef6dead, "hid_hw_open" },
	{ 0x3d632891, "input_set_capability" },
	{ 0x8c9e3716, "usb_hid_driver" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf51c0f66, "hid_compare_device_paths" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x23bc72ec, "input_mt_init_slots" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xa353aef4, "device_create_file" },
	{ 0x3d6a8166, "devm_add_action" },
	{ 0x9cb9a01, "hid_alloc_report_buf" },
	{ 0x44239691, "_dev_info" },
	{ 0x23261909, "hid_field_extract" },
	{ 0xc3d18b3, "hidinput_calc_abs_res" },
	{ 0xce4e47b6, "__kfifo_skip_r" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0xd6011851, "input_free_device" },
	{ 0x3955fcf6, "__kfifo_in_r" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xf864e474, "hid_hw_stop" },
	{ 0x12d5b817, "devres_add" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x6b8dbdb2, "devm_power_supply_register" },
	{ 0x26395768, "input_mt_get_slot_by_key" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x531366d7, "devm_input_allocate_device" },
	{ 0x916944f8, "input_mt_report_slot_state" },
	{ 0xdd34dae3, "__hid_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xfa1175cd, "input_mt_sync_frame" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xa467f8a3, "hid_hw_start" },
	{ 0xb0b10a74, "hid_unregister_driver" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x9c4ea780, "devres_close_group" },
	{ 0xcb603718, "devres_release_group" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x33fcf44a, "__kfifo_out_r" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g0101v0000056Ap00000000");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000003");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000010");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000011");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000012");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000013");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000014");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000015");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000016");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000017");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000018");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000019");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000020");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000021");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000022");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000023");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000024");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000026");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000027");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000028");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000029");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000002A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000030");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000031");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000032");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000033");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000034");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000035");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000037");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000038");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000039");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000003F");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000041");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000042");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000043");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000044");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000045");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000047");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000057");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000059");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000005B");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000005D");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000005E");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000060");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000061");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000062");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000063");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000064");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000065");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000069");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000006A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000006B");
MODULE_ALIAS("hid:b0005g0101v0000056Ap00000081");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000084");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000090");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000093");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000094");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000097");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000009A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000009F");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B0");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B1");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B2");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B3");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B4");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B5");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B7");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B8");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B9");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000BA");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000BB");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000BC");
MODULE_ALIAS("hid:b0005g0101v0000056Ap000000BD");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C0");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C2");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C4");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C5");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C6");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C7");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000CC");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000CE");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D0");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D1");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D2");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D3");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D4");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D5");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D6");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D7");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D8");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000DA");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000DB");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000DD");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000DE");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000DF");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000E2");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000E3");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000E5");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000E6");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000EC");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000ED");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000EF");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000F0");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000F4");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000F6");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000F8");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000FA");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000FB");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000100");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000101");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000010D");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000010E");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000010F");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000116");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000012C");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000300");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000301");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000302");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000303");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000304");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000307");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000309");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000030A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000030C");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000030E");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000314");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000315");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000317");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000318");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000319");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000323");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000325");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000326");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000032A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000032B");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000032C");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000032F");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000331");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000333");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000335");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000336");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000033B");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000033C");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000033D");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000033E");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000343");
MODULE_ALIAS("hid:b0005g0101v0000056Ap00000360");
MODULE_ALIAS("hid:b0005g0101v0000056Ap00000361");
MODULE_ALIAS("hid:b0005g0101v0000056Ap00000377");
MODULE_ALIAS("hid:b0005g0101v0000056Ap00000379");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000037A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000037B");
MODULE_ALIAS("hid:b0005g0101v0000056Ap00000393");
MODULE_ALIAS("hid:b0005g0101v0000056Ap000003C6");
MODULE_ALIAS("hid:b0005g0101v0000056Ap000003C8");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00004001");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00004004");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00005000");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00005002");
MODULE_ALIAS("hid:b0003g*v000017EFp00006004");
MODULE_ALIAS("hid:b0003g0101v0000056Ap*");
MODULE_ALIAS("hid:b0018g0101v0000056Ap*");
MODULE_ALIAS("hid:b0005g0101v0000056Ap*");

MODULE_INFO(srcversion, "531D5763005B66F14DC3DD4");