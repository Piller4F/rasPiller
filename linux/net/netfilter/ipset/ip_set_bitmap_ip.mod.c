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
	{ 0x395da770, "ip_set_type_unregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x7ff75150, "ip_set_type_register" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xf3b4d4ae, "ip_set_alloc" },
	{ 0x89f2aaa, "ip_set_elem_len" },
	{ 0x3295e1be, "ip_set_get_extensions" },
	{ 0xa293f8a6, "ip_set_get_ipaddr4" },
	{ 0x24d273d1, "add_timer" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xfdb0fe36, "ip_set_init_comment" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe54e2b8a, "ip_set_put_flags" },
	{ 0x20d3a22f, "ip_set_put_extensions" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x397f6231, "ip_set_free" },
	{ 0xdcb764ad, "memset" },
	{ 0xe7257764, "ip_set_extensions" },
	{ 0x383168ff, "ip_set_match_extensions" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7924b6de, "ip_set_hostmask_map" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "969E46159AFBD6967DAD67B");
