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
	{ 0x3a1ca21b, "gspca_suspend" },
	{ 0x9533bdb4, "gspca_dev_probe" },
	{ 0x2ec20129, "gspca_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xebded627, "gspca_disconnect" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfaf1442c, "usb_bulk_msg" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xbd190895, "gspca_frame_add" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x49cd25ed, "alloc_workqueue" },
};

MODULE_INFO(depends, "gspca_main");

MODULE_ALIAS("usb:v2770p905Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2770p9050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2770p9051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2770p9052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2770p913Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "00E6B5870A1E79D89E1BF0C");