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
	{ 0x57b6c96e, "get_acl" },
	{ 0x1f1400a9, "vfs_create" },
	{ 0xd54ab943, "d_path" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe1f7f753, "release_sock" },
	{ 0x33a860c8, "kmem_cache_destroy" },
	{ 0xb0ff696a, "kernel_write" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x1127fed6, "set_groups" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6e8e8b05, "locks_free_lock" },
	{ 0x7061c12e, "sock_setsockopt" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x53b954a2, "up_read" },
	{ 0xceab0311, "strchrnul" },
	{ 0xb9a03d4f, "unload_nls" },
	{ 0x7410aba2, "strreplace" },
	{ 0x8abacc47, "get_max_files" },
	{ 0xd833c14c, "kernel_sendmsg" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf97dfac9, "generic_file_llseek" },
	{ 0x3ac68802, "genl_register_family" },
	{ 0x81049b67, "__mark_inode_dirty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x24d18093, "crypto_alloc_shash" },
	{ 0x349cba85, "strchr" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc40e1622, "inode_permission" },
	{ 0x13ce87e8, "asn1_ber_decoder" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa02e1b37, "locks_delete_block" },
	{ 0xfe95a5fc, "dev_get_flags" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x5f15eb20, "prepare_kernel_cred" },
	{ 0x913c3c7f, "from_kuid_munged" },
	{ 0xc8b83da8, "dget_parent" },
	{ 0xc8c04121, "genl_unregister_family" },
	{ 0xcfe19558, "vfs_link" },
	{ 0xa5dc5138, "done_path_create" },
	{ 0xcc5663c3, "tcp_sock_set_nodelay" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x8f3a529d, "vfs_llseek" },
	{ 0x7b261aab, "sock_release" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xddf20663, "vfs_clone_file_range" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x5b3e282f, "xa_store" },
	{ 0xb5981cc5, "dput" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8fa25c24, "xa_find" },
	{ 0x4887eaa5, "dentry_open" },
	{ 0xb8c7ce33, "vfs_path_lookup" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0x9ed538b6, "init_user_ns" },
	{ 0x732dd326, "groups_free" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6135b795, "crypto_shash_final" },
	{ 0xa604aca8, "vfs_fsync" },
	{ 0x999e8297, "vfree" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xfd5000c7, "kernel_listen" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xdd64e639, "strscpy" },
	{ 0x8c4fe4e9, "path_get" },
	{ 0x134b810d, "override_creds" },
	{ 0x745a981, "xa_erase" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x1fba456a, "vfs_rmdir" },
	{ 0x1433d9b3, "unlock_rename" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x74227cca, "from_kgid_munged" },
	{ 0xb880495f, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x157ba90a, "kernel_read" },
	{ 0xa4056d91, "vfs_lock_file" },
	{ 0x9b212f4, "kern_path" },
	{ 0xdcb764ad, "memset" },
	{ 0x2e188c54, "from_kuid" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x2762a2b5, "locks_alloc_lock" },
	{ 0x895fd5db, "sock_set_reuseaddr" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x11089ac7, "_ctype" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0x31a0f1a7, "freezing_slow_path" },
	{ 0xba85b2ad, "set_posix_acl" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xbbc1b23a, "class_unregister" },
	{ 0x158b2e1d, "crypto_shash_update" },
	{ 0xffb7c514, "ida_free" },
	{ 0x1b991213, "vfs_getxattr" },
	{ 0x41fa1e0b, "from_kgid" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x5a921311, "strncmp" },
	{ 0x9b496b21, "posix_acl_alloc" },
	{ 0xa1018fa2, "kmem_cache_free" },
	{ 0x354bfe03, "lock_rename" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x954f099c, "idr_preload" },
	{ 0x50e9eb95, "kernel_sock_shutdown" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x3350c520, "netlink_unicast" },
	{ 0x6d1b6f0b, "crypto_aead_encrypt" },
	{ 0x8e48fcbc, "kernel_getpeername" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x1250cebc, "crypto_shash_setkey" },
	{ 0xce807a25, "up_write" },
	{ 0xadc5e3a, "init_net" },
	{ 0xac97d5fa, "__class_register" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe3056e58, "fput" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3fade900, "crypto_aead_setkey" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x1acd7981, "module_put" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x9f984513, "strrchr" },
	{ 0x41314665, "kmem_cache_alloc" },
	{ 0x70b3b6ef, "netlink_capable" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x22532add, "locks_init_lock" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0xabaedbc4, "make_kuid" },
	{ 0x88fc5e84, "load_nls" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x26a24f44, "vfs_fallocate" },
	{ 0xf5fc727f, "sock_set_sndtimeo" },
	{ 0x92997ed8, "_printk" },
	{ 0xb16ac625, "lookup_one" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0x66d8dbe2, "vfs_statfs" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x72f3ac86, "vfs_mkdir" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xd3cd4150, "__put_cred" },
	{ 0x58b73bc7, "match_wildcard" },
	{ 0x500b2956, "vfs_copy_file_range" },
	{ 0x76b34c79, "path_put" },
	{ 0xe2df1af0, "vfs_truncate" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x5a509e6d, "vfs_unlink" },
	{ 0x96b759ad, "kmem_cache_create" },
	{ 0xc156485, "kernel_recvmsg" },
	{ 0xd0148e6c, "__module_get" },
	{ 0x20f63c1a, "kernel_accept" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbcb8184a, "crypto_aead_decrypt" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xca4f1e22, "crypto_aead_setauthsize" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x5cb09f24, "I_BDEV" },
	{ 0x43d22fb9, "groups_alloc" },
	{ 0x81094cb6, "crypto_alloc_aead" },
	{ 0x8e24334, "blockdev_superblock" },
	{ 0x4b2663ed, "kern_path_create" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xfc201b66, "sprint_oid" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8ce4e137, "genlmsg_put" },
	{ 0xb132cad9, "current_time" },
	{ 0x9a08aa19, "load_nls_default" },
	{ 0xfe2fe91e, "sock_create" },
	{ 0x8ce9945b, "kernel_bind" },
	{ 0x92e4aaae, "abort_creds" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xdc4af5e8, "iterate_dir" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xd9edceee, "vmalloc_to_page" },
	{ 0x924b8ee5, "vfs_rename" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x71d00a9, "vfs_getattr" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6efedac4, "notify_change" },
	{ 0xcb0dbca8, "vfs_setxattr" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x5fbb9461, "revert_creds" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf965fbd1, "vfs_listxattr" },
	{ 0xea802fb9, "vfs_removexattr" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe03eb1c7, "vfs_fsync_range" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x127c99d6, "generic_fillattr" },
	{ 0x54e8a2ff, "noop_backing_dev_info" },
	{ 0x200b2041, "in6addr_any" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "84974CEAB65A6A1407E65AE");