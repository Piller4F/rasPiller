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
	{ 0xf9a482f9, "msleep" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0xb7ae0cba, "snd_soc_component_update_bits" },
	{ 0x8166570, "snd_soc_info_enum_double" },
	{ 0x6bf72fbe, "snd_soc_put_volsw_range" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x16bc1b0f, "snd_soc_info_volsw_range" },
	{ 0xfd2a211f, "snd_soc_get_volsw_range" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x410839b6, "snd_soc_unregister_component" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x3d8ee7cc, "snd_soc_get_enum_double" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0x92997ed8, "_printk" },
	{ 0x3bfaf863, "devm_snd_soc_register_component" },
	{ 0x67ce7ef7, "snd_soc_component_write" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xab53e96d, "snd_soc_put_enum_double" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ba9b8b7, "gpiod_to_irq" },
	{ 0x6f37604, "snd_soc_component_test_bits" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0xfd457b8, "gpiod_get_value_cansleep" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cma,ma120x0p");
MODULE_ALIAS("of:N*T*Cma,ma120x0pC*");
MODULE_ALIAS("i2c:ma120x0p");

MODULE_INFO(srcversion, "6F026FA39B746E8CF0451E1");
