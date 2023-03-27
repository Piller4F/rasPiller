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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x98cf60b3, "strlen" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x73a07593, "nfnetlink_subsys_unregister" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x5a921311, "strncmp" },
	{ 0xadab222b, "nfnetlink_unicast" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x1acd7981, "module_put" },
	{ 0x2688a0a5, "nfnetlink_broadcast" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xaff22ef, "nfnetlink_subsys_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xf942e76e, "nla_put_64bit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7d8fa849, "__nlmsg_put" },
	{ 0x68173019, "try_module_get" },
	{ 0x7ae66123, "__netlink_dump_start" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "29788C5ECBF8961BEE2E816");
