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
	{ 0x62822f61, "led_trigger_unregister" },
	{ 0x7d3d131a, "led_trigger_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x56a90618, "dev_get_by_name" },
	{ 0xadc5e3a, "init_net" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x67e29aef, "led_blink_set_oneshot" },
	{ 0xe94f55c3, "led_stop_software_blink" },
	{ 0xa3c6f253, "dev_get_stats" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7d993228, "led_set_brightness" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x37befc70, "jiffies_to_msecs" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1C44EC413586473C4054D4D");
