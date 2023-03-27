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
	{ 0x90a84ba, "usb_stor_set_xfer_buf" },
	{ 0x6112d5d9, "usb_stor_bulk_transfer_buf" },
	{ 0x63060d1d, "usb_stor_access_xfer_buf" },
	{ 0xede730c1, "usb_stor_post_reset" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5b07ca5d, "usb_stor_disconnect" },
	{ 0xdcb764ad, "memset" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xff737d1c, "usb_stor_probe2" },
	{ 0x8bdd5048, "usb_stor_host_template_init" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb660b60f, "usb_stor_pre_reset" },
	{ 0x7ebc1c93, "usb_stor_reset_resume" },
	{ 0x92997ed8, "_printk" },
	{ 0xd906e6bc, "usb_stor_suspend" },
	{ 0xb1f7608, "usb_stor_probe1" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0xdd2907a1, "usb_stor_bulk_transfer_sg" },
	{ 0xc3b5328a, "usb_stor_bulk_srb" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0CF2p6250d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "161787DA3FDC1AEAD54C717");
