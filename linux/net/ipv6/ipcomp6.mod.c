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
	{ 0x997c08ec, "xfrm_input" },
	{ 0x96065f8d, "xfrm6_rcv" },
	{ 0x3f3b91b9, "ipcomp_output" },
	{ 0xd5b10ac1, "ipcomp_input" },
	{ 0x973f7da9, "ipcomp_destroy" },
	{ 0xe23d56ea, "xfrm6_protocol_deregister" },
	{ 0x21b3b49, "xfrm_unregister_type" },
	{ 0x6517557e, "xfrm6_protocol_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x224bf7d1, "xfrm_register_type" },
	{ 0x7fb21623, "xfrm_state_insert" },
	{ 0xcd5025f9, "xfrm_init_state" },
	{ 0xc8342f9b, "xfrm6_tunnel_alloc_spi" },
	{ 0x7dae1325, "xfrm_state_alloc" },
	{ 0x984cc407, "xfrm6_tunnel_spi_lookup" },
	{ 0x81063e77, "ipcomp_init_state" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc9a84f9, "ip6_redirect" },
	{ 0x47b7d86c, "__xfrm_state_destroy" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xcc5ae9de, "ip6_update_pmtu" },
	{ 0xabaedbc4, "make_kuid" },
	{ 0x8c5d0b23, "xfrm_state_lookup" },
};

MODULE_INFO(depends, "ipv6,xfrm_ipcomp,xfrm6_tunnel");


MODULE_INFO(srcversion, "F4618135589C9A890EACC9D");
