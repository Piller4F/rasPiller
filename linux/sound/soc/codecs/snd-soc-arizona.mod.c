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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x8ec3220e, "arizona_request_irq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xae0ce2ef, "__pm_runtime_idle" },
	{ 0x53c8130, "regulator_set_voltage" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0xcaab9c4b, "snd_soc_dapm_del_routes" },
	{ 0x6adf4ea7, "snd_soc_dai_active" },
	{ 0xe247157e, "regmap_raw_write" },
	{ 0xea124bd1, "gcd" },
	{ 0x842bd345, "__pm_runtime_suspend" },
	{ 0xc09992a7, "snd_soc_dapm_get_volsw" },
	{ 0x9a5ca6a7, "regmap_multi_reg_write" },
	{ 0xb0bbcb9a, "dev_err_probe" },
	{ 0xe24abb5, "regulator_disable" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0x2c2b4cc1, "_dev_crit" },
	{ 0x6a47613f, "gpiod_get_optional" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x1ddda2f4, "snd_soc_component_disable_pin" },
	{ 0x3a109e75, "gpio_to_desc" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a6bb99, "snd_soc_dapm_new_controls" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0xb7ae0cba, "snd_soc_component_update_bits" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0xe786d32a, "of_prop_next_u32" },
	{ 0xc8242f82, "snd_soc_component_enable_pin" },
	{ 0x4ec2fd68, "snd_jack_set_key" },
	{ 0x8166570, "snd_soc_info_enum_double" },
	{ 0xab001ea3, "snd_soc_dapm_add_routes" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x293ea448, "snd_pcm_hw_constraint_list" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0xdfde047, "regulator_allow_bypass" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8fb6ab01, "snd_soc_dapm_put_volsw" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xb48e5cec, "devm_gpio_request_one" },
	{ 0x334bfc12, "arizona_free_irq" },
	{ 0x9214249a, "snd_soc_info_volsw" },
	{ 0x5227f347, "arizona_set_irq_wake" },
	{ 0xc4d5dcb4, "arizona_clk32k_enable" },
	{ 0x3d8ee7cc, "snd_soc_get_enum_double" },
	{ 0x433630a9, "devm_regulator_get" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc42a088c, "arizona_clk32k_disable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x62becdf4, "snd_soc_dapm_sync" },
	{ 0x67ce7ef7, "snd_soc_component_write" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xab53e96d, "snd_soc_put_enum_double" },
	{ 0x37a0cba, "kfree" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0x2313ab84, "gpiod_set_raw_value_cansleep" },
	{ 0x7d8e8ea3, "snd_soc_component_read" },
	{ 0xe6a11e2b, "snd_soc_bytes_put" },
	{ 0xd565f92f, "snd_soc_jack_report" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x6c736564, "regmap_get_val_bytes" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0x4be8383b, "snd_soc_component_force_enable_pin" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x82395752, "gpiod_put" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xa387f57e, "device_property_present" },
	{ 0xde3fe2c3, "regulator_enable" },
};

MODULE_INFO(depends, "snd-pcm,arizona,snd-soc-core,snd");


MODULE_INFO(srcversion, "2E82770A2268E70717BF9E6");
