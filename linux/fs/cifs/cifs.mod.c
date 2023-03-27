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
	{ 0x6a5fa363, "sigprocmask" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x454ef91, "__fscache_acquire_cookie" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x33a860c8, "kmem_cache_destroy" },
	{ 0x33081e3d, "iget_failed" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x1de5bf10, "fs_param_is_u64" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdef1096d, "cifs_md4_update" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xe9ead25c, "drop_nlink" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0xc36c0adb, "set_anon_super" },
	{ 0xdc384ba1, "iov_iter_npages" },
	{ 0x2cca97dc, "iterate_supers_type" },
	{ 0x53b954a2, "up_read" },
	{ 0xceab0311, "strchrnul" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb9a03d4f, "unload_nls" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf97dfac9, "generic_file_llseek" },
	{ 0x2b2c3714, "__fscache_wait_on_page_write" },
	{ 0x81049b67, "__mark_inode_dirty" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0xf9c7e999, "d_invalidate" },
	{ 0x2bd32ed, "__set_page_dirty_nobuffers" },
	{ 0x1b5052c6, "key_invalidate" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x24d18093, "crypto_alloc_shash" },
	{ 0x8e2b16db, "filemap_fault" },
	{ 0x349cba85, "strchr" },
	{ 0x4558a487, "single_open" },
	{ 0xcd43fc72, "mntget" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x924737fd, "generic_write_checks" },
	{ 0x25b5a5c9, "iov_iter_revert" },
	{ 0x13ce87e8, "asn1_ber_decoder" },
	{ 0x7cf5b4bd, "bpf_trace_run7" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x98cf60b3, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc29bf967, "strspn" },
	{ 0x397df76b, "filemap_write_and_wait_range" },
	{ 0x26c5ad8f, "__generic_file_write_iter" },
	{ 0x6612a84f, "iget5_locked" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x5f15eb20, "prepare_kernel_cred" },
	{ 0xe61d59d0, "proc_create_single_data" },
	{ 0x913c3c7f, "from_kuid_munged" },
	{ 0x7740d41e, "iov_iter_get_pages_alloc" },
	{ 0x9aaf5964, "kill_anon_super" },
	{ 0xb8b043f2, "kfree_link" },
	{ 0x2c9757f6, "__fs_parse" },
	{ 0x3452ed0f, "send_sig" },
	{ 0xcc5663c3, "tcp_sock_set_nodelay" },
	{ 0x69a7455d, "seq_escape" },
	{ 0x2ec6bba0, "errseq_set" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x68bae379, "single_release" },
	{ 0x2f07a679, "seq_puts" },
	{ 0x4477ed11, "pagecache_get_page" },
	{ 0x7955dfbb, "truncate_inode_pages_range" },
	{ 0x2c26d7a0, "generic_file_open" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x99ede787, "iov_iter_discard" },
	{ 0x7b261aab, "sock_release" },
	{ 0x5112f49a, "__lock_page" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0xad5668b1, "touch_atime" },
	{ 0x798f3830, "cifs_md4_init" },
	{ 0xb92dc6fb, "deactivate_locked_super" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xb5981cc5, "dput" },
	{ 0x1ecb51f3, "sock_recvmsg" },
	{ 0x393cac96, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xca6efaf5, "__fscache_write_page" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x44e9a829, "match_token" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7bd85b8d, "inc_nlink" },
	{ 0xd19cecff, "invalidate_inode_pages2" },
	{ 0xa75f581c, "request_key_tag" },
	{ 0x9ed538b6, "init_user_ns" },
	{ 0x29564008, "lookup_positive_unlocked" },
	{ 0xb48d4d22, "security_sb_eat_lsm_opts" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3096be16, "names_cachep" },
	{ 0xb504c25a, "filemap_fdatawait_range" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa37403f7, "__fscache_register_netfs" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6135b795, "crypto_shash_final" },
	{ 0x8d01884f, "d_add" },
	{ 0xa7ea2dc0, "lru_cache_add" },
	{ 0x147d924f, "trace_event_buffer_reserve" },
	{ 0xf94fa58, "generic_read_dir" },
	{ 0xe7f42b9f, "super_setup_bdi" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xabd9af6d, "cifs_arc4_crypt" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0xdd64e639, "strscpy" },
	{ 0x19eaf08d, "redirty_page_for_writepage" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x2efece57, "__put_net" },
	{ 0xdcf25530, "seq_read" },
	{ 0x134b810d, "override_creds" },
	{ 0x42d4bd02, "bpf_trace_run3" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xf71733c5, "__fscache_uncache_page" },
	{ 0x6fc1dcef, "copy_page_from_iter" },
	{ 0x57651a8b, "set_page_dirty" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4841bdee, "strnchr" },
	{ 0x2e3485c0, "truncate_setsize" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xb3687850, "out_of_line_wait_on_bit_lock" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0x50fa9f6e, "end_page_writeback" },
	{ 0x74227cca, "from_kgid_munged" },
	{ 0xece784c2, "rb_first" },
	{ 0xb880495f, "make_kgid" },
	{ 0xe3eba22e, "__fscache_update_cookie" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x63cbbf43, "key_revoke" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0x4b7ff4bb, "iov_iter_bvec" },
	{ 0xdcb764ad, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x2e188c54, "from_kuid" },
	{ 0x5a0baca8, "proc_mkdir" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x2228590f, "__fscache_read_or_alloc_page" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x11089ac7, "_ctype" },
	{ 0xe58a9348, "finish_no_open" },
	{ 0x20463df4, "wait_for_completion_killable" },
	{ 0x31a0f1a7, "freezing_slow_path" },
	{ 0x2e2b40d2, "strncat" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf04a2644, "copy_page_to_iter" },
	{ 0x7d186cab, "file_modified" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xdaf3bdc3, "iov_iter_get_pages" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x158b2e1d, "crypto_shash_update" },
	{ 0xd12369f6, "sock_sendmsg" },
	{ 0x67fb15f1, "generic_writepages" },
	{ 0xd5b56283, "sget" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x70f7050d, "iov_iter_kvec" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x64db9a5, "mark_mounts_for_expiry" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x9166fada, "strncpy" },
	{ 0x56837274, "trace_event_reg" },
	{ 0x6dcf857f, "uuid_null" },
	{ 0x6bdcabb5, "__fscache_maybe_release_page" },
	{ 0x41fa1e0b, "from_kgid" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0xbd7b056, "seq_putc" },
	{ 0x2e8bd60f, "d_move" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc4c73891, "cifs_arc4_setkey" },
	{ 0xa1018fa2, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x769d5051, "set_nlink" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x50e9eb95, "kernel_sock_shutdown" },
	{ 0xafba5fd4, "setattr_copy" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x683f500e, "bpf_trace_run5" },
	{ 0x77c2cfa3, "wait_on_page_writeback" },
	{ 0xa681fe88, "generate_random_uuid" },
	{ 0xe25217bd, "unlock_two_nondirectories" },
	{ 0x6d1b6f0b, "crypto_aead_encrypt" },
	{ 0x479e5038, "dentry_path_raw" },
	{ 0x8a5178ed, "init_uts_ns" },
	{ 0xc401ef09, "user_describe" },
	{ 0x892f38c9, "truncate_pagecache" },
	{ 0x49b3a51d, "kmem_cache_create_usercopy" },
	{ 0xa07a37f0, "memchr" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x2aa0843e, "mempool_resize" },
	{ 0x78e702c6, "key_type_logon" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x1250cebc, "crypto_shash_setkey" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x700c176b, "unlock_page" },
	{ 0xbebe1a6b, "generic_file_read_iter" },
	{ 0xb7c0f443, "sort" },
	{ 0xce807a25, "up_write" },
	{ 0x253260b9, "crypto_req_done" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe3056e58, "fput" },
	{ 0x1bff17bf, "find_get_pages_range_tag" },
	{ 0x7fda8347, "perf_trace_run_bpf_submit" },
	{ 0x69e683de, "uuid_gen" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3fade900, "crypto_aead_setkey" },
	{ 0xde31500c, "key_put" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xd342ce83, "dns_query" },
	{ 0xb9600533, "__fscache_unregister_netfs" },
	{ 0x61651be, "strcat" },
	{ 0x94bf03ca, "utf8_to_utf32" },
	{ 0xc97ab665, "file_write_and_wait_range" },
	{ 0xcda10e9e, "inode_init_once" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x1acd7981, "module_put" },
	{ 0x38da90b4, "mnt_drop_write_file" },
	{ 0xc6cbbc89, "capable" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x41314665, "kmem_cache_alloc" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x24639893, "generic_file_mmap" },
	{ 0xe073cc5c, "simple_dir_operations" },
	{ 0xd5bf4c18, "__filemap_set_wb_err" },
	{ 0x359a8571, "generic_setlease" },
	{ 0x1556d7e0, "truncate_inode_pages_final" },
	{ 0xabaedbc4, "make_kuid" },
	{ 0x20a52f2, "trace_event_ignore_this_pid" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x88fc5e84, "load_nls" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbe5ef4a7, "vfs_parse_fs_string" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x1953c958, "mempool_create" },
	{ 0x605790dc, "fiemap_fill_next_extent" },
	{ 0x92997ed8, "_printk" },
	{ 0x2a8f1b70, "__d_lookup_done" },
	{ 0xb1b9ca2a, "unlock_new_inode" },
	{ 0x6a4ac143, "mnt_want_write_file" },
	{ 0x65ff2c8, "deactivate_super" },
	{ 0x8b8059bd, "in_group_p" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xaa6d0860, "d_drop" },
	{ 0x1e49f097, "lock_two_nondirectories" },
	{ 0x6ce9a6d5, "inode_newsize_ok" },
	{ 0x4d74da7d, "fs_param_is_u32" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x2aa2fb6d, "locks_lock_inode_wait" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x18cc3332, "trace_event_buffer_commit" },
	{ 0xe9045c2d, "__module_put_and_exit" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xd3cd4150, "__put_cred" },
	{ 0x746a5858, "vfs_setpos" },
	{ 0x761bc761, "keyring_alloc" },
	{ 0x862299e3, "clear_page_dirty_for_io" },
	{ 0xc6c6214d, "register_key_type" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x96b759ad, "kmem_cache_create" },
	{ 0x62346e86, "register_filesystem" },
	{ 0x398caeb6, "__fscache_relinquish_cookie" },
	{ 0xd0148e6c, "__module_get" },
	{ 0x24209a1a, "event_triggers_call" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4a579546, "generic_file_write_iter" },
	{ 0xac26f07c, "fs_param_is_bool" },
	{ 0xbcb8184a, "crypto_aead_decrypt" },
	{ 0xca4f1e22, "crypto_aead_setauthsize" },
	{ 0x5f41ab2e, "add_to_page_cache_locked" },
	{ 0x44ba7bae, "d_hash_and_lookup" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x85c5a49d, "bpf_trace_run2" },
	{ 0xd3c823fa, "__test_set_page_writeback" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x81094cb6, "crypto_alloc_aead" },
	{ 0xaa6f1e05, "iter_file_splice_write" },
	{ 0x3182ebed, "logfc" },
	{ 0xa1803e34, "seq_lseek" },
	{ 0xbdfc304b, "iput" },
	{ 0x79ca3fc2, "finish_open" },
	{ 0xfc201b66, "sprint_oid" },
	{ 0xa1c94cc6, "posix_lock_file" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcc857d2, "__fscache_readpages_cancel" },
	{ 0x82f8fe59, "iunique" },
	{ 0x500e84b1, "truncate_pagecache_range" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x72a38246, "generic_permission" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb64752c, "fiemap_prep" },
	{ 0x591c79cc, "trace_event_raw_init" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xb132cad9, "current_time" },
	{ 0x9a08aa19, "load_nls_default" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x901872ec, "d_splice_alias" },
	{ 0x38ac36ab, "unregister_key_type" },
	{ 0x9ba47c9e, "__put_task_struct" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x96848186, "scnprintf" },
	{ 0x6970de83, "trace_event_printf" },
	{ 0xf777f0f4, "d_make_root" },
	{ 0xd93c010f, "iov_iter_advance" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xca9360b5, "rb_next" },
	{ 0xc20aeaa6, "vfs_submount" },
	{ 0x9836f672, "bpf_trace_run6" },
	{ 0x23231c2c, "unregister_filesystem" },
	{ 0x2ba786c0, "init_special_inode" },
	{ 0xeaf0a57c, "look_up_OID" },
	{ 0x7ef23c67, "trace_raw_output_prep" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0xe5bb0759, "filemap_map_pages" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x98860b31, "__break_lease" },
	{ 0xee989505, "generic_file_splice_read" },
	{ 0xd9edceee, "vmalloc_to_page" },
	{ 0xd2207e91, "proc_create" },
	{ 0xa1219951, "mnt_set_expiry" },
	{ 0x132ec17e, "fs_param_is_string" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x21138f12, "grab_cache_page_write_begin" },
	{ 0x345845e3, "__fscache_read_or_alloc_pages" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xeddc14d5, "bpf_trace_run4" },
	{ 0xdc30ae07, "clear_inode" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x333b7a76, "timestamp_truncate" },
	{ 0x43ad8cd7, "_copy_to_iter" },
	{ 0x7336a49b, "d_instantiate" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xa0813e05, "tcp_sock_set_cork" },
	{ 0x16c2ed71, "flush_dcache_page" },
	{ 0x5fbb9461, "revert_creds" },
	{ 0x6436ec1, "d_alloc_parallel" },
	{ 0x17afb12f, "__put_page" },
	{ 0x3f3978e7, "__sock_create" },
	{ 0x4c73d061, "clear_nlink" },
	{ 0xceecd9e4, "cifs_md4_final" },
	{ 0xe03eb1c7, "vfs_fsync_range" },
	{ 0x5bf6fd5a, "setattr_prepare" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x127c99d6, "generic_fillattr" },
	{ 0xab7b4c18, "filemap_fdatawrite" },
	{ 0xe914e41e, "strcpy" },
	{ 0x57d51349, "generic_copy_file_range" },
	{ 0x699d2579, "__page_file_index" },
	{ 0x484f6edf, "ktime_get_coarse_real_ts64" },
	{ 0x3dbabb6f, "truncate_inode_pages" },
	{ 0xd26f6761, "posix_test_lock" },
};

MODULE_INFO(depends, "cifs_md4,cifs_arc4");


MODULE_INFO(srcversion, "DEC828EDD74417FEB94AE68");