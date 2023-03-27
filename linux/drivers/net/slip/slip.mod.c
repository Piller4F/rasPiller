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
	{ 0x27339f09, "param_ops_int" },
	{ 0x8c9e446, "tty_unregister_ldisc" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x9be07d44, "tty_register_ldisc" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x98cf60b3, "strlen" },
	{ 0x650d9766, "tty_mode_ioctl" },
	{ 0xc051115b, "free_netdev" },
	{ 0xec11806, "register_netdevice" },
	{ 0x15f90688, "slhc_init" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x24d273d1, "add_timer" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5dc4f28, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc6cbbc89, "capable" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf36f42a9, "slhc_uncompress" },
	{ 0x9e540b77, "netif_rx_ni" },
	{ 0x4829a47e, "memcpy" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x43f9ebc8, "slhc_remember" },
	{ 0x2a928918, "slhc_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ff74ec7, "tty_hangup" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcdc0040, "slhc_compress" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x92997ed8, "_printk" },
	{ 0xb055516b, "tty_chars_in_buffer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x6a180a8d, "dev_trans_start" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
};

MODULE_INFO(depends, "slhc");


MODULE_INFO(srcversion, "AC8D53627221C17590F0102");
