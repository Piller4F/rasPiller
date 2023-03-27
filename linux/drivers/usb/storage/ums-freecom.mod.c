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
	{ 0xf9a482f9, "msleep" },
	{ 0x6112d5d9, "usb_stor_bulk_transfer_buf" },
	{ 0xede730c1, "usb_stor_post_reset" },
	{ 0x90585d20, "usb_stor_control_msg" },
	{ 0x5b07ca5d, "usb_stor_disconnect" },
	{ 0xdcb764ad, "memset" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xff737d1c, "usb_stor_probe2" },
	{ 0x8bdd5048, "usb_stor_host_template_init" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb660b60f, "usb_stor_pre_reset" },
	{ 0x7ebc1c93, "usb_stor_reset_resume" },
	{ 0x92997ed8, "_printk" },
	{ 0xd906e6bc, "usb_stor_suspend" },
	{ 0xb1f7608, "usb_stor_probe1" },
	{ 0xdd60f751, "usb_stor_resume" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xc3b5328a, "usb_stor_bulk_srb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v07ABpFC01d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1B2A0245C595B68FDB1BD5B");
