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
	{ 0x1b396629, "input_unregister_device" },
	{ 0x54bd79d9, "sysfs_remove_group" },
	{ 0xd6011851, "input_free_device" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x6f140995, "input_allocate_device" },
	{ 0xef735b85, "sysfs_create_group" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c45c7f8, "usb_driver_release_interface" },
	{ 0xb4af96ed, "usb_free_coherent" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0x4fcafe41, "usb_alloc_coherent" },
	{ 0xecd30577, "usb_driver_claim_interface" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x771f85fb, "input_event" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xb0a6d269, "usb_autopm_put_interface" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3ec6f939, "usb_autopm_get_interface" },
	{ 0xa04ead95, "usb_ifnum_to_if" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0471p0602d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1A4FEE5178C8F348C403F42");
