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
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa44c2eb0, "dev_driver_string" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x3d632891, "input_set_capability" },
	{ 0xa387f57e, "device_property_present" },
	{ 0xe4ef066b, "matrix_keypad_build_keymap" },
	{ 0x531366d7, "devm_input_allocate_device" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x52a822b4, "matrix_keypad_parse_properties" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x771f85fb, "input_event" },
	{ 0xbe2aed38, "i2c_smbus_write_byte_data" },
	{ 0x8b342d78, "i2c_smbus_read_byte_data" },
};

MODULE_INFO(depends, "matrix-keymap");

MODULE_ALIAS("of:N*T*Cti,tca8418");
MODULE_ALIAS("of:N*T*Cti,tca8418C*");
MODULE_ALIAS("i2c:tca8418");

MODULE_INFO(srcversion, "345505E234584CA55D4CD29");
