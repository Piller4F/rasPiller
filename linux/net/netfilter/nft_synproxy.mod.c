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
	{ 0x2ce58ec9, "nft_unregister_expr" },
	{ 0x23ba1bb5, "nft_unregister_obj" },
	{ 0x7e17e26d, "nft_register_expr" },
	{ 0x8bc338f6, "nft_register_obj" },
	{ 0x82229c42, "synproxy_send_client_synack" },
	{ 0xa3746810, "synproxy_send_client_synack_ipv6" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0x4d726745, "synproxy_recv_client_ack" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x53fc165d, "synproxy_recv_client_ack_ipv6" },
	{ 0x5e99990b, "synproxy_parse_options" },
	{ 0x665f0364, "nf_ip_checksum" },
	{ 0x5f0f5368, "nf_synproxy_ipv6_fini" },
	{ 0x1f099794, "synproxy_init_timestamp_cookie" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x470eea82, "nf_synproxy_ipv4_fini" },
	{ 0xa85fd64a, "nf_ct_netns_put" },
	{ 0x79d14fae, "nf_synproxy_ipv6_init" },
	{ 0x61d0f644, "nf_synproxy_ipv4_init" },
	{ 0x5b9701f6, "nf_ct_netns_get" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xca9fc082, "synproxy_net_id" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0xc23cd9bb, "nft_chain_validate_hooks" },
};

MODULE_INFO(depends, "nf_tables,nf_synproxy_core,nf_conntrack");


MODULE_INFO(srcversion, "3E1B709D662C59B2851ACB1");
