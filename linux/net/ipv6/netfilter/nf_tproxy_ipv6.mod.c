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
	{ 0x457d98d8, "inet_twsk_put" },
	{ 0x298a287f, "inet6_lookup_listener" },
	{ 0x463219fb, "tcp_hashinfo" },
	{ 0x141b0eb9, "udp6_lib_lookup" },
	{ 0x78589999, "__inet6_lookup_established" },
	{ 0x27600d4d, "sk_free" },
	{ 0xed3b2333, "inet_twsk_deschedule_put" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xebcdc4a1, "skb_copy_bits" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "5ADD49EF3A226C401CCF6A2");
