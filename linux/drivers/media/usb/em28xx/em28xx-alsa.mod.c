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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa8a68ecf, "_dev_printk" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x6f3cc412, "snd_pcm_period_elapsed" },
	{ 0xaa99141a, "_snd_pcm_stream_lock_irqsave" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1b8a30d0, "em28xx_register_extension" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x604e2abd, "usb_unlink_urb" },
	{ 0xf928b4f9, "snd_pcm_hw_constraint_integer" },
	{ 0x88e04609, "snd_card_disconnect" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x4640c031, "em28xx_read_ac97" },
	{ 0xdcb764ad, "memset" },
	{ 0x7a225b9c, "snd_pcm_set_managed_buffer_all" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x6a6e3777, "em28xx_write_ac97" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x175ae848, "snd_pcm_set_ops" },
	{ 0x28537419, "usb_set_interface" },
	{ 0xe7a5d416, "em28xx_unregister_extension" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x78d2f851, "snd_pcm_stream_unlock_irqrestore" },
	{ 0xb4af96ed, "usb_free_coherent" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x6d333db7, "snd_ctl_boolean_mono_info" },
	{ 0xd503cbd3, "snd_card_new" },
	{ 0x44239691, "_dev_info" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x8809e6c, "snd_ctl_new1" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe556a9c5, "snd_pcm_hw_constraint_minmax" },
	{ 0xc4378d43, "snd_card_free" },
	{ 0xb8714612, "snd_card_register" },
	{ 0xa04ead95, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x91201963, "snd_pcm_new" },
	{ 0x4fcafe41, "usb_alloc_coherent" },
	{ 0xb87de145, "snd_ctl_add" },
	{ 0xef1e3481, "em28xx_audio_analog_set" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0x7d7404bc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "em28xx,snd-pcm,snd");


MODULE_INFO(srcversion, "8D137D5F244D62FBB31B9E4");
