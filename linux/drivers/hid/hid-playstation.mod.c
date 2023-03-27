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
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xb0b10a74, "hid_unregister_driver" },
	{ 0xdd34dae3, "__hid_register_driver" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x350c7015, "devm_device_add_group" },
	{ 0x44239691, "_dev_info" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x478fbcb6, "power_supply_powers" },
	{ 0x6b8dbdb2, "devm_power_supply_register" },
	{ 0x23bc72ec, "input_mt_init_slots" },
	{ 0x8fb0cb9d, "input_alloc_absinfo" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x75464319, "input_ff_create_memless" },
	{ 0x3d632891, "input_set_capability" },
	{ 0x7f9832e7, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xcef6dead, "hid_hw_open" },
	{ 0xa467f8a3, "hid_hw_start" },
	{ 0x6115ec1f, "hid_open_report" },
	{ 0xfa1175cd, "input_mt_sync_frame" },
	{ 0x916944f8, "input_mt_report_slot_state" },
	{ 0x771f85fb, "input_event" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xf864e474, "hid_hw_stop" },
	{ 0xc5dbd270, "hid_hw_close" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x86baf6a0, "power_supply_get_drvdata" },
	{ 0x37ebf39e, "devm_kasprintf" },
	{ 0x531366d7, "devm_input_allocate_device" },
	{ 0xe783e261, "sysfs_emit" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0005g*v0000054Cp00000CE6");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000CE6");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000DF2");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000DF2");

MODULE_INFO(srcversion, "5A9590B50D6A572980C5A96");
