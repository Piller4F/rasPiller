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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf4ca96b0, "__hci_cmd_sync" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0xc4ff0e53, "__hci_cmd_sync_ev" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x7aad008b, "bt_to_errno" },
	{ 0x718b8b7, "bt_info" },
	{ 0xe126db3, "__regmap_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x39b60a05, "request_firmware_direct" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x40912a44, "hci_cmd_sync" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6f6460a1, "firmware_request_nowarn" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "592C6F38EC6F1AB7AB6F11A");
