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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xc793df81, "cdev_del" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4392e2ef, "cdev_init" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x53b954a2, "up_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0x5f29f894, "media_device_unregister_entity" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xaeaaf45e, "media_devnode_create" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc6bfeb6c, "device_destroy" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc54c3347, "media_get_pad_index" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x40761ec2, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x591d2839, "default_llseek" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x31a0f1a7, "freezing_slow_path" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x6e1fa6b9, "i2c_new_client_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0x711552a2, "media_entity_pads_init" },
	{ 0xc051115b, "free_netdev" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6626afca, "down" },
	{ 0x292268, "noop_llseek" },
	{ 0x12284cf8, "device_create" },
	{ 0x24d273d1, "add_timer" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xee25a3b1, "i2c_unregister_device" },
	{ 0xce807a25, "up_write" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x66d87d38, "symbol_put_addr" },
	{ 0xf355108, "cdev_add" },
	{ 0x90a2a75e, "media_device_register_entity" },
	{ 0x1acd7981, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x44239691, "_dev_info" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x890c73ec, "eth_header_parse" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x1ebc1762, "media_create_pad_link" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0x7a345b47, "media_create_pad_links" },
	{ 0xfb348166, "media_create_intf_link" },
	{ 0xcc3c5964, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4df02057, "crc32_be" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xcf2a6966, "up" },
	{ 0x551ab123, "class_destroy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x42824447, "__class_create" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x313ec2df, "eth_header" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x68173019, "try_module_get" },
	{ 0x59ca05ed, "media_devnode_remove" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "mc");


MODULE_INFO(srcversion, "A7A7CE4858D7EE5264B68C0");
