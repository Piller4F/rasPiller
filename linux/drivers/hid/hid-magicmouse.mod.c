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
	{ 0x14c6e4ce, "param_get_uint" },
	{ 0xb0b10a74, "hid_unregister_driver" },
	{ 0xdd34dae3, "__hid_register_driver" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9eee4b6f, "hid_register_report" },
	{ 0xa467f8a3, "hid_hw_start" },
	{ 0x6115ec1f, "hid_open_report" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x762a3fb4, "__hid_request" },
	{ 0x37a0cba, "kfree" },
	{ 0x8fb0cb9d, "input_alloc_absinfo" },
	{ 0x7f9832e7, "input_set_abs_params" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x23bc72ec, "input_mt_init_slots" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x44239691, "_dev_info" },
	{ 0xf864e474, "hid_hw_stop" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xfa1175cd, "input_mt_sync_frame" },
	{ 0x12018465, "input_mt_report_pointer_emulation" },
	{ 0x916944f8, "input_mt_report_slot_state" },
	{ 0x771f85fb, "input_event" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0005g*v000005ACp0000030D");
MODULE_ALIAS("hid:b0005g*v0000004Cp00000269");
MODULE_ALIAS("hid:b0003g*v000005ACp00000269");
MODULE_ALIAS("hid:b0005g*v000005ACp0000030E");
MODULE_ALIAS("hid:b0005g*v0000004Cp00000265");
MODULE_ALIAS("hid:b0003g*v000005ACp00000265");

MODULE_INFO(srcversion, "E63209A7CC263B066D6F366");
