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
	{ 0x8cfd77b0, "ip_local_out" },
	{ 0xf6149499, "dst_release" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xdcb764ad, "memset" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xe532b385, "__pskb_copy_fclone" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0xbd0dcf3c, "ip_route_output_flow" },
	{ 0x70c52dc5, "nf_skb_duplicated" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D349050B58ADAABC15B08A7");
