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
	{ 0xd1e8c37f, "tty_port_tty_get" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1b30de3c, "bus_register" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb594fd11, "tty_driver_kref_put" },
	{ 0x243b0418, "driver_register" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x2f07a679, "seq_puts" },
	{ 0xaaf445bb, "tty_port_open" },
	{ 0x393cac96, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1f4f958e, "tty_port_hangup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x366b0e1a, "tty_register_driver" },
	{ 0x3ec6f939, "usb_autopm_get_interface" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xe7180931, "__tty_insert_flip_char" },
	{ 0xc2a47566, "tty_port_close" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xa5a62d7e, "device_del" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1c5c12a0, "tty_ldisc_deref" },
	{ 0xb888e193, "tty_port_register_device" },
	{ 0x20105980, "driver_unregister" },
	{ 0xf3a0c3c8, "usb_unpoison_urb" },
	{ 0x2e77dd40, "usb_poison_urb" },
	{ 0xbd7b056, "seq_putc" },
	{ 0xecd30577, "usb_driver_claim_interface" },
	{ 0x625f8bd, "tty_port_init" },
	{ 0x637ed652, "tty_insert_flip_string_fixed_flag" },
	{ 0x58020e7c, "tty_port_destroy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8e9907cb, "tty_vhangup" },
	{ 0x37f7e7a0, "tty_ldisc_ref" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xbc41d96d, "device_add" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x3533cb47, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x71f56a49, "usb_store_new_id" },
	{ 0x970e914f, "usb_match_id" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xc5d79be6, "tty_port_tty_wakeup" },
	{ 0x1acd7981, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8d98874a, "tty_unregister_device" },
	{ 0x44239691, "_dev_info" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c45c7f8, "usb_driver_release_interface" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x38b1d863, "usb_get_intf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x327e95d4, "tty_unregister_driver" },
	{ 0x4ff74ec7, "tty_hangup" },
	{ 0xc17e9946, "usb_show_dynids" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xce8a1aa5, "tty_standard_install" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x81f956af, "__tty_alloc_driver" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x3055489f, "device_initialize" },
	{ 0xc09a28a, "usb_match_one_id" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xb3365f0f, "tty_kref_put" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x26d729fe, "driver_attach" },
	{ 0xdeac8a22, "tty_flip_buffer_push" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe780e06a, "param_ops_ushort" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0x68173019, "try_module_get" },
	{ 0xb0a6d269, "usb_autopm_put_interface" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0xcc891ede, "usb_put_intf" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2098B346F9958408D3913EE");
