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
	{ 0xf9a482f9, "msleep" },
	{ 0xcf41fb6, "netlink_has_listeners" },
	{ 0xe61d59d0, "proc_create_single_data" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x393cac96, "seq_printf" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0xaa344eea, "netlink_kernel_release" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x3350c520, "netlink_unicast" },
	{ 0xadc5e3a, "init_net" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x43cd0ea3, "netlink_broadcast" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xd98b7ead, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7d8fa849, "__nlmsg_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FFD618076D2330B13DEAAB0");
