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
	{ 0xb80e5f41, "skb_queue_head" },
	{ 0x18e5f27f, "hid_add_device" },
	{ 0xf6bf2b2d, "sock_init_data" },
	{ 0x1048846a, "hid_ignore" },
	{ 0x53b954a2, "up_read" },
	{ 0xd833c14c, "kernel_sendmsg" },
	{ 0xde1302d2, "sockfd_lookup" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xbad9fd19, "hid_parse_report" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8d939648, "sock_no_getname" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc27c415b, "bt_sock_register" },
	{ 0xdd64e639, "strscpy" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcc023c02, "hid_input_report" },
	{ 0x668b19a1, "down_read" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0x771f85fb, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbbca8fba, "sock_no_mmap" },
	{ 0xfc75a988, "sock_no_recvmsg" },
	{ 0xb629cdec, "bt_sock_unlink" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0xbc6526e3, "sock_no_socketpair" },
	{ 0xdfc631df, "l2cap_conn_put" },
	{ 0xd0c89817, "sk_alloc" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xcf6c61c3, "l2cap_is_socket" },
	{ 0x9e65d54f, "sock_no_bind" },
	{ 0x5d0a64b1, "sock_no_listen" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x448ea7c9, "sock_no_accept" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x27600d4d, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0xadc5e3a, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe3056e58, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4102e5f3, "sock_no_shutdown" },
	{ 0x6617b90b, "bt_sock_link" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x32178799, "proto_register" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1353e697, "proto_unregister" },
	{ 0x3f9ccc80, "l2cap_register_user" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xe9045c2d, "__module_put_and_exit" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xce714e14, "hid_destroy_device" },
	{ 0xe9ae30fc, "hid_allocate_device" },
	{ 0x128238d1, "l2cap_conn_get" },
	{ 0xb18f4e29, "get_device" },
	{ 0xd0148e6c, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xbd7f1345, "sock_no_connect" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1b396629, "input_unregister_device" },
	{ 0x9abebc81, "sock_no_sendmsg" },
	{ 0xf782b356, "set_user_nice" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc8fd5c69, "bt_procfs_init" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x569e5a22, "bt_procfs_cleanup" },
	{ 0xf812cff6, "memscan" },
	{ 0xbadbc3a9, "l2cap_unregister_user" },
	{ 0x6f140995, "input_allocate_device" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "7815C62C6C19A44DB6EEFE3");
