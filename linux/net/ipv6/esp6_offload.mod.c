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
	{ 0x7f23837, "inet6_del_offload" },
	{ 0xcf0dd0d5, "xfrm_unregister_type_offload" },
	{ 0xf08d5024, "inet6_add_offload" },
	{ 0x92997ed8, "_printk" },
	{ 0x53383eba, "xfrm_register_type_offload" },
	{ 0x997c08ec, "xfrm_input" },
	{ 0x8c5d0b23, "xfrm_state_lookup" },
	{ 0xba80f012, "secpath_set" },
	{ 0x2ddb089b, "xfrm_parse_spi" },
	{ 0x8a623472, "__skb_ext_del" },
	{ 0xadeddd39, "esp6_output_tail" },
	{ 0xb3acd91b, "skb_ext_add" },
	{ 0x1186a4d0, "esp6_output_head" },
	{ 0x5927b77b, "skb_mac_gso_segment" },
	{ 0xfe686b41, "inet6_offloads" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe3b0ed1b, "ipv6_skip_exthdr" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0x8c1d22f4, "esp6_input_done2" },
};

MODULE_INFO(depends, "esp6");


MODULE_INFO(srcversion, "2C0C6878A5F1F7A836F99EE");
