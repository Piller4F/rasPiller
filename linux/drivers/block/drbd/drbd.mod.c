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
	{ 0xc84bb174, "blkdev_issue_discard" },
	{ 0x766a0927, "mempool_alloc_pages" },
	{ 0x33a860c8, "kmem_cache_destroy" },
	{ 0xb7a3442c, "fs_bio_set" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x45cafb, "bio_alloc_bioset" },
	{ 0x2b9da7a4, "genl_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3ac68802, "genl_register_family" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0x24d18093, "crypto_alloc_shash" },
	{ 0x349cba85, "strchr" },
	{ 0x4558a487, "single_open" },
	{ 0xefec290a, "lc_find" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xa8a68ecf, "_dev_printk" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xfd525ec7, "lc_put" },
	{ 0x5b5a0fb0, "blk_queue_max_hw_sectors" },
	{ 0xe61d59d0, "proc_create_single_data" },
	{ 0xc8c04121, "genl_unregister_family" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x86912aaa, "blk_cleanup_disk" },
	{ 0x3452ed0f, "send_sig" },
	{ 0xcc5663c3, "tcp_sock_set_nodelay" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x68bae379, "single_release" },
	{ 0x2f07a679, "seq_puts" },
	{ 0xc835bf85, "bd_link_disk_holder" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xb97220ff, "bitmap_parse" },
	{ 0x7b261aab, "sock_release" },
	{ 0x683f20ea, "kobject_uevent" },
	{ 0x1ecb51f3, "sock_recvmsg" },
	{ 0xfac8f498, "blk_queue_split" },
	{ 0x393cac96, "seq_printf" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0xae2ed143, "bioset_init" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae721402, "sock_create_kern" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6135b795, "crypto_shash_final" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0x5ee90776, "lc_seq_dump_details" },
	{ 0xb15b4109, "crc32c" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdcf25530, "seq_read" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x4cf5f5a8, "lc_is_used" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2bd2e91, "param_ops_string" },
	{ 0x4522d82a, "lc_reset" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x5718cff4, "blk_queue_max_segments" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0x641307b, "lc_destroy" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc3a98c1d, "lc_try_lock" },
	{ 0xdcb764ad, "memset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x8c0b31bf, "bd_unlink_disk_holder" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x4d9bf4e, "blk_set_stacking_limits" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xb672aa97, "lc_create" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xa7e8db48, "blk_queue_max_discard_sectors" },
	{ 0xddba2ba6, "del_gendisk" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x158b2e1d, "crypto_shash_update" },
	{ 0x89172575, "bio_add_page" },
	{ 0xd12369f6, "sock_sendmsg" },
	{ 0xf1e046cc, "panic" },
	{ 0x790bafd4, "blk_stack_limits" },
	{ 0xaf611179, "bio_clone_fast" },
	{ 0xcd279169, "nla_find" },
	{ 0x6d68668c, "blkdev_issue_zeroout" },
	{ 0xee228cb9, "blk_queue_segment_boundary" },
	{ 0x70f7050d, "iov_iter_kvec" },
	{ 0x71b85de, "crypto_shash_digest" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xd1ca1c12, "blkdev_get_by_path" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0xbd7b056, "seq_putc" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0x7aaabad8, "set_cpus_allowed_ptr" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x50e9eb95, "kernel_sock_shutdown" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xbdb28e0b, "submit_bio_noacct" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3350c520, "netlink_unicast" },
	{ 0x7257beee, "lc_element_by_index" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x1250cebc, "crypto_shash_setkey" },
	{ 0xce807a25, "up_write" },
	{ 0xadc5e3a, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0xc9252540, "copy_highpage" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2e48a46e, "bio_endio" },
	{ 0xab2b89c5, "bio_put" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xc1bacc77, "flush_signals" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x42b55a56, "bioset_exit" },
	{ 0x98d2ed9, "lc_try_get" },
	{ 0x77c7619a, "bio_start_io_acct" },
	{ 0x1acd7981, "module_put" },
	{ 0x6b11e65c, "blk_queue_flag_clear" },
	{ 0x6db40b69, "submit_bio" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0xd4010db0, "__free_pages" },
	{ 0x84c7a253, "blkdev_put" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x4f7958ee, "blkdev_issue_write_same" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x9134feb7, "lc_get" },
	{ 0x2d47ac83, "lc_committed" },
	{ 0x9ed8e34c, "blk_queue_flag_set" },
	{ 0x2d140a58, "genl_unlock" },
	{ 0xd8dfe5a8, "bdevname" },
	{ 0x43cd0ea3, "netlink_broadcast" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x2ce316ff, "nla_put_nohdr" },
	{ 0x5752f31b, "lc_del" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xc48b95a7, "bio_end_io_acct_remapped" },
	{ 0x1e93989e, "tcp_sock_set_quickack" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xfb9acf4c, "sched_set_fifo_low" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x96b759ad, "kmem_cache_create" },
	{ 0x20f63c1a, "kernel_accept" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x1bc5ef13, "blk_queue_write_cache" },
	{ 0xa1803e34, "seq_lseek" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x8ce4e137, "genlmsg_put" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xca9360b5, "rb_next" },
	{ 0x9e022292, "debugfs_create_symlink" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xf942e76e, "nla_put_64bit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2ca39914, "nla_reserve" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x48356d12, "device_add_disk" },
	{ 0xfb496645, "disk_update_readahead" },
	{ 0xbfbe53d5, "lc_get_cumulative" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x9902df29, "blk_queue_logical_block_size" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0xa0813e05, "tcp_sock_set_cork" },
	{ 0x8d3568f1, "blk_queue_max_write_same_sectors" },
	{ 0x17afb12f, "__put_page" },
	{ 0x68173019, "try_module_get" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0xe914e41e, "strcpy" },
	{ 0x970e7d79, "__blk_alloc_disk" },
	{ 0x9130c8f3, "set_disk_ro" },
	{ 0xac8fd995, "lc_seq_printf_stats" },
	{ 0xff820f96, "bio_associate_blkg" },
	{ 0x22a6eede, "set_capacity_and_notify" },
};

MODULE_INFO(depends, "lru_cache");


MODULE_INFO(srcversion, "98E710E58B3041F3046305B");
