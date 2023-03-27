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
	{ 0x163f4a3f, "_dev_err" },
	{ 0x44239691, "_dev_info" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf60b28de, "v4l2_i2c_subdev_init" },
	{ 0x55b0b0ab, "v4l2_ctrl_auto_cluster" },
	{ 0xb2c09ee5, "v4l2_ctrl_new_std" },
	{ 0x43f63a5, "v4l2_ctrl_handler_init_class" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0x40ce9a14, "__devm_regmap_init_i2c" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xea764101, "regmap_bulk_read" },
	{ 0xdd64e639, "strscpy" },
	{ 0xfb8880, "regmap_bulk_write" },
	{ 0xf89a697a, "regmap_write" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9e1aa3b, "v4l2_ctrl_handler_free" },
};

MODULE_INFO(depends, "videodev,regmap-i2c");

MODULE_ALIAS("i2c:e4000");

MODULE_INFO(srcversion, "01CCC01EA693DC0D44E72EC");
