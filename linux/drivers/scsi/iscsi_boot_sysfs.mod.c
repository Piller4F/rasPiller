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
	{ 0xd103296d, "kobject_put" },
	{ 0x1901bc2d, "kset_create_and_add" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x683f20ea, "kobject_uevent" },
	{ 0x54bd79d9, "sysfs_remove_group" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xdadb7725, "firmware_kobj" },
	{ 0xef735b85, "sysfs_create_group" },
	{ 0xc438e3f9, "kobject_init_and_add" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x64565224, "kset_unregister" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C20997ECCE1CF436DF99F29");
