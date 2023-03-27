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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0xb80e5f41, "skb_queue_head" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0x83caedf8, "debugfs_create_u8" },
	{ 0xf4ca96b0, "__hci_cmd_sync" },
	{ 0xa6ee775f, "hci_register_dev" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0x2cd2c61a, "hci_unregister_dev" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x2285c6f9, "debugfs_create_x16" },
	{ 0xf9994925, "of_property_read_variable_u8_array" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2505bf18, "kstrtol_from_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0x591d2839, "default_llseek" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xe7f1fdf9, "simple_open" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37f09290, "of_property_read_variable_u16_array" },
	{ 0x37a0cba, "kfree" },
	{ 0x702b033b, "hci_alloc_dev_priv" },
	{ 0x4829a47e, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x38117856, "hci_free_dev" },
	{ 0x62d17fa5, "skb_put" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "424479B65E8F10E47343A28");
