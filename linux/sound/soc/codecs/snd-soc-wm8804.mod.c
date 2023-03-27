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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xae0ce2ef, "__pm_runtime_idle" },
	{ 0x2c761af5, "__pm_runtime_disable" },
	{ 0xb41f770a, "snd_soc_dapm_get_enum_double" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0xb7ae0cba, "snd_soc_component_update_bits" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0xb31af892, "devm_regulator_bulk_get" },
	{ 0xd8c68e76, "regulator_bulk_enable" },
	{ 0x8166570, "snd_soc_info_enum_double" },
	{ 0xce17118b, "snd_soc_dapm_kcontrol_dapm" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x44239691, "_dev_info" },
	{ 0x26f61a7e, "regulator_bulk_disable" },
	{ 0x373fb346, "pm_runtime_enable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x4f4a7a26, "devm_regulator_register_notifier" },
	{ 0x3bfaf863, "devm_snd_soc_register_component" },
	{ 0xcc018b98, "__pm_runtime_set_status" },
	{ 0x67ce7ef7, "snd_soc_component_write" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xa198012e, "regcache_mark_dirty" },
	{ 0x6f37604, "snd_soc_component_test_bits" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0x7d8e8ea3, "snd_soc_component_read" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x7958798, "regcache_sync" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "187E51008098C4CF2E1B827");
