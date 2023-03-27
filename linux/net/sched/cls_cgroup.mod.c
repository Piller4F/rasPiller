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
	{ 0xc5c8c49d, "unregister_tcf_proto_ops" },
	{ 0x70d4ebd0, "register_tcf_proto_ops" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x2efece57, "__put_net" },
	{ 0xfb70402a, "tcf_em_tree_destroy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x37a0cba, "kfree" },
	{ 0x9102eab5, "tcf_exts_destroy" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x5448304f, "tcf_em_tree_validate" },
	{ 0x48eb6a5d, "tcf_exts_validate" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x8db45727, "tcf_exts_dump_stats" },
	{ 0xd6d7752a, "tcf_em_tree_dump" },
	{ 0x9ebec595, "tcf_exts_dump" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0xf5a31e49, "__tcf_em_tree_match" },
	{ 0x71d14fce, "tcf_action_exec" },
	{ 0xa5048f61, "task_cls_state" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "37370F327F677AA371894EA");
