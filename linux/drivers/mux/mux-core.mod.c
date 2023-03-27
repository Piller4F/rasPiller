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
	{ 0x1bd03ce1, "class_find_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x36b6ebbf, "down_killable" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xa5a62d7e, "device_del" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0xbbc1b23a, "class_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x70b03a70, "__devres_alloc_node" },
	{ 0xbc41d96d, "device_add" },
	{ 0xac97d5fa, "__class_register" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x12d5b817, "devres_add" },
	{ 0x37a0cba, "kfree" },
	{ 0x3055489f, "device_initialize" },
	{ 0xcf2a6966, "up" },
	{ 0xb0fb36d4, "of_parse_phandle_with_args" },
	{ 0x3b1d39bb, "device_match_of_node" },
	{ 0x66c2c10f, "of_property_match_string" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "708AF91964D29E44FAACDA8");
