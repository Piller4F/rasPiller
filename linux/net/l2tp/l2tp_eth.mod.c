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
	{ 0xd7e682ff, "eth_mac_addr" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0x92997ed8, "_printk" },
	{ 0xcd8d6c8a, "l2tp_nl_register_ops" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0x8a623472, "__skb_ext_del" },
	{ 0x973cb9e7, "dev_forward_skb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8cabce1f, "l2tp_session_delete" },
	{ 0xf6149499, "dst_release" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc051115b, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd0148e6c, "__module_get" },
	{ 0x53c68bf6, "l2tp_session_dec_refcount" },
	{ 0xec11806, "register_netdevice" },
	{ 0x7e743f3d, "l2tp_session_register" },
	{ 0x5b643f51, "l2tp_session_inc_refcount" },
	{ 0xe1f7f753, "release_sock" },
	{ 0x9dd40721, "kernel_sock_ip_overhead" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0x241af2f6, "l2tp_session_create" },
	{ 0x5792f848, "strlcpy" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe64d7785, "l2tp_xmit_skb" },
	{ 0x1acd7981, "module_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x185f97af, "unregister_netdevice_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdcb764ad, "memset" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xcc3c5964, "ether_setup" },
};

MODULE_INFO(depends, "l2tp_netlink,l2tp_core");


MODULE_INFO(srcversion, "0A1F67DCE4201271045C901");
