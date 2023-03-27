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
	{ 0x27339f09, "param_ops_int" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0xdbeba628, "i2c_transfer" },
	{ 0xdd64e639, "strscpy" },
	{ 0xffb7c514, "ida_free" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x44239691, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:dtt7579");
MODULE_ALIAS("i2c:dtt759x");
MODULE_ALIAS("i2c:z201");
MODULE_ALIAS("i2c:unknown_1");
MODULE_ALIAS("i2c:tua6010xs");
MODULE_ALIAS("i2c:env57h1xd5");
MODULE_ALIAS("i2c:tua6034");
MODULE_ALIAS("i2c:tda665x");
MODULE_ALIAS("i2c:tded4");
MODULE_ALIAS("i2c:tdhu2");
MODULE_ALIAS("i2c:tbmv");
MODULE_ALIAS("i2c:sd1878_tda8261");
MODULE_ALIAS("i2c:opera1");
MODULE_ALIAS("i2c:dtos403ih102a");
MODULE_ALIAS("i2c:tdtc9251dh0");
MODULE_ALIAS("i2c:tbdu18132");
MODULE_ALIAS("i2c:tbmu24112");
MODULE_ALIAS("i2c:tdee4");
MODULE_ALIAS("i2c:dtt7520x");
MODULE_ALIAS("i2c:tua6034_friio");
MODULE_ALIAS("i2c:tda665x_earthpt1");

MODULE_INFO(srcversion, "D87E9275AFFA329B0532114");
