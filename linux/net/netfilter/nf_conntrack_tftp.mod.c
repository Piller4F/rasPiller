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
	{ 0x3fae2b48, "nf_ct_helper_init" },
	{ 0x14a8274e, "nf_ct_expect_init" },
	{ 0xd630cc4d, "nf_conntrack_helpers_register" },
	{ 0x3f9313a0, "nf_ct_expect_put" },
	{ 0x98e015f4, "nf_ct_expect_alloc" },
	{ 0xf3018467, "nf_ct_expect_related_report" },
	{ 0x3428a152, "nf_conntrack_helpers_unregister" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x7eb3b680, "nf_ct_helper_log" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0xe780e06a, "param_ops_ushort" },
	{ 0xebcdc4a1, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "EDD53DB867130B11AFB413B");
