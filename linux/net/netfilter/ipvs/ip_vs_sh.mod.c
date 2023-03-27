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
	{ 0x8cf96b4d, "unregister_ip_vs_scheduler" },
	{ 0x6ff64404, "register_ip_vs_scheduler" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0xbdfba4b1, "ip_vs_scheduler_err" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "ip_vs");


MODULE_INFO(srcversion, "5B000C41D850905F7430AD8");
