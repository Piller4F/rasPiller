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
	{ 0xa9e29d83, "xfrm6_tunnel_deregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x21b3b49, "xfrm_unregister_type" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xdcb764ad, "memset" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa1018fa2, "kmem_cache_free" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe9274a7, "xfrm_state_flush" },
	{ 0x224bf7d1, "xfrm_register_type" },
	{ 0x41314665, "kmem_cache_alloc" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x96b759ad, "kmem_cache_create" },
	{ 0xc296e50f, "xfrm6_rcv_spi" },
	{ 0x659ded26, "xfrm_flush_gc" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x847bba3a, "xfrm6_tunnel_register" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "tunnel6,ipv6");


MODULE_INFO(srcversion, "CE83DB38D50DDCE9ED24817");
