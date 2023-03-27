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
	{ 0x8c9e446, "tty_unregister_ldisc" },
	{ 0x9be07d44, "tty_register_ldisc" },
	{ 0xdf6501ba, "ax25_ip_xmit" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0xdcb764ad, "memset" },
	{ 0x650d9766, "tty_mode_ioctl" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x98cf60b3, "strlen" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc051115b, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x40761ec2, "netif_rx" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x58f204e4, "tty_unthrottle" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa6257a2f, "complete" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x681d8fba, "netif_schedule_queue" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x92997ed8, "_printk" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0x8eaff41f, "ax25_header_ops" },
	{ 0xac93ae05, "ax25_bcast" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "93BEACD7FC0088191BC6BF7");
