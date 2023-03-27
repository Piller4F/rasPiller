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
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x6f3cc412, "snd_pcm_period_elapsed" },
	{ 0x50a5f46d, "usb_init_urb" },
	{ 0x5152826b, "snd_pcm_hw_constraint_msbits" },
	{ 0x8774ddc, "snd_pcm_stop_xrun" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x88e04609, "snd_card_disconnect" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc2ded2db, "param_ops_charp" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0x7a225b9c, "snd_pcm_set_managed_buffer_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x175ae848, "snd_pcm_set_ops" },
	{ 0x28537419, "usb_set_interface" },
	{ 0x1fa49f51, "snd_card_free_when_closed" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xecd30577, "usb_driver_claim_interface" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb4af96ed, "usb_free_coherent" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xdd663170, "__snd_usbmidi_create" },
	{ 0xd503cbd3, "snd_card_new" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x7c45c7f8, "usb_driver_release_interface" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0xe556a9c5, "snd_pcm_hw_constraint_minmax" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc4378d43, "snd_card_free" },
	{ 0xb8714612, "snd_card_register" },
	{ 0xa04ead95, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x91201963, "snd_pcm_new" },
	{ 0x4fcafe41, "usb_alloc_coherent" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-usbmidi-lib,snd-pcm,snd");

MODULE_ALIAS("usb:v0582p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p007Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p008Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "777B7BA42B1924D686404EA");
