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
	{ 0x6d0f1845, "nf_ct_helper_expectfn_register" },
	{ 0x215401fc, "nf_nat_helper_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xca16db69, "nf_ct_helper_expectfn_unregister" },
	{ 0x2195c687, "nf_nat_sip_hooks" },
	{ 0xe0a298e4, "nf_nat_helper_unregister" },
	{ 0x100588a9, "skb_ensure_writable" },
	{ 0xd11e0d92, "ct_sip_parse_numerical_param" },
	{ 0xfbef0b99, "ct_sip_parse_request" },
	{ 0xa5a17901, "ct_sip_parse_address_param" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xabeb084c, "ct_sip_parse_header_uri" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xb060eb89, "nf_nat_setup_info" },
	{ 0xe634b6c7, "nf_ct_seqadj_set" },
	{ 0x7eb3b680, "nf_ct_helper_log" },
	{ 0x15e4cd6d, "nf_ct_unexpect_related" },
	{ 0xf3018467, "nf_ct_expect_related_report" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x409ed607, "ct_sip_get_header" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x454f84bd, "ct_sip_get_sdp_header" },
	{ 0xcb17b248, "__nf_nat_mangle_tcp_packet" },
	{ 0xef41b5a1, "nf_nat_mangle_udp_packet" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_sip,nf_nat");


MODULE_INFO(srcversion, "611C746A25BF5C9EAEC77E5");
