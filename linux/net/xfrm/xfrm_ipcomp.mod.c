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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x5a3da255, "xfrm_state_delete_tunnel" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0xb20e7236, "crypto_comp_compress" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcb1f14a9, "___pskb_trim" },
	{ 0x8228e911, "crypto_alloc_base" },
	{ 0x23fd3028, "vmalloc_node" },
	{ 0x17f8450f, "crypto_comp_decompress" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "150CE1509FF08D642C61AFE");
