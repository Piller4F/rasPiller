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
	{ 0x18d743f7, "usbnet_disconnect" },
	{ 0xde6ca39a, "usbnet_probe" },
	{ 0x3e2dd700, "cdc_ncm_tx_fixup" },
	{ 0xed42cc4, "cdc_ncm_rx_fixup" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xb0a6d269, "usb_autopm_put_interface" },
	{ 0x3ec6f939, "usb_autopm_get_interface" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa36979f2, "usb_cdc_wdm_register" },
	{ 0xa595a106, "cdc_ncm_bind_common" },
	{ 0xd834ca5f, "usbnet_suspend" },
	{ 0x3e25742e, "usbnet_resume" },
	{ 0x4c1bab18, "cdc_ncm_unbind" },
};

MODULE_INFO(depends, "cdc_ncm,cdc-wdm");

MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip16in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip46in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip76in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc03ip16in*");

MODULE_INFO(srcversion, "76D719170C7CBE620B35580");
