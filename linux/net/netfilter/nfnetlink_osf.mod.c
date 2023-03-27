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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x73a07593, "nfnetlink_subsys_unregister" },
	{ 0x52179a44, "nf_log_packet" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xaff22ef, "nfnetlink_subsys_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xebcdc4a1, "skb_copy_bits" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "5BD9F28095A77F4BA6B1C1F");
