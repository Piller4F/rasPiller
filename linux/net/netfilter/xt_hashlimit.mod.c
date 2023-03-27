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
	{ 0x33a860c8, "kmem_cache_destroy" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0xa2f06cb2, "xt_unregister_matches" },
	{ 0x96b759ad, "kmem_cache_create" },
	{ 0x6e60e22a, "xt_register_matches" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x41314665, "kmem_cache_alloc" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xe3b0ed1b, "ipv6_skip_exthdr" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb81d8e1f, "proc_create_seq_private" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xdcb764ad, "memset" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5a0baca8, "proc_mkdir" },
	{ 0x99f7371c, "refcount_dec_and_mutex_lock" },
	{ 0x999e8297, "vfree" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x393cac96, "seq_printf" },
	{ 0x37a0cba, "kfree" },
	{ 0xd06eabd1, "PDE_DATA" },
	{ 0xa1018fa2, "kmem_cache_free" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "DDD366AC8B0ECCE6DDE8B0F");
