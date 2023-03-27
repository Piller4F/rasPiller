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
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xd0bf693c, "usb_serial_register_drivers" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x637ed652, "tty_insert_flip_string_fixed_flag" },
	{ 0xdeac8a22, "tty_flip_buffer_push" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xe7180931, "__tty_insert_flip_char" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa4e2b09d, "usb_serial_generic_close" },
	{ 0xb1679aa5, "usb_serial_generic_open" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x37ec99c0, "usb_serial_generic_resume" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x5fcc933f, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x6c257ac0, "tty_termios_hw_change" },
	{ 0xb3365f0f, "tty_kref_put" },
	{ 0x106bd415, "usb_serial_handle_dcd_change" },
	{ 0xd1e8c37f, "tty_port_tty_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1934p0706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1604d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1606d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1608d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1634d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1635d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1636d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p16F8d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FDB57073A7D0A87ED66A80A");
