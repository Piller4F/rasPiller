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
	{ 0x421f187c, "param_get_bool" },
	{ 0xb0b10a74, "hid_unregister_driver" },
	{ 0xdd34dae3, "__hid_register_driver" },
	{ 0xcef6dead, "hid_hw_open" },
	{ 0x18e5f27f, "hid_add_device" },
	{ 0xa467f8a3, "hid_hw_start" },
	{ 0xe9ae30fc, "hid_allocate_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x6115ec1f, "hid_open_report" },
	{ 0x478fbcb6, "power_supply_powers" },
	{ 0x5a6e6e6f, "power_supply_register" },
	{ 0x37ebf39e, "devm_kasprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x52a02b46, "param_set_bool" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9cb9a01, "hid_alloc_report_buf" },
	{ 0x655ce997, "power_supply_changed" },
	{ 0xcc023c02, "hid_input_report" },
	{ 0x771f85fb, "input_event" },
	{ 0xf864e474, "hid_hw_stop" },
	{ 0xc5dbd270, "hid_hw_close" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xce714e14, "hid_destroy_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x44239691, "_dev_info" },
	{ 0x1b396629, "input_unregister_device" },
	{ 0x4923ba39, "power_supply_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x86baf6a0, "power_supply_get_drvdata" },
	{ 0x92997ed8, "_printk" },
	{ 0xd6011851, "input_free_device" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x8fb0cb9d, "input_alloc_absinfo" },
	{ 0x7f9832e7, "input_set_abs_params" },
	{ 0x3d632891, "input_set_capability" },
	{ 0x6f140995, "input_allocate_device" },
	{ 0x5495392, "hid_debug" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xbad9fd19, "hid_parse_report" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000028DEp00001102");
MODULE_ALIAS("hid:b0003g*v000028DEp00001142");

MODULE_INFO(srcversion, "554EE9374A82B039346207E");
