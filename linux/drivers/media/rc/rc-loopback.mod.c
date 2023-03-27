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
	{ 0x9b6fc2a5, "rc_unregister_device" },
	{ 0x8606f399, "rc_free_device" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x3ec5ed95, "rc_register_device" },
	{ 0x2a4cf6ec, "rc_allocate_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xf446074f, "ir_raw_encode_scancode" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf21d2d67, "ir_raw_event_store" },
	{ 0xa922a3a9, "ir_raw_event_handle" },
	{ 0xcace34d9, "ir_raw_event_store_with_filter" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BAC82C865EF337E91ADBE9A");
