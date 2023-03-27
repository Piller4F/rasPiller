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
	{ 0xe1f7f753, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6fe8451e, "device_remove_file" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf6bf2b2d, "sock_init_data" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xb81d8e1f, "proc_create_seq_private" },
	{ 0x25b5a5c9, "iov_iter_revert" },
	{ 0x98cf60b3, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x3452ed0f, "send_sig" },
	{ 0x83a84ef2, "_proc_mkdir" },
	{ 0x316aad68, "sock_gettstamp" },
	{ 0x2f07a679, "seq_puts" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xd577cabe, "_copy_from_iter" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x393cac96, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0xe6ecbeae, "skb_recv_datagram" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xc492e2d, "sock_no_sendpage" },
	{ 0xbbca8fba, "sock_no_mmap" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0xd06eabd1, "PDE_DATA" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0xbc6526e3, "sock_no_socketpair" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0xa5a62d7e, "device_del" },
	{ 0x6c289ab5, "device_register" },
	{ 0xd0c89817, "sk_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9fbee235, "skb_copy_datagram_iter" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xbbc1b23a, "class_unregister" },
	{ 0xbd7b056, "seq_putc" },
	{ 0x5d0a64b1, "sock_no_listen" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x448ea7c9, "sock_no_accept" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x112af342, "sock_wake_async" },
	{ 0x27600d4d, "sk_free" },
	{ 0x292268, "noop_llseek" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xadc5e3a, "init_net" },
	{ 0xac97d5fa, "__class_register" },
	{ 0xa353aef4, "device_create_file" },
	{ 0x53a6f8b6, "__sock_recv_ts_and_drops" },
	{ 0x1acd7981, "module_put" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x32178799, "proto_register" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe01798b7, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0x1353e697, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xdec1062e, "remove_proc_subtree" },
	{ 0xd81baef0, "proc_create_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x68173019, "try_module_get" },
	{ 0xe9f005b7, "skb_free_datagram" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "53D16AA9BB88659C2EBA3A4");
