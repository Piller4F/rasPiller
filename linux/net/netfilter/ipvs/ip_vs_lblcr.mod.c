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
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x8cf96b4d, "unregister_ip_vs_scheduler" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0x6ff64404, "register_ip_vs_scheduler" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0xbdfba4b1, "ip_vs_scheduler_err" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xbba5d6a5, "register_net_sysctl" },
	{ 0x9ed538b6, "init_user_ns" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x37a0cba, "kfree" },
	{ 0xadc5e3a, "init_net" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdcb764ad, "memset" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
};

MODULE_INFO(depends, "ip_vs");


MODULE_INFO(srcversion, "AB2C2F625DD9784DD84884B");
