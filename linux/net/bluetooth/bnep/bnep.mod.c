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
	{ 0xf6bf2b2d, "sock_init_data" },
	{ 0x53b954a2, "up_read" },
	{ 0xd833c14c, "kernel_sendmsg" },
	{ 0xde1302d2, "sockfd_lookup" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x8d939648, "sock_no_getname" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0xc27c415b, "bt_sock_register" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xbbca8fba, "sock_no_mmap" },
	{ 0xfc75a988, "sock_no_recvmsg" },
	{ 0xb629cdec, "bt_sock_unlink" },
	{ 0xdcb764ad, "memset" },
	{ 0x9e540b77, "netif_rx_ni" },
	{ 0xbc6526e3, "sock_no_socketpair" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0xd0c89817, "sk_alloc" },
	{ 0xcf6c61c3, "l2cap_is_socket" },
	{ 0x9e65d54f, "sock_no_bind" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0xc051115b, "free_netdev" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0x5d0a64b1, "sock_no_listen" },
	{ 0x448ea7c9, "sock_no_accept" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x27600d4d, "sk_free" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0xadc5e3a, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe3056e58, "fput" },
	{ 0x4102e5f3, "sock_no_shutdown" },
	{ 0x6617b90b, "bt_sock_link" },
	{ 0x1acd7981, "module_put" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x32178799, "proto_register" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1353e697, "proto_unregister" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0xc42e99a7, "eth_type_trans" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xe9045c2d, "__module_put_and_exit" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xcc3c5964, "ether_setup" },
	{ 0xd0148e6c, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbd7f1345, "sock_no_connect" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4df02057, "crc32_be" },
	{ 0x9abebc81, "sock_no_sendmsg" },
	{ 0xf782b356, "set_user_nice" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xc8fd5c69, "bt_procfs_init" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x569e5a22, "bt_procfs_cleanup" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "5821AE4CBD3875CFD443982");
