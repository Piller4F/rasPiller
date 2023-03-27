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
	{ 0x53b954a2, "up_read" },
	{ 0x3de9cae1, "crypto_remove_final" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x55f4c481, "crypto_mod_put" },
	{ 0x5bd0748f, "crypto_del_default_rng" },
	{ 0x5d2361, "crypto_remove_spawns" },
	{ 0x457594fa, "crypto_alg_list" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x80a27898, "crypto_mod_get" },
	{ 0xdcb764ad, "memset" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0xaa344eea, "netlink_kernel_release" },
	{ 0xa516cebe, "crypto_unregister_instance" },
	{ 0x8113b504, "netlink_rcv_skb" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x3350c520, "netlink_unicast" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x70b3b6ef, "netlink_capable" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0xd98b7ead, "__netlink_kernel_create" },
	{ 0xbf845945, "crypto_alg_mod_lookup" },
	{ 0x35d3dc46, "crypto_alg_sem" },
	{ 0x7d8fa849, "__nlmsg_put" },
	{ 0x7ae66123, "__netlink_dump_start" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BF49682A53F1A3578A58062");
