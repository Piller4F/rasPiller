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
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0x5e7f4920, "snd_pcm_format_set_silence" },
	{ 0x6f3cc412, "snd_pcm_period_elapsed" },
	{ 0x8774ddc, "snd_pcm_stop_xrun" },
	{ 0x393cac96, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x871b3c7f, "snd_devm_card_new" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x21012113, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf928b4f9, "snd_pcm_hw_constraint_integer" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2607f2ca, "snd_timer_instance_free" },
	{ 0xc2ded2db, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x7a225b9c, "snd_pcm_set_managed_buffer_all" },
	{ 0x9319729e, "snd_timer_instance_new" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x175ae848, "snd_pcm_set_ops" },
	{ 0xca9b9930, "snd_ctl_notify" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xefbfd9c, "platform_device_unregister" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8c1398da, "devm_kfree" },
	{ 0x6d333db7, "snd_ctl_boolean_mono_info" },
	{ 0x9bc24da3, "snd_timer_start" },
	{ 0x55a6c9ca, "snd_pcm_hw_rule_add" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x99dfd977, "snd_card_ref" },
	{ 0x5f9abf, "devm_kstrdup" },
	{ 0xea943ac2, "snd_timer_open" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x8809e6c, "snd_ctl_new1" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x765753e9, "snd_card_rw_proc_new" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb1ed0431, "snd_timer_close" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0xb46ac3bf, "snd_pcm_stop" },
	{ 0xb8714612, "snd_card_register" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x91201963, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb87de145, "snd_ctl_add" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x77bc13a0, "strim" },
	{ 0x8058348f, "snd_timer_stop" },
};

MODULE_INFO(depends, "snd,snd-pcm,snd-timer");


MODULE_INFO(srcversion, "261BE7A2677B0E3D4AE4D5E");
