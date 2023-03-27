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
	{ 0xb4d1c515, "l2tp_tunnel_get_nth" },
	{ 0x53c68bf6, "l2tp_session_dec_refcount" },
	{ 0x2b9da7a4, "genl_lock" },
	{ 0x3ac68802, "genl_register_family" },
	{ 0x39588f, "l2tp_tunnel_get_session" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc8c04121, "genl_unregister_family" },
	{ 0x1a7508da, "l2tp_tunnel_register" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x3350c520, "netlink_unicast" },
	{ 0xda22ab38, "l2tp_tunnel_create" },
	{ 0x624e4712, "l2tp_tunnel_get" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0xdf6b3bc3, "l2tp_session_get_nth" },
	{ 0x2d140a58, "genl_unlock" },
	{ 0x9411145d, "l2tp_session_get_by_ifname" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xf2fd23eb, "genlmsg_multicast_allns" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8ce4e137, "genlmsg_put" },
	{ 0xc7c48472, "l2tp_tunnel_delete" },
	{ 0x54909e14, "l2tp_tunnel_inc_refcount" },
	{ 0xf942e76e, "nla_put_64bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ac4e5d, "l2tp_tunnel_dec_refcount" },
	{ 0xca98015, "l2tp_session_set_header_len" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "3326FBAA007165FC90EA19F");
