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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x6112d5d9, "usb_stor_bulk_transfer_buf" },
	{ 0xede730c1, "usb_stor_post_reset" },
	{ 0x90585d20, "usb_stor_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3ec6f939, "usb_autopm_get_interface" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x17ddbd1a, "usb_enable_autosuspend" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b07ca5d, "usb_stor_disconnect" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xd2843cc4, "usb_autopm_put_interface_async" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xff737d1c, "usb_stor_probe2" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8bdd5048, "usb_stor_host_template_init" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfaf1442c, "usb_bulk_msg" },
	{ 0xb660b60f, "usb_stor_pre_reset" },
	{ 0x7ebc1c93, "usb_stor_reset_resume" },
	{ 0xb1f7608, "usb_stor_probe1" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xbd2dccc3, "pm_runtime_set_autosuspend_delay" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp0138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0158d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0159d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0184d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E6B18FBA34A59463071477E");
