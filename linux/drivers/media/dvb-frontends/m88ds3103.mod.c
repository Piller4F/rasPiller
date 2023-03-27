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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x24d079af, "i2c_mux_add_adapter" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0x9a5ca6a7, "regmap_multi_reg_write" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0x97eb7767, "i2c_mux_del_adapters" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0xea764101, "regmap_bulk_read" },
	{ 0xfb8880, "regmap_bulk_write" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0xdd64e639, "strscpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x7a5dffba, "i2c_mux_alloc" },
	{ 0x6e1fa6b9, "i2c_new_client_device" },
	{ 0xee25a3b1, "i2c_unregister_device" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x44239691, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0xc8a6ce1e, "i2c_new_dummy_device" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x10d2d1ae, "__i2c_transfer" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8733236, "intlog10" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0xf89a697a, "regmap_write" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "i2c-mux,dvb-core,regmap-i2c");

MODULE_ALIAS("i2c:m88ds3103");
MODULE_ALIAS("i2c:m88rs6000");
MODULE_ALIAS("i2c:m88ds3103b");

MODULE_INFO(srcversion, "AB8BD0C1D06D35C6D1491EE");
