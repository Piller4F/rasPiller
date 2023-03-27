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
	{ 0xbf2da18a, "param_array_ops" },
	{ 0xe780e06a, "param_ops_ushort" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c79dc89, "ip_vs_nfct_expect_related" },
	{ 0xcb17b248, "__nf_nat_mangle_tcp_packet" },
	{ 0x98cf60b3, "strlen" },
	{ 0x80f218d1, "ip_vs_conn_out_get" },
	{ 0x4538231d, "ip_vs_conn_new" },
	{ 0x7af1a9af, "ip_vs_conn_put" },
	{ 0xd2b3ee3b, "ip_vs_tcp_conn_listen" },
	{ 0x5e3663e0, "ip_vs_conn_in_get" },
	{ 0x100588a9, "skb_ensure_writable" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xc5cfa5db, "register_ip_vs_app_inc" },
	{ 0xb51169f2, "register_ip_vs_app" },
	{ 0x5654df4b, "unregister_ip_vs_app" },
};

MODULE_INFO(depends, "ip_vs,nf_nat");


MODULE_INFO(srcversion, "9C9835176D249C1D8579438");
