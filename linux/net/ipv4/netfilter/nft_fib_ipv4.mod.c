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
	{ 0x84870b3a, "__fib_lookup" },
	{ 0x7e17e26d, "nft_register_expr" },
	{ 0xdcb764ad, "memset" },
	{ 0x9114099, "l3mdev_master_ifindex_rcu" },
	{ 0x2b9d1d31, "inet_dev_addr_type" },
	{ 0xd6ec49, "nft_fib_validate" },
	{ 0x284a7d38, "nft_fib_store_result" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2ce58ec9, "nft_unregister_expr" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe1a43e39, "fib_info_nh_uses_dev" },
	{ 0x8405e6ac, "nft_fib_init" },
	{ 0x86356e95, "fib_table_lookup" },
	{ 0xb3c36947, "nft_fib_policy" },
	{ 0x40a5c0bf, "nft_fib_dump" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xebcdc4a1, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_tables,nft_fib");


MODULE_INFO(srcversion, "BFAE4A9146108FC9EA17CD5");
