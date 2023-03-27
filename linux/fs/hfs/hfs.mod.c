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
	{ 0x33a860c8, "kmem_cache_destroy" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x60c8f890, "sb_min_blocksize" },
	{ 0xb9a03d4f, "unload_nls" },
	{ 0x4dc60afc, "make_bad_inode" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf97dfac9, "generic_file_llseek" },
	{ 0x81049b67, "__mark_inode_dirty" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x6612a84f, "iget5_locked" },
	{ 0x913c3c7f, "from_kuid_munged" },
	{ 0x815b5dd4, "match_octal" },
	{ 0x69a7455d, "seq_escape" },
	{ 0xacf4d843, "match_strdup" },
	{ 0xd8edf9e4, "__lock_buffer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x393cac96, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x8d3f63a0, "block_read_full_page" },
	{ 0x9ed538b6, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x63715a1, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0xf94fa58, "generic_read_dir" },
	{ 0x607d0006, "igrab" },
	{ 0xaed9e896, "unlock_buffer" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x57651a8b, "set_page_dirty" },
	{ 0x2e3485c0, "truncate_setsize" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x74227cca, "from_kgid_munged" },
	{ 0xb880495f, "make_kgid" },
	{ 0xcf4fdd4d, "_atomic_dec_and_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xca173fb6, "__insert_inode_hash" },
	{ 0xdcb764ad, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x8ace7dbd, "inode_add_bytes" },
	{ 0xed52c1a5, "__bread_gfp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4248ccde, "write_inode_now" },
	{ 0xf1e046cc, "panic" },
	{ 0x1f35fab7, "mpage_writepages" },
	{ 0x1cde577, "cdrom_multisession" },
	{ 0x9166fada, "strncpy" },
	{ 0xbd7b056, "seq_putc" },
	{ 0xa1018fa2, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x769d5051, "set_nlink" },
	{ 0xafba5fd4, "setattr_copy" },
	{ 0x4fe8c32d, "sync_dirty_buffer" },
	{ 0x892f38c9, "truncate_pagecache" },
	{ 0x4e3567f7, "match_int" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbebe1a6b, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xac14d658, "__brelse" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x44dce90d, "cdrom_read_tocentry" },
	{ 0x994d69d4, "mark_page_accessed" },
	{ 0xc97ab665, "file_write_and_wait_range" },
	{ 0xcda10e9e, "inode_init_once" },
	{ 0x41314665, "kmem_cache_alloc" },
	{ 0x24639893, "generic_file_mmap" },
	{ 0x2969e1ae, "pagecache_write_end" },
	{ 0x5c33264, "block_write_full_page" },
	{ 0xec553da5, "sync_blockdev" },
	{ 0x1556d7e0, "truncate_inode_pages_final" },
	{ 0x6c5262b1, "try_to_free_buffers" },
	{ 0xabaedbc4, "make_kuid" },
	{ 0x88fc5e84, "load_nls" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xbfc7d725, "generic_write_end" },
	{ 0x92997ed8, "_printk" },
	{ 0xb1b9ca2a, "unlock_new_inode" },
	{ 0xb7fa49c1, "kill_block_super" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x6ce9a6d5, "inode_newsize_ok" },
	{ 0x6af45e28, "inode_set_bytes" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x41814cb8, "dirty_writeback_interval" },
	{ 0x96b759ad, "kmem_cache_create" },
	{ 0x62346e86, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4a579546, "generic_file_write_iter" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xbdfc304b, "iput" },
	{ 0x87211baa, "cont_write_begin" },
	{ 0x571a7dce, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2bf6e93, "inode_dio_wait" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb132cad9, "current_time" },
	{ 0x9a08aa19, "load_nls_default" },
	{ 0x901872ec, "d_splice_alias" },
	{ 0x29ec9fee, "sync_filesystem" },
	{ 0xe142b7fb, "__set_page_dirty_buffers" },
	{ 0xd713d93b, "sb_set_blocksize" },
	{ 0xf777f0f4, "d_make_root" },
	{ 0xe1900ab8, "__blockdev_direct_IO" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xaade74bc, "mark_buffer_dirty" },
	{ 0x23231c2c, "unregister_filesystem" },
	{ 0x3b42df26, "new_inode" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xee989505, "generic_file_splice_read" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdc30ae07, "clear_inode" },
	{ 0x7336a49b, "d_instantiate" },
	{ 0x4b8b982a, "pagecache_write_begin" },
	{ 0x17afb12f, "__put_page" },
	{ 0x133faf73, "generic_block_bmap" },
	{ 0x32089280, "generic_listxattr" },
	{ 0x4c73d061, "clear_nlink" },
	{ 0x644889bc, "iget_locked" },
	{ 0x5bf6fd5a, "setattr_prepare" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "9D4D57240C540C6B5A6D9A9");
