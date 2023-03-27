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
	{ 0x163f4a3f, "_dev_err" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x23bc72ec, "input_mt_init_slots" },
	{ 0x7f9832e7, "input_set_abs_params" },
	{ 0xfe990052, "gpio_free" },
	{ 0xf28855b, "gpiod_direction_input" },
	{ 0x9ddce221, "gpiod_set_raw_value" },
	{ 0xa75efb1c, "gpiod_direction_output_raw" },
	{ 0x3a109e75, "gpio_to_desc" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x95fc5f46, "of_get_named_gpio_flags" },
	{ 0x531366d7, "devm_input_allocate_device" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x12018465, "input_mt_report_pointer_emulation" },
	{ 0x916944f8, "input_mt_report_slot_state" },
	{ 0x771f85fb, "input_event" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ceeti,egalax_ts");
MODULE_ALIAS("of:N*T*Ceeti,egalax_tsC*");
MODULE_ALIAS("i2c:egalax_ts");

MODULE_INFO(srcversion, "C757A10FF0D460470DAE851");
