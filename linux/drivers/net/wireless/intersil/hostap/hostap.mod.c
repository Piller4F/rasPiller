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
	{ 0xec11806, "register_netdevice" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeb75e4c, "iw_handler_set_thrspy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf97dfac9, "generic_file_llseek" },
	{ 0xb81d8e1f, "proc_create_seq_private" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0xe61d59d0, "proc_create_single_data" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x2f07a679, "seq_puts" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdb1e1d6f, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x42d9296a, "skb_copy" },
	{ 0x6d7b27d3, "lib80211_crypt_delayed_deinit" },
	{ 0x393cac96, "seq_printf" },
	{ 0xad841033, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x12baeca1, "skb_realloc_headroom" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0x440cc275, "proc_remove" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x40761ec2, "netif_rx" },
	{ 0x896403a7, "wireless_spy_update" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd06eabd1, "PDE_DATA" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0x5a0baca8, "proc_mkdir" },
	{ 0x591d2839, "default_llseek" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x45ffae86, "iw_handler_get_spy" },
	{ 0xc051115b, "free_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0xbd7b056, "seq_putc" },
	{ 0xa7ba0485, "wireless_send_event" },
	{ 0x5792f848, "strlcpy" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0xc5dc4f28, "dev_close" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x24d273d1, "add_timer" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xadc5e3a, "init_net" },
	{ 0x1be221c7, "dev_open" },
	{ 0x1acd7981, "module_put" },
	{ 0x42945229, "lib80211_get_crypto_ops" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x60e5cc72, "netif_device_attach" },
	{ 0x4f967470, "netif_device_detach" },
	{ 0xd6e4f4ef, "eth_header_cache_update" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xbba1321f, "iw_handler_get_thrspy" },
	{ 0x92997ed8, "_printk" },
	{ 0xc42e99a7, "eth_type_trans" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0xcc3c5964, "ether_setup" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x185f97af, "unregister_netdevice_queue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0xd81baef0, "proc_create_data" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xf4ebd82f, "iw_handler_set_spy" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe76c264a, "eth_header_cache" },
	{ 0xbf2da18a, "param_array_ops" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x9fa52c93, "dev_queue_xmit" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x313ec2df, "eth_header" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x68173019, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x1b6678ba, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "lib80211");


MODULE_INFO(srcversion, "81B45EEC2904ED70A4BD09F");
