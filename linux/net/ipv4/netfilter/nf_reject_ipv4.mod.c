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
	{ 0x8cfd77b0, "ip_local_out" },
	{ 0x5089f45f, "ip_send_check" },
	{ 0x4b246414, "nf_ct_attach" },
	{ 0xa9102c38, "__icmp_send" },
	{ 0x785448ae, "nf_ip_route" },
	{ 0x665f0364, "nf_ip_checksum" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xdcb764ad, "memset" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x4a9c0c3d, "ip_route_me_harder" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x9fa52c93, "dev_queue_xmit" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xebcdc4a1, "skb_copy_bits" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CF3419C0BDBD35629FDEF40");
