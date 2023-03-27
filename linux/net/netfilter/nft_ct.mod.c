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
	{ 0x2ce58ec9, "nft_unregister_expr" },
	{ 0x23ba1bb5, "nft_unregister_obj" },
	{ 0x8bc338f6, "nft_register_obj" },
	{ 0x7e17e26d, "nft_register_expr" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9166fada, "strncpy" },
	{ 0x66c7f9a5, "nf_ct_get_id" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2ff4d036, "nf_ct_ext_add" },
	{ 0x86a9f336, "nf_connlabels_replace" },
	{ 0x6c4b52c0, "nf_ct_tmpl_alloc" },
	{ 0xadc5e3a, "init_net" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0xfd4ea5b8, "nf_connlabels_get" },
	{ 0xbc75cd0f, "nf_connlabels_put" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x7c102184, "nf_ct_helper_ext_add" },
	{ 0xf3018467, "nf_ct_expect_related_report" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x14a8274e, "nf_ct_expect_init" },
	{ 0x98e015f4, "nf_ct_expect_alloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0x3839df4b, "nft_parse_register_store" },
	{ 0x8183bb5f, "nft_dump_register" },
	{ 0x43f3b49e, "nf_ct_set_auto_assign_helper_warned" },
	{ 0xe2bcad0a, "nf_conntrack_helper_try_module_get" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x31aa6798, "nf_conntrack_helper_put" },
	{ 0x5b9701f6, "nf_ct_netns_get" },
	{ 0xa85fd64a, "nf_ct_netns_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7ca2fd32, "nla_put" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack");


MODULE_INFO(srcversion, "361F05768324B52463AF084");
