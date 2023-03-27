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
	{ 0x163f4a3f, "_dev_err" },
	{ 0x6b64b4a8, "roccat_connect" },
	{ 0x78f0ba5b, "roccat_common2_device_init_struct" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa467f8a3, "hid_hw_start" },
	{ 0x6115ec1f, "hid_open_report" },
	{ 0x8c9e3716, "usb_hid_driver" },
	{ 0xb840da2a, "roccat_common2_sysfs_read" },
	{ 0x1abd74c8, "roccat_common2_sysfs_write" },
	{ 0x2f622ea1, "roccat_disconnect" },
	{ 0xf864e474, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x3e4427c8, "roccat_report_event" },
};

MODULE_INFO(depends, "hid-roccat,hid-roccat-common");

MODULE_ALIAS("hid:b0003g*v00001E7Dp00003138");
MODULE_ALIAS("hid:b0003g*v00001E7Dp000031CE");
MODULE_ALIAS("hid:b0003g*v00001E7Dp00003232");

MODULE_INFO(srcversion, "FE0A0B66572C5BAA349777D");
