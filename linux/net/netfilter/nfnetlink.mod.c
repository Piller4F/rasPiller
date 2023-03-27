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
	{ 0xa24f23d8, "__request_module" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xcf41fb6, "netlink_has_listeners" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb2be912e, "nlmsg_notify" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xaa344eea, "netlink_kernel_release" },
	{ 0x8113b504, "netlink_rcv_skb" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x3350c520, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x1acd7981, "module_put" },
	{ 0x43cd0ea3, "netlink_broadcast" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x3d51362b, "netlink_ack" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x788bc830, "netlink_set_err" },
	{ 0xd98b7ead, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x68173019, "try_module_get" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x40cd4899, "netlink_net_capable" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7C23DFF303D7B01D9EBB150");
