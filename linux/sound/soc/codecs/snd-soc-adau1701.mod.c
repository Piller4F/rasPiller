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
	{ 0xedc84a05, "__devm_regmap_init" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf9a482f9, "msleep" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0x3a109e75, "gpio_to_desc" },
	{ 0xf08413ee, "devm_sigmadsp_init_i2c" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfeb785f3, "snd_soc_put_volsw" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0xe97c26c4, "snd_soc_get_volsw" },
	{ 0x198e8f61, "sigmadsp_attach" },
	{ 0xb31af892, "devm_regulator_bulk_get" },
	{ 0xd8c68e76, "regulator_bulk_enable" },
	{ 0xf9994925, "of_property_read_variable_u8_array" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x1e363e0a, "sigmadsp_reset" },
	{ 0x34c2f810, "sigmadsp_setup" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xb48e5cec, "devm_gpio_request_one" },
	{ 0x9214249a, "snd_soc_info_volsw" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x32a407cc, "sigmadsp_restrict_params" },
	{ 0x26f61a7e, "regulator_bulk_disable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3bfaf863, "devm_snd_soc_register_component" },
	{ 0x95fc5f46, "of_get_named_gpio_flags" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0xa198012e, "regcache_mark_dirty" },
	{ 0x2313ab84, "gpiod_set_raw_value_cansleep" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x7958798, "regcache_sync" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-sigmadsp-i2c,snd-soc-core,snd-soc-sigmadsp");

MODULE_ALIAS("of:N*T*Cadi,adau1701");
MODULE_ALIAS("of:N*T*Cadi,adau1701C*");
MODULE_ALIAS("i2c:adau1401");
MODULE_ALIAS("i2c:adau1401a");
MODULE_ALIAS("i2c:adau1701");
MODULE_ALIAS("i2c:adau1702");

MODULE_INFO(srcversion, "189944F8B7B7C50C99A5421");
