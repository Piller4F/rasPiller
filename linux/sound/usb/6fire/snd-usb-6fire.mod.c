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
	{ 0xf9a482f9, "msleep" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x6f3cc412, "snd_pcm_period_elapsed" },
	{ 0x50a5f46d, "usb_init_urb" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x8774ddc, "snd_pcm_stop_xrun" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdf6afddc, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x88e04609, "snd_card_disconnect" },
	{ 0xe5413c79, "snd_rawmidi_new" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc2ded2db, "param_ops_charp" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x7a225b9c, "snd_pcm_set_managed_buffer_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x1195b899, "_snd_ctl_add_follower" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x175ae848, "snd_pcm_set_ops" },
	{ 0x28537419, "usb_set_interface" },
	{ 0x89d70320, "snd_ctl_boolean_stereo_info" },
	{ 0x1fa49f51, "snd_card_free_when_closed" },
	{ 0x2e77dd40, "usb_poison_urb" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x6d333db7, "snd_ctl_boolean_mono_info" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd503cbd3, "snd_card_new" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x27a18331, "snd_ctl_make_virtual_master" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfaf1442c, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x8809e6c, "snd_ctl_new1" },
	{ 0x9069c1b4, "usb_interrupt_msg" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc4378d43, "snd_card_free" },
	{ 0x58b68b89, "usb_control_msg_recv" },
	{ 0xb8714612, "snd_card_register" },
	{ 0x91201963, "snd_pcm_new" },
	{ 0xb87de145, "snd_ctl_add" },
	{ 0xaf1119c3, "snd_rawmidi_transmit" },
	{ 0x19aaa3b6, "usb_control_msg_send" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xcb7ef78c, "snd_rawmidi_receive" },
};

MODULE_INFO(depends, "snd-pcm,snd-rawmidi,snd");

MODULE_ALIAS("usb:v0CCDp0080d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "15C0369C27C11532A06F275");
