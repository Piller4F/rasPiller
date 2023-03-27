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
	{ 0xaaca2864, "line6_read_serial_number" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x91b994e5, "line6_resume" },
	{ 0xcb9287d0, "line6_probe" },
	{ 0x4443e5df, "line6_write_data" },
	{ 0x2cdd6d60, "line6_disconnect" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x61e90898, "line6_pcm_release" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x6c807070, "line6_pcm_acquire" },
	{ 0x97308019, "led_classdev_register_ext" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xa63d31ae, "line6_init_pcm" },
	{ 0x10356af1, "line6_suspend" },
	{ 0x1bac3145, "line6_read_data" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8809e6c, "snd_ctl_new1" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x5f3c0c17, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xb8714612, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb87de145, "snd_ctl_add" },
	{ 0x19aaa3b6, "usb_control_msg_send" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-usb-line6,snd");

MODULE_ALIAS("usb:v0E41p4750d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4151d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p4147d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4141d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4142d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "52589F8A3BD64DE56231748");
