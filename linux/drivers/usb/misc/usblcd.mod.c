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
	{ 0x292268, "noop_llseek" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xd1b727f9, "usb_register_dev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x98cf60b3, "strlen" },
	{ 0x92997ed8, "_printk" },
	{ 0x3ec6f939, "usb_autopm_get_interface" },
	{ 0x894117f3, "usb_find_interface" },
	{ 0xb0a6d269, "usb_autopm_put_interface" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x37a0cba, "kfree" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0x44239691, "_dev_info" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe352600b, "usb_deregister_dev" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xfaf1442c, "usb_bulk_msg" },
	{ 0x1444e565, "usb_unanchor_urb" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xdcb764ad, "memset" },
	{ 0x53b954a2, "up_read" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0xb9788c68, "usb_anchor_urb" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x4fcafe41, "usb_alloc_coherent" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0x668b19a1, "down_read" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xcf2a6966, "up" },
	{ 0xb4af96ed, "usb_free_coherent" },
	{ 0x56470118, "__warn_printk" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v10D2p*d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F6418DF2362497557790A5F");
