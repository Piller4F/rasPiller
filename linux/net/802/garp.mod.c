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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb6e27d7, "stp_proto_unregister" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x31297acf, "dev_mc_add" },
	{ 0xece784c2, "rb_first" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb14ec5b5, "stp_proto_register" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5078edfa, "llc_mac_hdr_init" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xc34f66e6, "dev_mc_del" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xca9360b5, "rb_next" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9fa52c93, "dev_queue_xmit" },
	{ 0x6736b8b2, "param_ops_uint" },
};

MODULE_INFO(depends, "stp,llc");


MODULE_INFO(srcversion, "AA122B7A403CDAD497C9DEA");
