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
	{ 0x13445e92, "param_ops_bool" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0xa97d7d0a, "usbatm_usb_disconnect" },
	{ 0xa787a109, "param_ops_byte" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x7241c452, "usb_reset_device" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xecd30577, "usb_driver_claim_interface" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c45c7f8, "usb_driver_release_interface" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x461ccb2f, "usb_string" },
	{ 0x842537fa, "atm_dev_signal_change" },
	{ 0x92997ed8, "_printk" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x28537419, "usb_set_interface" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xfaf1442c, "usb_bulk_msg" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa04ead95, "usb_ifnum_to_if" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x44239691, "_dev_info" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x26021e7f, "usbatm_usb_probe" },
};

MODULE_INFO(depends, "usbatm,atm");

MODULE_ALIAS("usb:v06B9p4061d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "33CD7E92BE9C5670004633E");
