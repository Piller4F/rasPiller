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
	{ 0x598d381a, "unregister_qdisc" },
	{ 0x706384c8, "register_qdisc" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x12baeca1, "skb_realloc_headroom" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6565dfed, "__qdisc_calculate_pkt_len" },
	{ 0x4665564f, "tcf_classify" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xde1302d2, "sockfd_lookup" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8a768e, "gnet_stats_copy_queue" },
	{ 0x27a99989, "gnet_stats_copy_basic" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xa8ddb80f, "tcf_block_get" },
	{ 0x30f3b603, "qdisc_create_dflt" },
	{ 0x1fefdfb7, "pfifo_qdisc_ops" },
	{ 0x71f025cc, "noop_qdisc" },
	{ 0x4d715606, "qdisc_reset" },
	{ 0x92997ed8, "_printk" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x37a0cba, "kfree" },
	{ 0xe3056e58, "fput" },
	{ 0x2a957173, "tcf_block_put" },
	{ 0x26b7da58, "qdisc_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D0450989F11BF4F07B01384");
