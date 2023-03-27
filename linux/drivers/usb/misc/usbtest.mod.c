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
	{ 0x27339f09, "param_ops_int" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0xe780e06a, "param_ops_ushort" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x28537419, "usb_set_interface" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x56e7ee3c, "usb_get_descriptor" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xc8f4b8f8, "usb_clear_halt" },
	{ 0x5882dfc, "usb_get_status" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x44239691, "_dev_info" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0xddf6ad7a, "completion_done" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xb4af96ed, "usb_free_coherent" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0x4fcafe41, "usb_alloc_coherent" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x604e2abd, "usb_unlink_urb" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0xa6257a2f, "complete" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xdcb764ad, "memset" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5e2e4e49, "usb_sg_wait" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1622dfe2, "usb_sg_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x505c3f14, "usb_sg_cancel" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x163f4a3f, "_dev_err" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0547p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p8613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vFFF0pFFF0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B3AB7D80A3376517FC594B0");
