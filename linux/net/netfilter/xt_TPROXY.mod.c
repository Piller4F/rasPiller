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
	{ 0xc75ef391, "xt_unregister_targets" },
	{ 0x39467869, "xt_register_targets" },
	{ 0x776232e8, "nf_tproxy_handle_time_wait4" },
	{ 0x83a4023f, "nf_tproxy_laddr4" },
	{ 0xce081c18, "nf_tproxy_get_sock_v4" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x855b5efb, "nf_tproxy_handle_time_wait6" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0xfb69cce7, "sock_edemux" },
	{ 0x7e94d48a, "sock_gen_put" },
	{ 0xa91c5645, "nf_tproxy_laddr6" },
	{ 0x9f5cbb07, "nf_tproxy_get_sock_v6" },
	{ 0xd16c38ed, "ipv6_find_hdr" },
	{ 0x8d40777, "nf_defrag_ipv4_enable" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf5d0e159, "nf_defrag_ipv6_enable" },
	{ 0xfd61e3ca, "nf_defrag_ipv4_disable" },
	{ 0xaee578fb, "nf_defrag_ipv6_disable" },
};

MODULE_INFO(depends, "x_tables,nf_tproxy_ipv4,nf_tproxy_ipv6,nf_defrag_ipv4,nf_defrag_ipv6");


MODULE_INFO(srcversion, "33F387C72D0CD6BB15ABF43");
