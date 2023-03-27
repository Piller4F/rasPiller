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
	{ 0xe23d56ea, "xfrm6_protocol_deregister" },
	{ 0x21b3b49, "xfrm_unregister_type" },
	{ 0x6517557e, "xfrm6_protocol_register" },
	{ 0x224bf7d1, "xfrm_register_type" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0x1661441d, "crypto_ahash_digest" },
	{ 0xaa306d7, "skb_to_sgvec_nomark" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x334558f5, "skb_cow_data" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x491e5485, "xfrm_input_resume" },
	{ 0x47b7d86c, "__xfrm_state_destroy" },
	{ 0xc9a84f9, "ip6_redirect" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xcc5ae9de, "ip6_update_pmtu" },
	{ 0xabaedbc4, "make_kuid" },
	{ 0x8c5d0b23, "xfrm_state_lookup" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x5a66c4b3, "crypto_ahash_setkey" },
	{ 0xa8404b06, "crypto_alloc_ahash" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xdcb764ad, "memset" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x33ffd47, "xfrm_output_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
};

MODULE_INFO(depends, "ipv6,xfrm_algo");


MODULE_INFO(srcversion, "006B8C4FEB5A6537E067841");
