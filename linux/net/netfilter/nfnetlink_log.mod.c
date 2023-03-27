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
	{ 0xa7855737, "nf_log_unregister" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x73a07593, "nfnetlink_subsys_unregister" },
	{ 0x9312c795, "nf_log_register" },
	{ 0xaff22ef, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x74227cca, "from_kgid_munged" },
	{ 0x913c3c7f, "from_kuid_munged" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x68173019, "try_module_get" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x58fc980b, "nf_log_bind_pf" },
	{ 0xdf785de2, "nf_log_unbind_pf" },
	{ 0xd32245cd, "nfnl_ct_hook" },
	{ 0x2efece57, "__put_net" },
	{ 0x1acd7981, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x5657c33f, "proc_set_user" },
	{ 0xb880495f, "make_kgid" },
	{ 0xabaedbc4, "make_kuid" },
	{ 0xe4bddf10, "proc_create_net_data" },
	{ 0xdcb764ad, "memset" },
	{ 0x7015a9c5, "nf_log_unset" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x56470118, "__warn_printk" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xadab222b, "nfnetlink_unicast" },
	{ 0x7d8fa849, "__nlmsg_put" },
	{ 0x393cac96, "seq_printf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "AB1240BEB0EC260548783AC");
