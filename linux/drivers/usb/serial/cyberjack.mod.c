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
	{ 0xdcb764ad, "memset" },
	{ 0x41c4a1fb, "usb_serial_port_softint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xc8f4b8f8, "usb_clear_halt" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0xdeac8a22, "tty_flip_buffer_push" },
	{ 0x637ed652, "tty_insert_flip_string_fixed_flag" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd81bd04c, "usb_submit_urb" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v0C4Bp0100d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "445AD5A274BBE9E39F67ECD");
