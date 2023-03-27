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
	{ 0x27339f09, "param_ops_int" },
	{ 0x136c163, "unregister_md_personality" },
	{ 0xb6634242, "register_md_personality" },
	{ 0x9a1cab4b, "md_submit_discard_bio" },
	{ 0x8d09a8a, "md_flush_request" },
	{ 0xdcb764ad, "memset" },
	{ 0xa7cbb20d, "md_write_start" },
	{ 0x1b47234c, "md_bitmap_startwrite" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xcea981a3, "md_wait_for_blocked_rdev" },
	{ 0x11759a6b, "md_finish_reshape" },
	{ 0x45cafb, "bio_alloc_bioset" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xea189c80, "md_bitmap_close_sync" },
	{ 0xd41fd701, "md_bitmap_end_sync" },
	{ 0x5b83cb73, "md_bitmap_start_sync" },
	{ 0xeebcdc16, "md_bitmap_cond_end_sync" },
	{ 0x6b11e65c, "blk_queue_flag_clear" },
	{ 0xa38fa99e, "md_unregister_thread" },
	{ 0x11db660a, "blk_queue_io_opt" },
	{ 0xe818d096, "blk_queue_io_min" },
	{ 0x85df768e, "blk_queue_max_write_zeroes_sectors" },
	{ 0x8d3568f1, "blk_queue_max_write_same_sectors" },
	{ 0xa7e8db48, "blk_queue_max_discard_sectors" },
	{ 0xc5c8d9d6, "mddev_init_writes_pending" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8a7595a9, "bio_copy_data" },
	{ 0x89172575, "bio_add_page" },
	{ 0x921a7374, "bio_trim" },
	{ 0x85cfcf82, "submit_bio_wait" },
	{ 0x1ad9bc11, "rdev_clear_badblocks" },
	{ 0x29749c91, "md_check_recovery" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x3c787dd1, "sysfs_create_link" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x13627ada, "md_new_event" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6183a02, "md_do_sync" },
	{ 0xd0f53fa2, "rdev_set_badblocks" },
	{ 0xc460b3a7, "sync_page_io" },
	{ 0xdf01efa8, "kernfs_notify" },
	{ 0xd8d9844, "md_set_array_sectors" },
	{ 0x97c4c0b8, "md_bitmap_resize" },
	{ 0x7acf50c7, "md_register_thread" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xae2ed143, "bioset_init" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc070895d, "md_integrity_register" },
	{ 0x363458ca, "bio_chain" },
	{ 0x152f04ab, "bio_split" },
	{ 0x77c7619a, "bio_start_io_acct" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd8dfe5a8, "bdevname" },
	{ 0x29a223aa, "badblocks_check" },
	{ 0x9ed8e34c, "blk_queue_flag_set" },
	{ 0x431e0762, "disk_stack_limits" },
	{ 0x1c36e5ae, "md_integrity_add_rdev" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x891a00b4, "__traceiter_block_bio_remap" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0xae64f1dd, "__tracepoint_block_bio_remap" },
	{ 0xaf611179, "bio_clone_fast" },
	{ 0xf88a33b7, "__trace_note_message" },
	{ 0xb9b37016, "md_error" },
	{ 0x42b55a56, "bioset_exit" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x896730d5, "md_bitmap_endwrite" },
	{ 0x92c32042, "md_write_end" },
	{ 0xc48b95a7, "bio_end_io_acct_remapped" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0xda853d34, "bio_kmalloc" },
	{ 0x886870f9, "md_done_sync" },
	{ 0x17afb12f, "__put_page" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3b48a31b, "md_cluster_ops" },
	{ 0x393cac96, "seq_printf" },
	{ 0xa8b4d3fc, "bio_reset" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x56470118, "__warn_printk" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x41f57101, "md_wakeup_thread" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2e48a46e, "bio_endio" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0xbdb28e0b, "submit_bio_noacct" },
	{ 0xff820f96, "bio_associate_blkg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xebcf8f32, "md_bitmap_unplug" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xab2b89c5, "bio_put" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "ABF0977E19AA6052877BBBB");
