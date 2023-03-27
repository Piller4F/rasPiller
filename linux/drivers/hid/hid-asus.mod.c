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
	{ 0xb0b10a74, "hid_unregister_driver" },
	{ 0xdd34dae3, "__hid_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfa1175cd, "input_mt_sync_frame" },
	{ 0x916944f8, "input_mt_report_slot_state" },
	{ 0x655ce997, "power_supply_changed" },
	{ 0x771f85fb, "input_event" },
	{ 0x8c1398da, "devm_kfree" },
	{ 0x3d632891, "input_set_capability" },
	{ 0xbf629583, "devm_led_classdev_register_ext" },
	{ 0x23bc72ec, "input_mt_init_slots" },
	{ 0x8fb0cb9d, "input_alloc_absinfo" },
	{ 0x7f9832e7, "input_set_abs_params" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x78ddb76b, "dmi_match" },
	{ 0xa467f8a3, "hid_hw_start" },
	{ 0x6115ec1f, "hid_open_report" },
	{ 0x478fbcb6, "power_supply_powers" },
	{ 0x6b8dbdb2, "devm_power_supply_register" },
	{ 0x37ebf39e, "devm_kasprintf" },
	{ 0x8c9e3716, "usb_hid_driver" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x86baf6a0, "power_supply_get_drvdata" },
	{ 0xf864e474, "hid_hw_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x4829a47e, "memcpy" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x44239691, "_dev_info" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x66b4cc41, "kmemdup" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0018g*v00000B05p00008585");
MODULE_ALIAS("hid:b0018g*v00000B05p00000101");
MODULE_ALIAS("hid:b0003g*v00000B05p00001854");
MODULE_ALIAS("hid:b0003g*v00000B05p00001837");
MODULE_ALIAS("hid:b0003g*v00000B05p00001822");
MODULE_ALIAS("hid:b0003g*v00000B05p00001869");
MODULE_ALIAS("hid:b0003g*v00000B05p00001866");
MODULE_ALIAS("hid:b0003g*v00000B05p000019B6");
MODULE_ALIAS("hid:b0003g*v00000B05p0000196B");
MODULE_ALIAS("hid:b0003g*v00000B05p000017E0");
MODULE_ALIAS("hid:b0003g*v00000B05p00001807");
MODULE_ALIAS("hid:b0003g*v000004F2p00001125");
MODULE_ALIAS("hid:b0003g*v0000062Ap00005110");
MODULE_ALIAS("hid:b0003g*v00000C45p00005112");
MODULE_ALIAS("hid:b0005g*v00000B05p00008502");
MODULE_ALIAS("hid:b0003g*v0000048Dp0000CE50");
MODULE_ALIAS("hid:b0003g0001v00000B05p0000183D");

MODULE_INFO(srcversion, "C8F42FEF082EDA0096A64DF");
