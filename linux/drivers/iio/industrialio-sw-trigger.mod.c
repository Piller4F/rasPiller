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
	{ 0xade76516, "configfs_register_default_group" },
	{ 0xc3979f0c, "iio_configfs_subsys" },
	{ 0x33164e2b, "config_item_put" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1acd7981, "module_put" },
	{ 0xbab40bd8, "config_item_set_name" },
	{ 0x92997ed8, "_printk" },
	{ 0x39a39d0, "configfs_unregister_default_group" },
	{ 0x68173019, "try_module_get" },
};

MODULE_INFO(depends, "industrialio-configfs");


MODULE_INFO(srcversion, "79B5A88BE0FE12CBDD00B5F");
