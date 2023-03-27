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
	{ 0x59150741, "tcf_em_unregister" },
	{ 0xc3b88400, "tcf_em_register" },
	{ 0x3fd091cd, "skb_find_text" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x9e270deb, "textsearch_prepare" },
	{ 0xe208f70b, "textsearch_destroy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xef6f6784, "nla_append" },
	{ 0x2ce316ff, "nla_put_nohdr" },
	{ 0x9166fada, "strncpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0E54FFEB488B5E351B0E649");
