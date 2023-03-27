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
	{ 0x6081751d, "nft_reject_policy" },
	{ 0x391deb8d, "nft_reject_dump" },
	{ 0x21fb899, "nft_reject_init" },
	{ 0x2ce58ec9, "nft_unregister_expr" },
	{ 0x7e17e26d, "nft_register_expr" },
	{ 0x1de558c1, "nft_reject_icmpv6_code" },
	{ 0xe2c84666, "nft_reject_icmp_code" },
	{ 0x74411481, "nf_send_reset" },
	{ 0xb3edf4fb, "nf_send_reset6" },
	{ 0x1fbaf05c, "nf_send_unreach6" },
	{ 0x35e0b556, "nf_send_unreach" },
	{ 0xc23cd9bb, "nft_chain_validate_hooks" },
};

MODULE_INFO(depends, "nft_reject,nf_tables,nf_reject_ipv4,nf_reject_ipv6");


MODULE_INFO(srcversion, "A9C5DAE94CF4B661AF2EF70");
