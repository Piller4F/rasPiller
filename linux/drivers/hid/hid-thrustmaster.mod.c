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
	{ 0xb0b10a74, "hid_unregister_driver" },
	{ 0xdd34dae3, "__hid_register_driver" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9069c1b4, "usb_interrupt_msg" },
	{ 0x4829a47e, "memcpy" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa467f8a3, "hid_hw_start" },
	{ 0x6115ec1f, "hid_open_report" },
	{ 0x8c9e3716, "usb_hid_driver" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x44239691, "_dev_info" },
	{ 0xf864e474, "hid_hw_stop" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xeeb77997, "usb_kill_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v0000044Fp0000B65D");

MODULE_INFO(srcversion, "B97DA28DBE627B46EE58D76");
