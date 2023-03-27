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
	{ 0xd16c38ed, "ipv6_find_hdr" },
	{ 0x463219fb, "tcp_hashinfo" },
	{ 0x141b0eb9, "udp6_lib_lookup" },
	{ 0xe3b0ed1b, "ipv6_skip_exthdr" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x664363bd, "inet6_lookup" },
	{ 0xebcdc4a1, "skb_copy_bits" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "634A68B39BDC4FDE17EBA00");
