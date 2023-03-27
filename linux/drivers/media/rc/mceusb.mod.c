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
	{ 0x8606f399, "rc_free_device" },
	{ 0x19aaa3b6, "usb_control_msg_send" },
	{ 0x58b68b89, "usb_control_msg_recv" },
	{ 0x98cf60b3, "strlen" },
	{ 0xdd64e639, "strscpy" },
	{ 0x461ccb2f, "usb_string" },
	{ 0x3ec5ed95, "rc_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2a4cf6ec, "rc_allocate_device" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0x4fcafe41, "usb_alloc_coherent" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xdcb764ad, "memset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x4829a47e, "memcpy" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf21d2d67, "ir_raw_event_store" },
	{ 0xa922a3a9, "ir_raw_event_handle" },
	{ 0xcace34d9, "ir_raw_event_store_with_filter" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa6257a2f, "complete" },
	{ 0x9a73d57e, "usb_queue_reset_device" },
	{ 0xc8f4b8f8, "usb_clear_halt" },
	{ 0x604e2abd, "usb_unlink_urb" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x37a0cba, "kfree" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0xb4af96ed, "usb_free_coherent" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0x9b6fc2a5, "rc_unregister_device" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x44239691, "_dev_info" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v045Ep006Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0608d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p060Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p060Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p060Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p206Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2088d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2093d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0161d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0609p031Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0609p0322d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0609p0334d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0609p0338d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0609p0353d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0609p0357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1460p9150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1308pC001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v051CpC001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v107Bp3009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EEp2501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1784p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1784p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1784p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1784p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1784p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1784p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v179Dp0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v195Dp7002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1509p9242d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep9803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep00A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE03Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE03Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE03Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v147ApE042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1934p5168d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1934p0602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1934p0702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0225d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1019p0F38d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FB8p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp3020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp3082d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04EBpE004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Ap2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p58A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2596p8008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2596p8016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2596p8042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB139d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB151d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0259d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p025Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F3p0094d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pD3B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15F4p0135d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FB54102F9CEDC489D18D5ED");
