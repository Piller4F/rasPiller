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
	{ 0x13445e92, "param_ops_bool" },
	{ 0x18fcb916, "no_llseek" },
	{ 0xd4c8974a, "misc_deregister" },
	{ 0xa0e0c9b1, "misc_register" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb80e5f41, "skb_queue_head" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0x25b5a5c9, "iov_iter_revert" },
	{ 0xbf35443c, "hci_recv_frame" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xd577cabe, "_copy_from_iter" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xa6ee775f, "hci_register_dev" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x702b033b, "hci_alloc_dev_priv" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3918325d, "nonseekable_open" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x37a0cba, "kfree" },
	{ 0x38117856, "hci_free_dev" },
	{ 0x2cd2c61a, "hci_unregister_dev" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe0e82ceb, "skb_queue_purge" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "A78187D837ED7C73ADC0A89");
