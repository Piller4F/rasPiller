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
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0xa7855737, "nf_log_unregister" },
	{ 0x9312c795, "nf_log_register" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x80c68137, "nf_log_buf_close" },
	{ 0xd4961de, "nf_log_buf_open" },
	{ 0x9aaeefce, "sysctl_nf_log_all_netns" },
	{ 0xadc5e3a, "init_net" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0x3d0d8443, "nf_log_set" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xcd6f2dc9, "nf_log_buf_add" },
	{ 0x74227cca, "from_kgid_munged" },
	{ 0x913c3c7f, "from_kuid_munged" },
	{ 0x9ed538b6, "init_user_ns" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x7015a9c5, "nf_log_unset" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7B18B017471954CE1827FEB");
