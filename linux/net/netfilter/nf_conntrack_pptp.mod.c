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
	{ 0x15e4cd6d, "nf_ct_unexpect_related" },
	{ 0xc0b9b58c, "nf_conntrack_helper_register" },
	{ 0xb578c3a5, "nf_ct_gre_keymap_add" },
	{ 0xf8c03eff, "nf_conntrack_helper_unregister" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x14a8274e, "nf_ct_expect_init" },
	{ 0xd0307cab, "nf_ct_delete" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0x88dff9ff, "nf_ct_expect_find_get" },
	{ 0x3f9313a0, "nf_ct_expect_put" },
	{ 0x98e015f4, "nf_ct_expect_alloc" },
	{ 0xf3018467, "nf_ct_expect_related_report" },
	{ 0xfa109f46, "nf_ct_gre_keymap_destroy" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0x8acb6846, "nf_conntrack_find_get" },
	{ 0x2ff4d036, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "7A068D945736463742415AE");
