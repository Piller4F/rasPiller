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
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x9e384b11, "l2cap_chan_set_defaults" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x4558a487, "single_open" },
	{ 0x68bae379, "single_release" },
	{ 0x59c35326, "l2cap_chan_del" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x18fcb916, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x42d9296a, "skb_copy" },
	{ 0xd2fc6268, "lowpan_header_compress" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x393cac96, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x9bb26a75, "l2cap_chan_send" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4cc8288a, "neigh_destroy" },
	{ 0x4492e730, "l2cap_add_psm" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0xdcf25530, "seq_read" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x1feef7c0, "l2cap_chan_close" },
	{ 0x718b8b7, "bt_info" },
	{ 0x6e2895f9, "hci_get_route" },
	{ 0xdcb764ad, "memset" },
	{ 0x9e540b77, "netif_rx_ni" },
	{ 0x23d425c7, "l2cap_chan_put" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0xc051115b, "free_netdev" },
	{ 0x70f7050d, "iov_iter_kvec" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc5dc4f28, "dev_close" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xa8604ebf, "nd_tbl" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xbea4a48b, "simple_attr_release" },
	{ 0xb26094c4, "debugfs_create_file_unsafe" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x28dc9dc5, "debugfs_attr_read" },
	{ 0x1be221c7, "dev_open" },
	{ 0x8d036199, "lowpan_header_decompress" },
	{ 0x1acd7981, "module_put" },
	{ 0x2425fd6f, "skb_copy_expand" },
	{ 0x8c353efd, "lowpan_unregister_netdev" },
	{ 0x65f32f84, "bt_debugfs" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0xdb6d48b2, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xe8945ff6, "l2cap_chan_connect" },
	{ 0x8bb2db38, "netdev_notify_peers" },
	{ 0x272efb2f, "lowpan_register_netdev" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x414ebb36, "l2cap_chan_create" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xa1803e34, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x290f67dd, "debugfs_attr_write" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2eb0acab, "simple_attr_open" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x68173019, "try_module_get" },
};

MODULE_INFO(depends, "bluetooth,6lowpan,ipv6");


MODULE_INFO(srcversion, "2F59F7E73592E723B2CCE00");
