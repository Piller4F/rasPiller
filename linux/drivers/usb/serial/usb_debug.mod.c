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
	{ 0x779bad66, "usb_serial_deregister_drivers" },
	{ 0xd0bf693c, "usb_serial_register_drivers" },
	{ 0x7e385584, "usb_serial_generic_write" },
	{ 0x3a9a80d5, "usb_serial_generic_process_read_urb" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v0525p127Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D6Bp0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D6Bp0011d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "50DB587AC68ABC29779D36A");
