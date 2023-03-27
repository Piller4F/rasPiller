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
	{ 0x2d3385d3, "system_wq" },
	{ 0x1ca25d6d, "is_fw_load" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x6f3cc412, "snd_pcm_period_elapsed" },
	{ 0xd558204, "v4l2_subdev_call_wrappers" },
	{ 0xaa99141a, "_snd_pcm_stream_lock_irqsave" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x604e2abd, "usb_unlink_urb" },
	{ 0xf928b4f9, "snd_pcm_hw_constraint_integer" },
	{ 0x2e92d1f7, "cx231xx_register_extension" },
	{ 0xdcb764ad, "memset" },
	{ 0x7a225b9c, "snd_pcm_set_managed_buffer_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x175ae848, "snd_pcm_set_ops" },
	{ 0x1fa49f51, "snd_card_free_when_closed" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x78d2f851, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xd503cbd3, "snd_card_new" },
	{ 0x44239691, "_dev_info" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x11f2ada4, "cx231xx_capture_start" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x684e3f11, "cx231xx_set_alt_setting" },
	{ 0xc4378d43, "snd_card_free" },
	{ 0xb8714612, "snd_card_register" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x91201963, "snd_pcm_new" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xfb3e1afa, "cx231xx_unregister_extension" },
	{ 0x7d7404bc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "cx231xx,snd-pcm,videodev,snd");


MODULE_INFO(srcversion, "0C14BF5DE2AD350512AFC6A");
