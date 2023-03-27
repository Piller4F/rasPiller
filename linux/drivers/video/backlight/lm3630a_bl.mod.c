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
	{ 0x3a472801, "pwm_apply_state" },
	{ 0x5e285db8, "devm_pwm_get" },
	{ 0x903e2a53, "fwnode_handle_put" },
	{ 0x25b50ab1, "fwnode_property_read_string" },
	{ 0x7a49fbe0, "fwnode_property_present" },
	{ 0x87fc0b31, "fwnode_property_read_u32_array" },
	{ 0x66d72ac, "device_get_next_child_node" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfe3469a, "devm_backlight_device_register" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x44239691, "_dev_info" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf89a697a, "regmap_write" },
};

MODULE_INFO(depends, "backlight,regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,lm3630a");
MODULE_ALIAS("of:N*T*Cti,lm3630aC*");
MODULE_ALIAS("i2c:lm3630a_bl");

MODULE_INFO(srcversion, "2C33652C736CE5D4537534A");
