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
	{ 0xbf629583, "devm_led_classdev_register_ext" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0x63848f67, "of_get_property" },
	{ 0x2bcd02e8, "irq_of_parse_and_map" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0xa1438c8f, "of_get_next_child" },
	{ 0x531366d7, "devm_input_allocate_device" },
	{ 0xf89a697a, "regmap_write" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0x44239691, "_dev_info" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x771f85fb, "input_event" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0xf538c801, "regmap_update_bits_base" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("i2c:cap1106");
MODULE_ALIAS("i2c:cap1126");
MODULE_ALIAS("i2c:cap1188");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1106");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1106C*");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1126");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1126C*");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1188");
MODULE_ALIAS("of:N*T*Cmicrochip,cap1188C*");

MODULE_INFO(srcversion, "6EC43A9AD3A14663E84A5F6");
