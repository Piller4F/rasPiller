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
	{ 0xb0b10a74, "hid_unregister_driver" },
	{ 0x551ab123, "class_destroy" },
	{ 0xdd34dae3, "__hid_register_driver" },
	{ 0x42824447, "__class_create" },
	{ 0x6b64b4a8, "roccat_connect" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa467f8a3, "hid_hw_start" },
	{ 0x6115ec1f, "hid_open_report" },
	{ 0x8c9e3716, "usb_hid_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2f622ea1, "roccat_disconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0xf864e474, "hid_hw_stop" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3e4427c8, "roccat_report_event" },
};

MODULE_INFO(depends, "hid-roccat");

MODULE_ALIAS("hid:b0003g*v00001E7Dp00002CED");

MODULE_INFO(srcversion, "2FD6F9B7A5F07C1054B5174");
