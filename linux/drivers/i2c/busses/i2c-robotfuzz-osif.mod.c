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
	{ 0x163f4a3f, "_dev_err" },
	{ 0x44239691, "_dev_info" },
	{ 0x925693e8, "i2c_add_adapter" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0xeb8454c4, "i2c_del_adapter" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1964p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A40AFCBD9274E5BFE61B4D6");
