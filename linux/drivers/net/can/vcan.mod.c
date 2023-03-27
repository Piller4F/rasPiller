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
	{ 0x13445e92, "param_ops_bool" },
	{ 0xf74ce92, "rtnl_link_unregister" },
	{ 0xf56d8a2, "rtnl_link_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9e540b77, "netif_rx_ni" },
	{ 0x5b89bed1, "sock_efree" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x56470118, "__warn_printk" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ED5CA7CD3D534AA7353FEDC");
