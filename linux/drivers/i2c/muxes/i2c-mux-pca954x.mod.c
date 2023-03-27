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
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xe582db1e, "__i2c_smbus_xfer" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x44239691, "_dev_info" },
	{ 0xa353aef4, "device_create_file" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x24d079af, "i2c_mux_add_adapter" },
	{ 0x5f3babe3, "irq_set_chip_and_handler_name" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x283d2cbc, "irq_create_mapping_affinity" },
	{ 0x912dc8e6, "handle_simple_irq" },
	{ 0xc37d5485, "__irq_domain_add" },
	{ 0x18285954, "irq_domain_simple_ops" },
	{ 0xa387f57e, "device_property_present" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x18e442e, "i2c_smbus_write_byte" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0x6678244f, "i2c_get_device_id" },
	{ 0x92cd3d03, "device_get_match_data" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0x7a5dffba, "i2c_mux_alloc" },
	{ 0x6fe8451e, "device_remove_file" },
	{ 0x97eb7767, "i2c_mux_del_adapters" },
	{ 0xaf21f0d1, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xbd86ca3b, "__irq_resolve_mapping" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x6e3bfe2e, "i2c_smbus_read_byte" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("of:N*T*Cnxp,pca9540");
MODULE_ALIAS("of:N*T*Cnxp,pca9540C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9542");
MODULE_ALIAS("of:N*T*Cnxp,pca9542C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9543");
MODULE_ALIAS("of:N*T*Cnxp,pca9543C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9544");
MODULE_ALIAS("of:N*T*Cnxp,pca9544C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9545");
MODULE_ALIAS("of:N*T*Cnxp,pca9545C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9546");
MODULE_ALIAS("of:N*T*Cnxp,pca9546C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9547");
MODULE_ALIAS("of:N*T*Cnxp,pca9547C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9548");
MODULE_ALIAS("of:N*T*Cnxp,pca9548C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9846");
MODULE_ALIAS("of:N*T*Cnxp,pca9846C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9847");
MODULE_ALIAS("of:N*T*Cnxp,pca9847C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9848");
MODULE_ALIAS("of:N*T*Cnxp,pca9848C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9849");
MODULE_ALIAS("of:N*T*Cnxp,pca9849C*");
MODULE_ALIAS("i2c:pca9540");
MODULE_ALIAS("i2c:pca9542");
MODULE_ALIAS("i2c:pca9543");
MODULE_ALIAS("i2c:pca9544");
MODULE_ALIAS("i2c:pca9545");
MODULE_ALIAS("i2c:pca9546");
MODULE_ALIAS("i2c:pca9547");
MODULE_ALIAS("i2c:pca9548");
MODULE_ALIAS("i2c:pca9846");
MODULE_ALIAS("i2c:pca9847");
MODULE_ALIAS("i2c:pca9848");
MODULE_ALIAS("i2c:pca9849");

MODULE_INFO(srcversion, "C64C38DB36FB1F336130045");
