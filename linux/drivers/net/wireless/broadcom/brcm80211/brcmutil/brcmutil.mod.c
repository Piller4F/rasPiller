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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0xb80e5f41, "skb_queue_head" },
	{ 0x56470118, "__warn_printk" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0x5a08e008, "skb_unlink" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x4d2b8f08, "skb_dequeue_tail" },
	{ 0xdcb764ad, "memset" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x62d17fa5, "skb_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AC2E407EFC82EF84B7BB4B2");
