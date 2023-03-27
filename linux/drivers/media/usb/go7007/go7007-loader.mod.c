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
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xdd2fd59c, "cypress_load_firmware" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0x44239691, "_dev_info" },
};

MODULE_INFO(depends, "cypress_firmware");

MODULE_ALIAS("usb:v1943pA250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p6666d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p6668d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "ADA02ECD50AB16F7BB06503");
