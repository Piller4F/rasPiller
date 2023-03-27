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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xca16db69, "nf_ct_helper_expectfn_unregister" },
	{ 0x6d0f1845, "nf_ct_helper_expectfn_register" },
	{ 0x8bf82924, "nat_q931_hook" },
	{ 0xcdaefb17, "nat_callforwarding_hook" },
	{ 0xadea2a82, "nat_h245_hook" },
	{ 0x2805cec0, "nat_t120_hook" },
	{ 0xfc5e59ff, "nat_rtp_rtcp_hook" },
	{ 0x19c856f5, "set_ras_addr_hook" },
	{ 0x4400c58a, "set_sig_addr_hook" },
	{ 0xd108eb0b, "set_h225_addr_hook" },
	{ 0x3910fcc5, "set_h245_addr_hook" },
	{ 0x6f2bfc52, "get_h225_addr" },
	{ 0x15e4cd6d, "nf_ct_unexpect_related" },
	{ 0xf3018467, "nf_ct_expect_related_report" },
	{ 0x92997ed8, "_printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0xcb17b248, "__nf_nat_mangle_tcp_packet" },
	{ 0xef41b5a1, "nf_nat_mangle_udp_packet" },
	{ 0x77d397b2, "nf_nat_follow_master" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb060eb89, "nf_nat_setup_info" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_h323,nf_nat");


MODULE_INFO(srcversion, "6444D29D128E41F19DC10B8");
