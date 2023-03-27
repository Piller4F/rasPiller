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
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x44239691, "_dev_info" },
	{ 0x24d079af, "i2c_mux_add_adapter" },
	{ 0x7a5dffba, "i2c_mux_alloc" },
	{ 0xe126db3, "__regmap_init" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x10d2d1ae, "__i2c_transfer" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8733236, "intlog10" },
	{ 0xea764101, "regmap_bulk_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfb8880, "regmap_bulk_write" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0x37a0cba, "kfree" },
	{ 0xf48b1907, "regmap_exit" },
	{ 0x97eb7767, "i2c_mux_del_adapters" },
};

MODULE_INFO(depends, "i2c-mux,dvb-core");

MODULE_ALIAS("i2c:rtl2830");

MODULE_INFO(srcversion, "A815B8365BAF9E8559A3677");
