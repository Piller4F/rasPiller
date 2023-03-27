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
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x8188dbc4, "snd_tea575x_set_freq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3424512c, "v4l2_device_put" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf5465370, "snd_tea575x_exit" },
	{ 0xc08a51b3, "v4l2_device_disconnect" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x5f3c0c17, "led_classdev_unregister" },
	{ 0xb3f1d835, "snd_tea575x_init" },
	{ 0xdd64e639, "strscpy" },
	{ 0x60b422b3, "v4l2_device_register" },
	{ 0x97308019, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4829a47e, "memcpy" },
	{ 0x13c812bb, "v4l2_device_set_name" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9069c1b4, "usb_interrupt_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf4028eb, "v4l2_device_unregister" },
};

MODULE_INFO(depends, "tea575x,videodev");

MODULE_ALIAS("usb:v077Dp627Ad0001dc*dsc*dp*ic03isc*ip*in*");

MODULE_INFO(srcversion, "A2D17FB56137A7A22C79EDC");
