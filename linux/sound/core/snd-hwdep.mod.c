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
	{ 0xe416fa7, "snd_register_device" },
	{ 0xcbc173d4, "snd_card_file_remove" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x9fb41e49, "snd_device_initialize" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x2fe6c939, "snd_ctl_register_ioctl_compat" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x393cac96, "seq_printf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0xdd64e639, "strscpy" },
	{ 0xdf3309c5, "snd_ctl_unregister_ioctl" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x53ddc622, "snd_device_new" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x803e4486, "snd_unregister_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x1acd7981, "module_put" },
	{ 0x42fb5312, "snd_card_file_add" },
	{ 0x4d502c9b, "snd_ctl_register_ioctl" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xfa492b2, "snd_register_oss_device" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xa5bfb1fd, "snd_unregister_oss_device" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x6865d6fe, "snd_info_free_entry" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0xc2b6ebe4, "snd_ctl_unregister_ioctl_compat" },
	{ 0xaa74c2e8, "snd_info_create_module_entry" },
	{ 0x93e8e2dc, "snd_info_register" },
	{ 0x68173019, "try_module_get" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "2F1902DAB3C617A971424F9");
