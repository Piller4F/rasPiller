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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc93bdc96, "usb_gstrings_attach" },
	{ 0x90ad01fd, "usb_free_all_descriptors" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa8c3b4b, "usb_ep_set_halt" },
	{ 0xdf6afddc, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7975d757, "usb_function_unregister" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe5413c79, "snd_rawmidi_new" },
	{ 0x53ddc622, "snd_device_new" },
	{ 0xcf672e2, "usb_put_function_instance" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6340127e, "usb_ep_autoconfig" },
	{ 0x1fa49f51, "snd_card_free_when_closed" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5516e238, "config_group_init_type_name" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x910bc89d, "usb_function_register" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xd503cbd3, "snd_card_new" },
	{ 0x809b9eb7, "snd_component_add" },
	{ 0xb775db55, "alloc_ep_req" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xdc965b3, "config_ep_by_speed" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x2e09263f, "usb_copy_descriptors" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x34569306, "snd_rawmidi_drop_output" },
	{ 0x529c1749, "usb_interface_id" },
	{ 0xc4378d43, "snd_card_free" },
	{ 0xb8714612, "snd_card_register" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xaf1119c3, "snd_rawmidi_transmit" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xcb7ef78c, "snd_rawmidi_receive" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "libcomposite,snd-rawmidi,snd");


MODULE_INFO(srcversion, "C960D5A5EA5063FD9774C99");
