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
	{ 0x59150741, "tcf_em_unregister" },
	{ 0xc3b88400, "tcf_em_register" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0x24ff8dbf, "dev_get_by_index_rcu" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfcd0171e, "ip_set_test" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x4cedd419, "ip_set_nfnl_get_byindex" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f179fed, "ip_set_nfnl_put" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "2FFEEF47248D946AED3F588");
