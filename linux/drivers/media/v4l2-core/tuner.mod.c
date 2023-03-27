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
	{ 0xa24f23d8, "__request_module" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x98b8a7e2, "i2c_del_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe2bd2e91, "param_ops_string" },
	{ 0x711552a2, "media_entity_pads_init" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x9618d257, "v4l2_device_unregister_subdev" },
	{ 0x66d87d38, "symbol_put_addr" },
	{ 0x28de854e, "i2c_register_driver" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xf4d6426a, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xf60b28de, "v4l2_i2c_subdev_init" },
};

MODULE_INFO(depends, "mc,videodev");

MODULE_ALIAS("i2c:tuner");

MODULE_INFO(srcversion, "6BC473D9B27A9E6FDF2279E");
