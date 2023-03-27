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
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0xb81d8e1f, "proc_create_seq_private" },
	{ 0xadc5e3a, "init_net" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc051115b, "free_netdev" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x40761ec2, "netif_rx" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x37a0cba, "kfree" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x24d273d1, "add_timer" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xefbfd9c, "platform_device_unregister" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x21012113, "platform_device_register_full" },
	{ 0xdcb764ad, "memset" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xdf6501ba, "ax25_ip_xmit" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x393cac96, "seq_printf" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0x8eaff41f, "ax25_header_ops" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0x15ba50a6, "jiffies" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "523F8FD07B82EE3D542F783");
