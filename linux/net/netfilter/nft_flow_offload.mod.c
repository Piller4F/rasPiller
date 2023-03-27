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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7e17e26d, "nft_register_expr" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0x55c07fae, "flow_offload_free" },
	{ 0xf6149499, "dst_release" },
	{ 0x4457918d, "flow_offload_add" },
	{ 0x15985aa4, "flow_offload_route_init" },
	{ 0x5a50cbd5, "flow_offload_alloc" },
	{ 0x3f587dc1, "nf_route" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x4cc8288a, "neigh_destroy" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x681897ab, "dev_fill_forward_path" },
	{ 0xdcb764ad, "memset" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x98cf60b3, "strlen" },
	{ 0x29f5e3c8, "nf_flow_table_cleanup" },
	{ 0x5b9701f6, "nf_ct_netns_get" },
	{ 0xcd4b8939, "nft_flowtable_lookup" },
	{ 0x21296244, "nf_tables_deactivate_flowtable" },
	{ 0xa85fd64a, "nf_ct_netns_put" },
	{ 0xc23cd9bb, "nft_chain_validate_hooks" },
};

MODULE_INFO(depends, "nf_tables,nf_flow_table,nf_conntrack");


MODULE_INFO(srcversion, "224D7EA18452068A5155636");
