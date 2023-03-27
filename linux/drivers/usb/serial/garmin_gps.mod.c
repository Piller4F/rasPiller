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
	{ 0x779bad66, "usb_serial_deregister_drivers" },
	{ 0xd0bf693c, "usb_serial_register_drivers" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x41c4a1fb, "usb_serial_port_softint" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7241c452, "usb_reset_device" },
	{ 0xdeac8a22, "tty_flip_buffer_push" },
	{ 0x637ed652, "tty_insert_flip_string_fixed_flag" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x1444e565, "usb_unanchor_urb" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0xb9788c68, "usb_anchor_urb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37a0cba, "kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v091Ep0003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3CFDA18698070A99403BF2B");
