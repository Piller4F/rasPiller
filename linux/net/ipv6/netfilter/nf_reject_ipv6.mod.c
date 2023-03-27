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
	{ 0x66e779bd, "pskb_trim_rcsum_slow" },
	{ 0xf6149499, "dst_release" },
	{ 0x4b246414, "nf_ct_attach" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0x2c29c284, "__icmpv6_send" },
	{ 0xdcb764ad, "memset" },
	{ 0x9114099, "l3mdev_master_ifindex_rcu" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3bfe1899, "nf_ipv6_ops" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0xc4bfe3fb, "ip6_route_output_flags" },
	{ 0xe3b0ed1b, "ipv6_skip_exthdr" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xf7cd832d, "ip6_local_out" },
	{ 0xc84a52bc, "ip6_dst_hoplimit" },
	{ 0x9fa52c93, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x2fa8337c, "xfrm_lookup" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0xaf82b861, "nf_ip6_checksum" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "40FBEC92BD9EFBD535AB6CB");
