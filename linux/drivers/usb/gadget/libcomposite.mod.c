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
	{ 0xa24f23d8, "__request_module" },
	{ 0x6fe8451e, "device_remove_file" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0x8dd3dabc, "usb_gadget_deactivate" },
	{ 0x98cf60b3, "strlen" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x33164e2b, "config_item_put" },
	{ 0xc2b15392, "config_item_init_type_name" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdf24e62b, "usb_gadget_unregister_driver" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd5a90eda, "usb_gadget_set_state" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x1302b5e3, "usb_gadget_clear_selfpowered" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5a921311, "strncmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9495693b, "usb_gadget_activate" },
	{ 0x5516e238, "config_group_init_type_name" },
	{ 0x8a5178ed, "init_uts_ns" },
	{ 0x9e57ac39, "configfs_register_subsystem" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xa353aef4, "device_create_file" },
	{ 0x882077d5, "usb_ep_dequeue" },
	{ 0x1acd7981, "module_put" },
	{ 0xbab40bd8, "config_item_set_name" },
	{ 0x44239691, "_dev_info" },
	{ 0x1c18c439, "usb_gadget_vbus_draw" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xfa2274c1, "usb_gadget_set_selfpowered" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xa1908f83, "configfs_unregister_subsystem" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x714bb843, "usb_gadget_ep_match_desc" },
	{ 0xc35ce6f0, "usb_gadget_probe_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x38c481ba, "usb_gadget_check_config" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8d66565b, "config_group_init" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x68173019, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D76214057529AC9633A4E6A");
