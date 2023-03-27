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
	{ 0x4ad6b58b, "tcf_unregister_action" },
	{ 0xd76095b, "tcf_register_action" },
	{ 0xf942e76e, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x78613682, "skb_store_bits" },
	{ 0x92997ed8, "_printk" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x56470118, "__warn_printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x100588a9, "skb_ensure_writable" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6205d686, "tcf_idr_cleanup" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xdcd61258, "tcf_idr_release" },
	{ 0x50f7c099, "tcf_idr_create" },
	{ 0xbb8f6ddc, "tcf_chain_put_by_act" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb681ef3e, "tcf_action_set_ctrlact" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x969e052, "tcf_action_check_ctrlact" },
	{ 0x94d3611e, "tcf_idr_check_alloc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x5b84be22, "tcf_idr_search" },
	{ 0xaa15155b, "tcf_generic_walker" },
	{ 0x6c67f531, "tcf_action_update_stats" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9d73902e, "tcf_idrinfo_destroy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CD351A483703FA511C8BF85");
