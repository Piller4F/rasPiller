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
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0x8798bb50, "g_audio_cleanup" },
	{ 0xcee08a15, "u_audio_start_capture" },
	{ 0xe0419ac4, "kstrtos16" },
	{ 0x69a18c64, "u_audio_get_volume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa8c3b4b, "usb_ep_set_halt" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7975d757, "usb_function_unregister" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xcf672e2, "usb_put_function_instance" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6340127e, "usb_ep_autoconfig" },
	{ 0x5a921311, "strncmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5516e238, "config_group_init_type_name" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x614b3cf7, "g_audio_setup" },
	{ 0x910bc89d, "usb_function_register" },
	{ 0xfb099507, "u_audio_stop_playback" },
	{ 0xc225aa05, "u_audio_stop_capture" },
	{ 0x26502bb6, "u_audio_get_mute" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xdc965b3, "config_ep_by_speed" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0xe6b24043, "u_audio_start_playback" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xe56a37bd, "u_audio_set_volume" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7c98cd86, "u_audio_set_mute" },
	{ 0xe6e5a1bd, "usb_assign_descriptors" },
	{ 0x529c1749, "usb_interface_id" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "libcomposite,u_audio");


MODULE_INFO(srcversion, "1071009C1E43E1962CBB3E7");
