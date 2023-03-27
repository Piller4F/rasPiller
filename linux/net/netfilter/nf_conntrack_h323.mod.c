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
	{ 0x1aa3392f, "nf_ct_remove_expectations" },
	{ 0x15e4cd6d, "nf_ct_unexpect_related" },
	{ 0x27339f09, "param_ops_int" },
	{ 0xc0b9b58c, "nf_conntrack_helper_register" },
	{ 0x97e83d4, "__nf_ct_refresh_acct" },
	{ 0xf8c03eff, "nf_conntrack_helper_unregister" },
	{ 0xf6149499, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x14a8274e, "nf_ct_expect_init" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x785448ae, "nf_ip_route" },
	{ 0xd630cc4d, "nf_conntrack_helpers_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x3f9313a0, "nf_ct_expect_put" },
	{ 0x98e015f4, "nf_ct_expect_alloc" },
	{ 0xf3018467, "nf_ct_expect_related_report" },
	{ 0x3428a152, "nf_conntrack_helpers_unregister" },
	{ 0x835175a6, "__nf_ct_expect_find" },
	{ 0x3bfe1899, "nf_ipv6_ops" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x7eb3b680, "nf_ct_helper_log" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0xebcdc4a1, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "773E3DC368DC2C49F38EF65");
