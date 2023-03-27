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
	{ 0x33081e3d, "iget_failed" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x60c8f890, "sb_min_blocksize" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0xb9a03d4f, "unload_nls" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf97dfac9, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x6612a84f, "iget5_locked" },
	{ 0x913c3c7f, "from_kuid_munged" },
	{ 0x2f07a679, "seq_puts" },
	{ 0x4477ed11, "pagecache_get_page" },
	{ 0xacf4d843, "match_strdup" },
	{ 0xc577c662, "ll_rw_block" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x393cac96, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x9ed538b6, "init_user_ns" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x71f41fc1, "mpage_readahead" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x63715a1, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x8127529e, "page_symlink_inode_operations" },
	{ 0xf94fa58, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0xb9aba923, "__getblk_gfp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x74227cca, "from_kgid_munged" },
	{ 0xb880495f, "make_kgid" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0xdcb764ad, "memset" },
	{ 0x611bd52, "mpage_readpage" },
	{ 0x11089ac7, "_ctype" },
	{ 0xed52c1a5, "__bread_gfp" },
	{ 0x2a6788b6, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x1cde577, "cdrom_multisession" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x5a921311, "strncmp" },
	{ 0xa1018fa2, "kmem_cache_free" },
	{ 0x769d5051, "set_nlink" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x83c56094, "__wait_on_buffer" },
	{ 0xa07a37f0, "memchr" },
	{ 0x9c7f20ff, "generic_ro_fops" },
	{ 0x4e3567f7, "match_int" },
	{ 0x700c176b, "unlock_page" },
	{ 0x21278fab, "inode_nohighmem" },
	{ 0xac14d658, "__brelse" },
	{ 0x44dce90d, "cdrom_read_tocentry" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0xcda10e9e, "inode_init_once" },
	{ 0x41314665, "kmem_cache_alloc" },
	{ 0xd4010db0, "__free_pages" },
	{ 0xabaedbc4, "make_kuid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x88fc5e84, "load_nls" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x92997ed8, "_printk" },
	{ 0xb1b9ca2a, "unlock_new_inode" },
	{ 0xb7fa49c1, "kill_block_super" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x96b759ad, "kmem_cache_create" },
	{ 0x62346e86, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xbdfc304b, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x901872ec, "d_splice_alias" },
	{ 0x29ec9fee, "sync_filesystem" },
	{ 0xd713d93b, "sb_set_blocksize" },
	{ 0xf777f0f4, "d_make_root" },
	{ 0x23231c2c, "unregister_filesystem" },
	{ 0x2ba786c0, "init_special_inode" },
	{ 0xeb9eef52, "match_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x16c2ed71, "flush_dcache_page" },
	{ 0x17afb12f, "__put_page" },
	{ 0x133faf73, "generic_block_bmap" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "EE9A02F607F773EB2C7EB5F");
