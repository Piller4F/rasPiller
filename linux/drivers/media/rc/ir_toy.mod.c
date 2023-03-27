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
	{ 0x3ec5ed95, "rc_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x44239691, "_dev_info" },
	{ 0x8606f399, "rc_free_device" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0x2a4cf6ec, "rc_allocate_device" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xa922a3a9, "ir_raw_event_handle" },
	{ 0xf03d9cea, "ir_raw_event_store_with_timeout" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xa6257a2f, "complete" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x9b6fc2a5, "rc_unregister_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v04D8pFD08d*dc*dsc*dp*ic0Aisc*ip*in*");
MODULE_ALIAS("usb:v04D8pF58Bd*dc*dsc*dp*ic0Aisc*ip*in*");

MODULE_INFO(srcversion, "F734BD81D23C7939D12D1DC");
