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
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x69f4ec3c, "w1_unregister_family" },
	{ 0xd613272c, "w1_register_family" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5a6e6e6f, "power_supply_register" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x3ef339, "_dev_notice" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x45557ef1, "power_supply_am_i_supplied" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x655ce997, "power_supply_changed" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x86baf6a0, "power_supply_get_drvdata" },
	{ 0x4923ba39, "power_supply_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc8216a8e, "w1_write_block" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd311292d, "w1_read_block" },
	{ 0xdc46b475, "w1_write_8" },
	{ 0xbb99ae8c, "w1_reset_select_slave" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "10D41588D583C35DD8B738E");
