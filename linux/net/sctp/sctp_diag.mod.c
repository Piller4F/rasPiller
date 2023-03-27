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
	{ 0xe1f7f753, "release_sock" },
	{ 0x702695fe, "sctp_transport_lookup_process" },
	{ 0x2ef5b9cc, "inet_diag_unregister" },
	{ 0x78c46b38, "inet_diag_msg_attrs_fill" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xdcb764ad, "memset" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x3350c520, "netlink_unicast" },
	{ 0x4998d7f1, "nla_reserve_64bit" },
	{ 0x1d9fe066, "inet_diag_msg_common_fill" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb8ddd296, "sock_diag_check_cookie" },
	{ 0x64efaea7, "sock_diag_save_cookie" },
	{ 0x2ca39914, "nla_reserve" },
	{ 0xddd69c67, "inet_diag_register" },
	{ 0x7d8fa849, "__nlmsg_put" },
	{ 0x57a5fb26, "sctp_transport_traverse_process" },
	{ 0xaa59c2a3, "sctp_get_sctp_info" },
	{ 0xfbd11cde, "sctp_for_each_endpoint" },
	{ 0x40cd4899, "netlink_net_capable" },
};

MODULE_INFO(depends, "sctp,inet_diag");


MODULE_INFO(srcversion, "A065C894CB3A07E6CD8CAC7");
