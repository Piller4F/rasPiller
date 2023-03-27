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
	{ 0xe3ff3e73, "usb_serial_generic_tiocmiwait" },
	{ 0x779bad66, "usb_serial_deregister_drivers" },
	{ 0xd0bf693c, "usb_serial_register_drivers" },
	{ 0xb1679aa5, "usb_serial_generic_open" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x6c257ac0, "tty_termios_hw_change" },
	{ 0x4a4a680c, "tty_put_char" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x44239691, "_dev_info" },
	{ 0x37ec99c0, "usb_serial_generic_resume" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xb3365f0f, "tty_kref_put" },
	{ 0x106bd415, "usb_serial_handle_dcd_change" },
	{ 0xd1e8c37f, "tty_port_tty_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0xa4e2b09d, "usb_serial_generic_close" },
	{ 0x37a0cba, "kfree" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1A86p5523d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86p7522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86p7523d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2184p0057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4348p5523d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9986p7523d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "79013DDC5B8DF9FAD8C8E98");
