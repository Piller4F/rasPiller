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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7846af3e, "__kfifo_len_r" },
	{ 0x6f3cc412, "snd_pcm_period_elapsed" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x2484adc3, "__kfifo_to_user_r" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdf6afddc, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x604e2abd, "usb_unlink_urb" },
	{ 0x88e04609, "snd_card_disconnect" },
	{ 0xe5413c79, "snd_rawmidi_new" },
	{ 0xc6cb465a, "__kfifo_max_r" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0x7a225b9c, "snd_pcm_set_managed_buffer_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x175ae848, "snd_pcm_set_ops" },
	{ 0x28537419, "usb_set_interface" },
	{ 0x1fa49f51, "snd_card_free_when_closed" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xfbedeccc, "snd_rawmidi_transmit_peek" },
	{ 0x19b9193d, "snd_hwdep_new" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5b9b2b36, "usb_urb_ep_type_check" },
	{ 0xd503cbd3, "snd_card_new" },
	{ 0xe938bbda, "snd_pcm_hw_constraint_ratdens" },
	{ 0x44239691, "_dev_info" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0x4ae883db, "snd_rawmidi_transmit_ack" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfaf1442c, "usb_bulk_msg" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8809e6c, "snd_ctl_new1" },
	{ 0x3955fcf6, "__kfifo_in_r" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x9069c1b4, "usb_interrupt_msg" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x58b68b89, "usb_control_msg_recv" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x91201963, "snd_pcm_new" },
	{ 0xb87de145, "snd_ctl_add" },
	{ 0x19aaa3b6, "usb_control_msg_send" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xcb7ef78c, "snd_rawmidi_receive" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-pcm,snd-rawmidi,snd,snd-hwdep");


MODULE_INFO(srcversion, "38D9E2B09ABD206FAD20F93");
