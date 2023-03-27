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
	{ 0xbf2da18a, "param_array_ops" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x27339f09, "param_ops_int" },
	{ 0xa16a2fff, "tm6000_unregister_extension" },
	{ 0x8227e9a0, "tm6000_register_extension" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7012e612, "tm6000_set_audio_bitrate" },
	{ 0x8860b8ad, "tm6000_set_reg_mask" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb8714612, "snd_card_register" },
	{ 0x7a225b9c, "snd_pcm_set_managed_buffer_all" },
	{ 0x175ae848, "snd_pcm_set_ops" },
	{ 0x91201963, "snd_pcm_new" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x809b9eb7, "snd_component_add" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0xd503cbd3, "snd_card_new" },
	{ 0xf928b4f9, "snd_pcm_hw_constraint_integer" },
	{ 0xdcb764ad, "memset" },
	{ 0xf30ca025, "snd_pcm_hw_constraint_pow2" },
	{ 0x37a0cba, "kfree" },
	{ 0xc4378d43, "snd_card_free" },
	{ 0x92997ed8, "_printk" },
	{ 0x6f3cc412, "snd_pcm_period_elapsed" },
	{ 0x281f0c05, "snd_pcm_stream_unlock" },
	{ 0x24140f6, "snd_pcm_stream_lock" },
	{ 0x4829a47e, "memcpy" },
};

MODULE_INFO(depends, "tm6000,snd,snd-pcm");


MODULE_INFO(srcversion, "53C366BD3E0F170C748D0BE");
