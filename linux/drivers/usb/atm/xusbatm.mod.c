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
	{ 0xbf2da18a, "param_array_ops" },
	{ 0xa97d7d0a, "usbatm_usb_disconnect" },
	{ 0xe780e06a, "param_ops_ushort" },
	{ 0xa787a109, "param_ops_byte" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x28537419, "usb_set_interface" },
	{ 0xecd30577, "usb_driver_claim_interface" },
	{ 0x7e5f8713, "usb_altnum_to_altsetting" },
	{ 0x7c45c7f8, "usb_driver_release_interface" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x26021e7f, "usbatm_usb_probe" },
};

MODULE_INFO(depends, "usbatm");


MODULE_INFO(srcversion, "68F6109825DE6FE81708C65");
