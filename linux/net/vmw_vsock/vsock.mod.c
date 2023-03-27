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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe1f7f753, "release_sock" },
	{ 0xf6bf2b2d, "sock_init_data" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xb96301bf, "sock_no_ioctl" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xbabe8df, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8a969d4b, "sock_queue_rcv_skb" },
	{ 0x9ed538b6, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3918325d, "nonseekable_open" },
	{ 0xc492e2d, "sock_no_sendpage" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0xbbca8fba, "sock_no_mmap" },
	{ 0xa0e0c9b1, "misc_register" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0xbc6526e3, "sock_no_socketpair" },
	{ 0xd0c89817, "sk_alloc" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x5d0a64b1, "sock_no_listen" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x448ea7c9, "sock_no_accept" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x27600d4d, "sk_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x1acd7981, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x32178799, "proto_register" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe01798b7, "sock_register" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1353e697, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xcad16848, "sk_error_report" },
	{ 0xd3cd4150, "__put_cred" },
	{ 0x4369e629, "ns_capable_noaudit" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd0148e6c, "__module_get" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x9fa52c93, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd4c8974a, "misc_deregister" },
	{ 0x68173019, "try_module_get" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "25E97D6C94F94486100122F");
