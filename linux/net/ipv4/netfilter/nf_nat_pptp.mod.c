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
	{ 0xebf4a1b2, "nf_nat_pptp_hook_expectfn" },
	{ 0xc1953617, "nf_nat_pptp_hook_exp_gre" },
	{ 0x1361cad0, "nf_nat_pptp_hook_inbound" },
	{ 0x4b5fdb62, "nf_nat_pptp_hook_outbound" },
	{ 0xcb17b248, "__nf_nat_mangle_tcp_packet" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb060eb89, "nf_nat_setup_info" },
	{ 0x3f9313a0, "nf_ct_expect_put" },
	{ 0x15e4cd6d, "nf_ct_unexpect_related" },
	{ 0x88dff9ff, "nf_ct_expect_find_get" },
	{ 0xdb380f22, "nf_ct_nat_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack_pptp,nf_nat,nf_conntrack");


MODULE_INFO(srcversion, "6EB6E30103FB1287F9CB07B");
