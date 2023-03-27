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
	{ 0x6e436d39, "xfrm4_rcv" },
	{ 0x3f3b91b9, "ipcomp_output" },
	{ 0xd5b10ac1, "ipcomp_input" },
	{ 0x973f7da9, "ipcomp_destroy" },
	{ 0x2dd00df9, "xfrm4_protocol_deregister" },
	{ 0x21b3b49, "xfrm_unregister_type" },
	{ 0xcc3244d1, "xfrm4_protocol_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x224bf7d1, "xfrm_register_type" },
	{ 0x6eda0e84, "ipv4_update_pmtu" },
	{ 0xadea974b, "ipv4_redirect" },
	{ 0x47b7d86c, "__xfrm_state_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7fb21623, "xfrm_state_insert" },
	{ 0xcd5025f9, "xfrm_init_state" },
	{ 0x7dae1325, "xfrm_state_alloc" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8c5d0b23, "xfrm_state_lookup" },
	{ 0x81063e77, "ipcomp_init_state" },
};

MODULE_INFO(depends, "xfrm_ipcomp");


MODULE_INFO(srcversion, "FC13258E5F97D2DFDCF1FF1");
