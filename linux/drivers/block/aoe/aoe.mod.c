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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x983a946d, "__blk_mq_end_request" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x33a860c8, "kmem_cache_destroy" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x11db660a, "blk_queue_io_opt" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0x4558a487, "single_open" },
	{ 0xd95f4e21, "blk_mq_run_hw_queues" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc29bf967, "strspn" },
	{ 0x5b5a0fb0, "blk_queue_max_hw_sectors" },
	{ 0x86912aaa, "blk_cleanup_disk" },
	{ 0x35ff02a6, "blkdev_compat_ptr_ioctl" },
	{ 0x68bae379, "single_release" },
	{ 0x2f07a679, "seq_puts" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x61922a56, "blk_mq_start_request" },
	{ 0x57a2a8ae, "blk_mq_unfreeze_queue" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x393cac96, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc6bfeb6c, "device_destroy" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x845319c9, "__register_chrdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf872eb32, "blk_mq_freeze_queue" },
	{ 0x6da467cb, "pfn_is_map_memory" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0xdcf25530, "seq_read" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2bd2e91, "param_ops_string" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0xddba2ba6, "del_gendisk" },
	{ 0xe0704df0, "blk_mq_free_tag_set" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x19ed7456, "dev_remove_pack" },
	{ 0x292268, "noop_llseek" },
	{ 0x12284cf8, "device_create" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xdd54a75d, "set_capacity" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x3355f423, "blk_update_request" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xadc5e3a, "init_net" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0x9f984513, "strrchr" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1953c958, "mempool_create" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xc76c46a7, "blk_mq_alloc_tag_set" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb1614920, "__blk_mq_alloc_disk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x96b759ad, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xa1803e34, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4da5be15, "blk_mq_quiesce_queue" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xb4b3b139, "blk_mq_unquiesce_queue" },
	{ 0xf782b356, "set_user_nice" },
	{ 0x96848186, "scnprintf" },
	{ 0x551ab123, "class_destroy" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x48356d12, "device_add_disk" },
	{ 0xfb47c0c8, "dev_add_pack" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x9fa52c93, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x42824447, "__class_create" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x22a6eede, "set_capacity_and_notify" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A6EB502A158D35513D88412");
