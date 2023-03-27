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
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0xa6257a2f, "complete" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xb0bbcb9a, "dev_err_probe" },
	{ 0x925693e8, "i2c_add_adapter" },
	{ 0xf1128625, "of_device_get_match_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7606362, "platform_get_irq" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc5604800, "clk_set_rate_exclusive" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0x51b872e6, "devm_clk_register" },
	{ 0xe20e5fbd, "clk_hw_register_clkdev" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x86cd1836, "devm_clk_get" },
	{ 0x7faaff71, "devm_ioremap_resource" },
	{ 0x5ff38fa7, "platform_get_resource" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x92997ed8, "_printk" },
	{ 0xeb8454c4, "i2c_del_adapter" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xacb4d88c, "clk_rate_exclusive_put" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-i2cC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2cC*");

MODULE_INFO(srcversion, "8E410C86977114B9A6294D4");
