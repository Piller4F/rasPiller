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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x1877807f, "sock_bindtoindex" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x7b261aab, "sock_release" },
	{ 0xc8efcfae, "metadata_dst_alloc" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd004b369, "call_netdevice_notifiers" },
	{ 0xae721402, "sock_create_kern" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xdcb764ad, "memset" },
	{ 0xbe1e211c, "kernel_connect" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x8e64f9fe, "iptunnel_xmit" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x50e9eb95, "kernel_sock_shutdown" },
	{ 0x99517682, "udp_encap_enable" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x67d6716d, "ipv6_stub" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f01767b, "udp_tunnel_nic_ops" },
	{ 0xc7f84d1b, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xf75e6edb, "udp_set_csum" },
	{ 0x8ce9945b, "kernel_bind" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4BB7341A13767E0DBF73A20");
