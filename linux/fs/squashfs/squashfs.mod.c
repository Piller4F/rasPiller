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
	{ 0xb7a3442c, "fs_bio_set" },
	{ 0x33081e3d, "iget_failed" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x60c8f890, "sb_min_blocksize" },
	{ 0x85cfcf82, "submit_bio_wait" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x45cafb, "bio_alloc_bioset" },
	{ 0x4dc60afc, "make_bad_inode" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf97dfac9, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x2c9757f6, "__fs_parse" },
	{ 0x2f07a679, "seq_puts" },
	{ 0x4477ed11, "pagecache_get_page" },
	{ 0x938ce3f3, "get_tree_bdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf94fa58, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0xe4555e61, "bio_free_pages" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb880495f, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xca173fb6, "__insert_inode_hash" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0xdcb764ad, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2a6788b6, "d_obtain_alias" },
	{ 0x89172575, "bio_add_page" },
	{ 0xf1e046cc, "panic" },
	{ 0x9166fada, "strncpy" },
	{ 0xda853d34, "bio_kmalloc" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x5a921311, "strncmp" },
	{ 0xa1018fa2, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x769d5051, "set_nlink" },
	{ 0x65dccf13, "xz_dec_end" },
	{ 0x9c7f20ff, "generic_ro_fops" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x700c176b, "unlock_page" },
	{ 0x21278fab, "inode_nohighmem" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xab2b89c5, "bio_put" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0xcda10e9e, "inode_init_once" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6e5b8651, "xz_dec_run" },
	{ 0x41314665, "kmem_cache_alloc" },
	{ 0xabaedbc4, "make_kuid" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0xb1b9ca2a, "unlock_new_inode" },
	{ 0xb7fa49c1, "kill_block_super" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x96b759ad, "kmem_cache_create" },
	{ 0x62346e86, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x52d717da, "xz_dec_init" },
	{ 0x3182ebed, "logfc" },
	{ 0xae105cee, "fs_param_is_enum" },
	{ 0xbdfc304b, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0xd6691644, "page_get_link" },
	{ 0x4829a47e, "memcpy" },
	{ 0x901872ec, "d_splice_alias" },
	{ 0x29ec9fee, "sync_filesystem" },
	{ 0xf777f0f4, "d_make_root" },
	{ 0x4df8fbc, "lzo1x_decompress_safe" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x81db6ebb, "xz_dec_reset" },
	{ 0x23231c2c, "unregister_filesystem" },
	{ 0x2ba786c0, "init_special_inode" },
	{ 0x3b42df26, "new_inode" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x16c2ed71, "flush_dcache_page" },
	{ 0x17afb12f, "__put_page" },
	{ 0x644889bc, "iget_locked" },
	{ 0xff820f96, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0043021E1941445029C30E0");
