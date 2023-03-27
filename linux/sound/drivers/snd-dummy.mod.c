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
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x828e22f4, "hrtimer_forward" },
	{ 0x6f3cc412, "snd_pcm_period_elapsed" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x871b3c7f, "snd_devm_card_new" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x21012113, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf928b4f9, "snd_pcm_hw_constraint_integer" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc2ded2db, "param_ops_charp" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xdcb764ad, "memset" },
	{ 0x7a225b9c, "snd_pcm_set_managed_buffer_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x175ae848, "snd_pcm_set_ops" },
	{ 0x89d70320, "snd_ctl_boolean_stereo_info" },
	{ 0xca9b9930, "snd_ctl_notify" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xefbfd9c, "platform_device_unregister" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x8809e6c, "snd_ctl_new1" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xe556a9c5, "snd_pcm_hw_constraint_minmax" },
	{ 0xb8714612, "snd_card_register" },
	{ 0x91201963, "snd_pcm_new" },
	{ 0xb87de145, "snd_ctl_add" },
	{ 0x13868293, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "07813BD027E23CCB5E5885D");
