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
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x912dc8e6, "handle_simple_irq" },
	{ 0xe5c61ec4, "devm_gpiochip_add_data_with_key" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa198012e, "regcache_mark_dirty" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0x44239691, "_dev_info" },
	{ 0xb0bbcb9a, "dev_err_probe" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0x92cd3d03, "device_get_match_data" },
	{ 0xde3fe2c3, "regulator_enable" },
	{ 0x433630a9, "devm_regulator_get" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xa720db9f, "regcache_sync_region" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xbd86ca3b, "__irq_resolve_mapping" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xf6fc8791, "__bitmap_xor" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x7c173634, "__bitmap_complement" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x18345b8e, "__bitmap_replace" },
	{ 0xea764101, "regmap_bulk_read" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfb8880, "regmap_bulk_write" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x97df9f42, "gpiochip_get_data" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xe24abb5, "regulator_disable" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cnxp,pca6416");
MODULE_ALIAS("of:N*T*Cnxp,pca6416C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9505");
MODULE_ALIAS("of:N*T*Cnxp,pca9505C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9506");
MODULE_ALIAS("of:N*T*Cnxp,pca9506C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9534");
MODULE_ALIAS("of:N*T*Cnxp,pca9534C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9535");
MODULE_ALIAS("of:N*T*Cnxp,pca9535C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9536");
MODULE_ALIAS("of:N*T*Cnxp,pca9536C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9537");
MODULE_ALIAS("of:N*T*Cnxp,pca9537C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9538");
MODULE_ALIAS("of:N*T*Cnxp,pca9538C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9539");
MODULE_ALIAS("of:N*T*Cnxp,pca9539C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9554");
MODULE_ALIAS("of:N*T*Cnxp,pca9554C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9555");
MODULE_ALIAS("of:N*T*Cnxp,pca9555C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9556");
MODULE_ALIAS("of:N*T*Cnxp,pca9556C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9557");
MODULE_ALIAS("of:N*T*Cnxp,pca9557C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9574");
MODULE_ALIAS("of:N*T*Cnxp,pca9574C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9575");
MODULE_ALIAS("of:N*T*Cnxp,pca9575C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9698");
MODULE_ALIAS("of:N*T*Cnxp,pca9698C*");
MODULE_ALIAS("of:N*T*Cnxp,pcal6416");
MODULE_ALIAS("of:N*T*Cnxp,pcal6416C*");
MODULE_ALIAS("of:N*T*Cnxp,pcal6524");
MODULE_ALIAS("of:N*T*Cnxp,pcal6524C*");
MODULE_ALIAS("of:N*T*Cnxp,pcal9535");
MODULE_ALIAS("of:N*T*Cnxp,pcal9535C*");
MODULE_ALIAS("of:N*T*Cnxp,pcal9554b");
MODULE_ALIAS("of:N*T*Cnxp,pcal9554bC*");
MODULE_ALIAS("of:N*T*Cnxp,pcal9555a");
MODULE_ALIAS("of:N*T*Cnxp,pcal9555aC*");
MODULE_ALIAS("of:N*T*Cmaxim,max7310");
MODULE_ALIAS("of:N*T*Cmaxim,max7310C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7312");
MODULE_ALIAS("of:N*T*Cmaxim,max7312C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7313");
MODULE_ALIAS("of:N*T*Cmaxim,max7313C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7315");
MODULE_ALIAS("of:N*T*Cmaxim,max7315C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7318");
MODULE_ALIAS("of:N*T*Cmaxim,max7318C*");
MODULE_ALIAS("of:N*T*Cti,pca6107");
MODULE_ALIAS("of:N*T*Cti,pca6107C*");
MODULE_ALIAS("of:N*T*Cti,pca9536");
MODULE_ALIAS("of:N*T*Cti,pca9536C*");
MODULE_ALIAS("of:N*T*Cti,tca6408");
MODULE_ALIAS("of:N*T*Cti,tca6408C*");
MODULE_ALIAS("of:N*T*Cti,tca6416");
MODULE_ALIAS("of:N*T*Cti,tca6416C*");
MODULE_ALIAS("of:N*T*Cti,tca6424");
MODULE_ALIAS("of:N*T*Cti,tca6424C*");
MODULE_ALIAS("of:N*T*Cti,tca9539");
MODULE_ALIAS("of:N*T*Cti,tca9539C*");
MODULE_ALIAS("of:N*T*Connn,cat9554");
MODULE_ALIAS("of:N*T*Connn,cat9554C*");
MODULE_ALIAS("of:N*T*Connn,pca9654");
MODULE_ALIAS("of:N*T*Connn,pca9654C*");
MODULE_ALIAS("of:N*T*Connn,pca9655");
MODULE_ALIAS("of:N*T*Connn,pca9655C*");
MODULE_ALIAS("of:N*T*Cexar,xra1202");
MODULE_ALIAS("of:N*T*Cexar,xra1202C*");
MODULE_ALIAS("acpi*:INT3491:*");
MODULE_ALIAS("i2c:pca6416");
MODULE_ALIAS("i2c:pca9505");
MODULE_ALIAS("i2c:pca9506");
MODULE_ALIAS("i2c:pca9534");
MODULE_ALIAS("i2c:pca9535");
MODULE_ALIAS("i2c:pca9536");
MODULE_ALIAS("i2c:pca9537");
MODULE_ALIAS("i2c:pca9538");
MODULE_ALIAS("i2c:pca9539");
MODULE_ALIAS("i2c:pca9554");
MODULE_ALIAS("i2c:pca9555");
MODULE_ALIAS("i2c:pca9556");
MODULE_ALIAS("i2c:pca9557");
MODULE_ALIAS("i2c:pca9574");
MODULE_ALIAS("i2c:pca9575");
MODULE_ALIAS("i2c:pca9698");
MODULE_ALIAS("i2c:pcal6416");
MODULE_ALIAS("i2c:pcal6524");
MODULE_ALIAS("i2c:pcal9535");
MODULE_ALIAS("i2c:pcal9554b");
MODULE_ALIAS("i2c:pcal9555a");
MODULE_ALIAS("i2c:max7310");
MODULE_ALIAS("i2c:max7312");
MODULE_ALIAS("i2c:max7313");
MODULE_ALIAS("i2c:max7315");
MODULE_ALIAS("i2c:max7318");
MODULE_ALIAS("i2c:pca6107");
MODULE_ALIAS("i2c:tca6408");
MODULE_ALIAS("i2c:tca6416");
MODULE_ALIAS("i2c:tca6424");
MODULE_ALIAS("i2c:tca9539");
MODULE_ALIAS("i2c:tca9554");
MODULE_ALIAS("i2c:xra1202");

MODULE_INFO(srcversion, "CC6C297341E6361AE4FF73A");
