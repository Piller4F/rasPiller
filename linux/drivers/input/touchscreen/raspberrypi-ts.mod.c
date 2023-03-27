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
	{ 0x163f4a3f, "_dev_err" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x8c312910, "input_set_poll_interval" },
	{ 0x40eb2ddc, "input_setup_polling" },
	{ 0x23bc72ec, "input_mt_init_slots" },
	{ 0x55ad7703, "touchscreen_parse_properties" },
	{ 0x7f9832e7, "input_set_abs_params" },
	{ 0x531366d7, "devm_input_allocate_device" },
	{ 0x63e9296, "rpi_firmware_put" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x3d6a8166, "devm_add_action" },
	{ 0xe1e570f, "dma_alloc_attrs" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0xed549a5f, "rpi_firmware_get" },
	{ 0xe49fb038, "of_get_parent" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb2b9020d, "touchscreen_report_pos" },
	{ 0xfa1175cd, "input_mt_sync_frame" },
	{ 0x916944f8, "input_mt_report_slot_state" },
	{ 0x771f85fb, "input_event" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x3919be46, "dma_free_attrs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,firmware-ts");
MODULE_ALIAS("of:N*T*Craspberrypi,firmware-tsC*");

MODULE_INFO(srcversion, "169624CB5B3290748D4826E");
