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
	{ 0x97e83d4, "__nf_ct_refresh_acct" },
	{ 0x3f9313a0, "nf_ct_expect_put" },
	{ 0x98e015f4, "nf_ct_expect_alloc" },
	{ 0xf3018467, "nf_ct_expect_related_report" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "D59E4FF1D04222E37CA5EE8");
