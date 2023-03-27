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
	{ 0x33a860c8, "kmem_cache_destroy" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe9ead25c, "drop_nlink" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x60c8f890, "sb_min_blocksize" },
	{ 0x53b954a2, "up_read" },
	{ 0xb9a03d4f, "unload_nls" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf97dfac9, "generic_file_llseek" },
	{ 0x81049b67, "__mark_inode_dirty" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x98cf60b3, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x92753963, "__generic_file_fsync" },
	{ 0x913c3c7f, "from_kuid_munged" },
	{ 0x2c9757f6, "__fs_parse" },
	{ 0x2f07a679, "seq_puts" },
	{ 0x556ef205, "blkdev_issue_flush" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0xb5981cc5, "dput" },
	{ 0x393cac96, "seq_printf" },
	{ 0x938ce3f3, "get_tree_bdev" },
	{ 0x7bd85b8d, "inc_nlink" },
	{ 0x7b7802ee, "d_find_alias" },
	{ 0x9ed538b6, "init_user_ns" },
	{ 0x3096be16, "names_cachep" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0xb504c25a, "filemap_fdatawait_range" },
	{ 0x71f41fc1, "mpage_readahead" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf94fa58, "generic_read_dir" },
	{ 0xb9aba923, "__getblk_gfp" },
	{ 0x607d0006, "igrab" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x2e3485c0, "truncate_setsize" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x74227cca, "from_kgid_munged" },
	{ 0xb880495f, "make_kgid" },
	{ 0xca173fb6, "__insert_inode_hash" },
	{ 0xdcb764ad, "memset" },
	{ 0x611bd52, "mpage_readpage" },
	{ 0xed52c1a5, "__bread_gfp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x41a28708, "d_rehash" },
	{ 0x4248ccde, "write_inode_now" },
	{ 0xf1e046cc, "panic" },
	{ 0x1f35fab7, "mpage_writepages" },
	{ 0x2e8bd60f, "d_move" },
	{ 0xa1018fa2, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x769d5051, "set_nlink" },
	{ 0x83c56094, "__wait_on_buffer" },
	{ 0xafba5fd4, "setattr_copy" },
	{ 0x4fe8c32d, "sync_dirty_buffer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x892f38c9, "truncate_pagecache" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xbebe1a6b, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xac14d658, "__brelse" },
	{ 0x94bf03ca, "utf8_to_utf32" },
	{ 0xcda10e9e, "inode_init_once" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf2fb68fd, "invalidate_inode_buffers" },
	{ 0x41314665, "kmem_cache_alloc" },
	{ 0xc575cbd8, "sync_mapping_buffers" },
	{ 0x24639893, "generic_file_mmap" },
	{ 0x5c33264, "block_write_full_page" },
	{ 0xec553da5, "sync_blockdev" },
	{ 0xabaedbc4, "make_kuid" },
	{ 0x5411afd7, "generic_cont_expand_simple" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x88fc5e84, "load_nls" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xbfc7d725, "generic_write_end" },
	{ 0x67b35bda, "__breadahead" },
	{ 0x92997ed8, "_printk" },
	{ 0xb7fa49c1, "kill_block_super" },
	{ 0x8b8059bd, "in_group_p" },
	{ 0xaa6d0860, "d_drop" },
	{ 0x4d74da7d, "fs_param_is_u32" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x96b759ad, "kmem_cache_create" },
	{ 0x62346e86, "register_filesystem" },
	{ 0x4a579546, "generic_file_write_iter" },
	{ 0xaa6f1e05, "iter_file_splice_write" },
	{ 0x681f85a1, "fs_param_is_s32" },
	{ 0xae105cee, "fs_param_is_enum" },
	{ 0xbdfc304b, "iput" },
	{ 0x87211baa, "cont_write_begin" },
	{ 0x37a0cba, "kfree" },
	{ 0x82f8fe59, "iunique" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb132cad9, "current_time" },
	{ 0x901872ec, "d_splice_alias" },
	{ 0x29ec9fee, "sync_filesystem" },
	{ 0xbdb7cc75, "write_dirty_buffer" },
	{ 0xe142b7fb, "__set_page_dirty_buffers" },
	{ 0xe7def8dd, "block_truncate_page" },
	{ 0xd713d93b, "sb_set_blocksize" },
	{ 0x7075637, "__bforget" },
	{ 0xf777f0f4, "d_make_root" },
	{ 0xe1900ab8, "__blockdev_direct_IO" },
	{ 0x6673f5ba, "inode_needs_sync" },
	{ 0xb83c1f82, "filemap_fdatawrite_range" },
	{ 0x7bdbb8c2, "__find_get_block" },
	{ 0xaade74bc, "mark_buffer_dirty" },
	{ 0x23231c2c, "unregister_filesystem" },
	{ 0x3b42df26, "new_inode" },
	{ 0xee989505, "generic_file_splice_read" },
	{ 0x132ec17e, "fs_param_is_string" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdc30ae07, "clear_inode" },
	{ 0x7336a49b, "d_instantiate" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x133faf73, "generic_block_bmap" },
	{ 0x4c73d061, "clear_nlink" },
	{ 0x5bf6fd5a, "setattr_prepare" },
	{ 0x127c99d6, "generic_fillattr" },
	{ 0x3dbabb6f, "truncate_inode_pages" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "018E85EC728C4A368B5974B");
