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
	{ 0x27339f09, "param_ops_int" },
	{ 0x598d381a, "unregister_qdisc" },
	{ 0xc051115b, "free_netdev" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0x706384c8, "register_qdisc" },
	{ 0x5792f848, "strlcpy" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xbad1f3bf, "__neigh_event_send" },
	{ 0x30f4f56c, "__neigh_create" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4cc8288a, "neigh_destroy" },
	{ 0x3f2752d1, "neigh_lookup" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x71f025cc, "noop_qdisc" },
	{ 0x6c8376db, "softnet_data" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x4d715606, "qdisc_reset" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BF98CE6625C6EA9D68A5460");
