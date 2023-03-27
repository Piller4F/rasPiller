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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x903e2a53, "fwnode_handle_put" },
	{ 0x683f20ea, "kobject_uevent" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7a49fbe0, "fwnode_property_present" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x6c289ab5, "device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x1acd7981, "module_put" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd00806a1, "device_match_fwnode" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2a5fa761, "fwnode_get_parent" },
	{ 0xd7fe9e62, "fwnode_connection_find_match" },
	{ 0x37a0cba, "kfree" },
	{ 0xf496e46, "dev_fwnode" },
	{ 0x551ab123, "class_destroy" },
	{ 0xe71535d7, "device_unregister" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0x42824447, "__class_create" },
	{ 0x68173019, "try_module_get" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7F2E2B287CC190D2D26A478");
