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
	{ 0x44239691, "_dev_info" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xe5c61ec4, "devm_gpiochip_add_data_with_key" },
	{ 0xb8cb9790, "handle_level_irq" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0x97df9f42, "gpiochip_get_data" },
	{ 0x18e442e, "i2c_smbus_write_byte" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xbd86ca3b, "__irq_resolve_mapping" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6e3bfe2e, "i2c_smbus_read_byte" },
	{ 0x163f4a3f, "_dev_err" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pcf8574");
MODULE_ALIAS("of:N*T*Cnxp,pcf8574C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf8574a");
MODULE_ALIAS("of:N*T*Cnxp,pcf8574aC*");
MODULE_ALIAS("of:N*T*Cnxp,pca8574");
MODULE_ALIAS("of:N*T*Cnxp,pca8574C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9670");
MODULE_ALIAS("of:N*T*Cnxp,pca9670C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9672");
MODULE_ALIAS("of:N*T*Cnxp,pca9672C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9674");
MODULE_ALIAS("of:N*T*Cnxp,pca9674C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf8575");
MODULE_ALIAS("of:N*T*Cnxp,pcf8575C*");
MODULE_ALIAS("of:N*T*Cnxp,pca8575");
MODULE_ALIAS("of:N*T*Cnxp,pca8575C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9671");
MODULE_ALIAS("of:N*T*Cnxp,pca9671C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9673");
MODULE_ALIAS("of:N*T*Cnxp,pca9673C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9675");
MODULE_ALIAS("of:N*T*Cnxp,pca9675C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7328");
MODULE_ALIAS("of:N*T*Cmaxim,max7328C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7329");
MODULE_ALIAS("of:N*T*Cmaxim,max7329C*");
MODULE_ALIAS("i2c:pcf8574");
MODULE_ALIAS("i2c:pcf8574a");
MODULE_ALIAS("i2c:pca8574");
MODULE_ALIAS("i2c:pca9670");
MODULE_ALIAS("i2c:pca9672");
MODULE_ALIAS("i2c:pca9674");
MODULE_ALIAS("i2c:pcf8575");
MODULE_ALIAS("i2c:pca8575");
MODULE_ALIAS("i2c:pca9671");
MODULE_ALIAS("i2c:pca9673");
MODULE_ALIAS("i2c:pca9675");
MODULE_ALIAS("i2c:max7328");
MODULE_ALIAS("i2c:max7329");

MODULE_INFO(srcversion, "3401363CD8AD33E5B8FA546");
