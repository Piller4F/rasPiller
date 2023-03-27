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
	{ 0x1bd03ce1, "class_find_device" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb80e5f41, "skb_queue_head" },
	{ 0xe1f7f753, "release_sock" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf6bf2b2d, "sock_init_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3ac68802, "genl_register_family" },
	{ 0x25b5a5c9, "iov_iter_revert" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc8c04121, "genl_unregister_family" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xb96301bf, "sock_no_ioctl" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xd577cabe, "_copy_from_iter" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x42d9296a, "skb_copy" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8d939648, "sock_no_getname" },
	{ 0x8a969d4b, "sock_queue_rcv_skb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xe6ecbeae, "skb_recv_datagram" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xff282521, "rfkill_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5a08e008, "skb_unlink" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xbbca8fba, "sock_no_mmap" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0xbc6526e3, "sock_no_socketpair" },
	{ 0xa8d6be9, "__sock_recv_wifi_status" },
	{ 0xa5a62d7e, "device_del" },
	{ 0xd0c89817, "sk_alloc" },
	{ 0x748a46c3, "class_dev_iter_init" },
	{ 0xd1b597fe, "rfkill_alloc" },
	{ 0x9fbee235, "skb_copy_datagram_iter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9e65d54f, "sock_no_bind" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x638c7455, "ns_capable" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xbbc1b23a, "class_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x5a921311, "strncmp" },
	{ 0x5d0a64b1, "sock_no_listen" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x448ea7c9, "sock_no_accept" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x27600d4d, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3350c520, "netlink_unicast" },
	{ 0xbc41d96d, "device_add" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xadc5e3a, "init_net" },
	{ 0xac97d5fa, "__class_register" },
	{ 0x8c1398da, "devm_kfree" },
	{ 0x4102e5f3, "sock_no_shutdown" },
	{ 0x27ffccae, "__sock_recv_timestamp" },
	{ 0x1acd7981, "module_put" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x32178799, "proto_register" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x43cd0ea3, "netlink_broadcast" },
	{ 0xdb6d48b2, "put_device" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xeb137ec8, "datagram_poll" },
	{ 0xe01798b7, "sock_register" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1353e697, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x2d27fde1, "class_dev_iter_exit" },
	{ 0xc91801f5, "sock_alloc_send_skb" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xcad16848, "sk_error_report" },
	{ 0xe532b385, "__pskb_copy_fclone" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbd7f1345, "sock_no_connect" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8ce4e137, "genlmsg_put" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x9abebc81, "sock_no_sendmsg" },
	{ 0x3055489f, "device_initialize" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0xc0763484, "rfkill_blocked" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x68173019, "try_module_get" },
	{ 0xf8d0ccf0, "class_dev_iter_next" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe9f005b7, "skb_free_datagram" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "rfkill");


MODULE_INFO(srcversion, "B96A6A3BD637C696C64BF79");
