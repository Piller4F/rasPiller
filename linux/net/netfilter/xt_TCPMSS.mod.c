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
	{ 0xc75ef391, "xt_unregister_targets" },
	{ 0x39467869, "xt_register_targets" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe3b0ed1b, "ipv6_skip_exthdr" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xf6149499, "dst_release" },
	{ 0x3f587dc1, "nf_route" },
	{ 0xdcb764ad, "memset" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x7592cb4f, "inet_proto_csum_replace4" },
	{ 0x100588a9, "skb_ensure_writable" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "A7D727BC28D99608B33F6BC");
