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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0xc75ef391, "xt_unregister_targets" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x39467869, "xt_register_targets" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x8e92f7c4, "static_key_slow_inc" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x56a90618, "dev_get_by_name" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdd3dfa1e, "nf_dup_ipv4" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0xd3fcc511, "xt_tee_enabled" },
	{ 0x37a0cba, "kfree" },
	{ 0xb6b08069, "nf_dup_ipv6" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
};

MODULE_INFO(depends, "x_tables,nf_dup_ipv4,nf_dup_ipv6");


MODULE_INFO(srcversion, "26459F75F8CD9F5E61EB421");
