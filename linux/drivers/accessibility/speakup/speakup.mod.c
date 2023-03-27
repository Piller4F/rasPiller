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
	{ 0xd103296d, "kobject_put" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x53b954a2, "up_read" },
	{ 0xdf4c1b20, "tty_unlock" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0x503e3cbb, "start_tty" },
	{ 0x349cba85, "strchr" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc5e74216, "release_resource" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xe190dc83, "screen_pos" },
	{ 0x8398acda, "tty_set_ldisc" },
	{ 0x7f21bb48, "set_selection_kernel" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x38374815, "clear_selection" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x96554810, "register_keyboard_notifier" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x55417264, "unregister_vt_notifier" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x54bd79d9, "sysfs_remove_group" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8c9e446, "tty_unregister_ldisc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xe0f91e74, "kobject_create_and_add" },
	{ 0xbf333c8a, "vc_cons" },
	{ 0x22b325d5, "kd_mksound" },
	{ 0xc631580a, "console_unlock" },
	{ 0x771f85fb, "input_event" },
	{ 0xc2ded2db, "param_ops_charp" },
	{ 0xa0e0c9b1, "misc_register" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb11d9000, "tty_dev_name_to_number" },
	{ 0xdcb764ad, "memset" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x9ed554b3, "unregister_keyboard_notifier" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0xef735b85, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x6864928b, "tty_ldisc_flush" },
	{ 0x9166fada, "strncpy" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x64bbc288, "string_unescape" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0xd6011851, "input_free_device" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xb93052e8, "stop_tty" },
	{ 0xfd0caae8, "tty_write_room" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x148653, "vsnprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdeca05c4, "tty_kclose" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1b396629, "input_unregister_device" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x4e6e8ea7, "fg_console" },
	{ 0xf782b356, "set_user_nice" },
	{ 0x96848186, "scnprintf" },
	{ 0xb3365f0f, "tty_kref_put" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc00b4f91, "inverse_translate" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xdeac8a22, "tty_flip_buffer_push" },
	{ 0xc9619615, "tty_kopen_exclusive" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xca454a34, "vt_get_leds" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9be07d44, "tty_register_ldisc" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd4c8974a, "misc_deregister" },
	{ 0x13110126, "request_resource" },
	{ 0xc2bdaf86, "tty_lock" },
	{ 0xbf041102, "register_vt_notifier" },
	{ 0xf1d394fb, "tty_set_termios" },
	{ 0xe914e41e, "strcpy" },
	{ 0x68bd64c2, "paste_selection" },
	{ 0x6f140995, "input_allocate_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "94667FF8898CD6191BB68E8");
