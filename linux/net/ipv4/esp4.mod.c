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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xf7a61aed, "skb_to_sgvec" },
	{ 0x7531ea1f, "xfrm_dev_resume" },
	{ 0x21b3b49, "xfrm_unregister_type" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6eda0e84, "ipv4_update_pmtu" },
	{ 0x2dd00df9, "xfrm4_protocol_deregister" },
	{ 0x87b8798d, "sg_next" },
	{ 0x652b5cfe, "pskb_put" },
	{ 0x4d98b116, "skb_page_frag_refill" },
	{ 0x334558f5, "skb_cow_data" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0x491e5485, "xfrm_input_resume" },
	{ 0xdcb764ad, "memset" },
	{ 0x368f4652, "skb_checksum" },
	{ 0x997c08ec, "xfrm_input" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x6d1b6f0b, "crypto_aead_encrypt" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x3fade900, "crypto_aead_setkey" },
	{ 0x224bf7d1, "xfrm_register_type" },
	{ 0xd20fa820, "xfrm_state_mtu" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xadea974b, "ipv4_redirect" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0x33ffd47, "xfrm_output_resume" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x62baf4cb, "skb_pull_rcsum" },
	{ 0x47b7d86c, "__xfrm_state_destroy" },
	{ 0x9ac65e6b, "km_new_mapping" },
	{ 0x6e436d39, "xfrm4_rcv" },
	{ 0xbcb8184a, "crypto_aead_decrypt" },
	{ 0xcc3244d1, "xfrm4_protocol_register" },
	{ 0xca4f1e22, "crypto_aead_setauthsize" },
	{ 0x81094cb6, "crypto_alloc_aead" },
	{ 0x8c5d0b23, "xfrm_state_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcb1f14a9, "___pskb_trim" },
	{ 0x8a623472, "__skb_ext_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x17afb12f, "__put_page" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "EEA83D9F2B1A6AB5DC9F0E5");
