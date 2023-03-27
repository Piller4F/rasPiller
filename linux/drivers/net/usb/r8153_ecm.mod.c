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
	{ 0x3e25742e, "usbnet_resume" },
	{ 0xd834ca5f, "usbnet_suspend" },
	{ 0x18d743f7, "usbnet_disconnect" },
	{ 0x50704007, "usbnet_cdc_status" },
	{ 0x57d2679, "usbnet_manage_power" },
	{ 0x8acd93a4, "usbnet_cdc_unbind" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xde6ca39a, "usbnet_probe" },
	{ 0x7805bbf8, "rtl8152_get_version" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1ee6ef1e, "usbnet_write_cmd" },
	{ 0xac34396b, "usbnet_read_cmd" },
	{ 0x80df85a9, "usbnet_cdc_bind" },
};

MODULE_INFO(depends, "cdc_ether");

MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp721Ed*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "0536198173B079922A4080B");
