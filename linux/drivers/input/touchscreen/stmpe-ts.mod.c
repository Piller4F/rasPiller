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
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x91dd7033, "stmpe_reg_read" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x55ad7703, "touchscreen_parse_properties" },
	{ 0x7f9832e7, "input_set_abs_params" },
	{ 0x3d632891, "input_set_capability" },
	{ 0xa00862db, "stmpe_reg_write" },
	{ 0x4599a541, "stmpe811_adc_common_init" },
	{ 0x6cc5c4af, "stmpe_enable" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0x531366d7, "devm_input_allocate_device" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xa2a96a86, "platform_get_irq_byname" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x771f85fb, "input_event" },
	{ 0xb2b9020d, "touchscreen_report_pos" },
	{ 0x6b470e82, "stmpe_block_read" },
	{ 0xba66e473, "stmpe_set_bits" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xd5919682, "stmpe_disable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cst,stmpe-ts");
MODULE_ALIAS("of:N*T*Cst,stmpe-tsC*");

MODULE_INFO(srcversion, "52A6D78295BEA306BB2E4AF");
