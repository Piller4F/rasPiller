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
	{ 0x203fd485, "pnfs_unregister_layoutdriver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1f3f5679, "pnfs_generic_pg_init_write" },
	{ 0xb7a3442c, "fs_bio_set" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x45cafb, "bio_alloc_bioset" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7c9722ba, "nfs_dreq_bytes_left" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x3dd4f8c3, "rpc_unlink" },
	{ 0x93683386, "pnfs_ld_write_done" },
	{ 0x7ef7ae11, "pnfs_error_mark_layout_for_return" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xb5981cc5, "dput" },
	{ 0xcf51c670, "nfs4_delete_deviceid" },
	{ 0xc3a2be67, "nfs_net_id" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8754fc80, "nfs4_mark_deviceid_unavailable" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xbcbb9187, "rpc_mkpipe_data" },
	{ 0x6edf2f8f, "rpc_mkpipe_dentry" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xafe3515b, "pnfs_generic_pg_test" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xece784c2, "rb_first" },
	{ 0x53356641, "rpc_get_sb_net" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x9845143d, "pnfs_generic_pg_cleanup" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0x2ccc2013, "pnfs_generic_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x900e99b0, "xdr_init_decode_pages" },
	{ 0xc7ce8f36, "rpc_queue_upcall" },
	{ 0x97122c90, "unregister_pernet_subsys" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89172575, "bio_add_page" },
	{ 0x8755d46f, "nfs4_find_get_deviceid" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xd1ca1c12, "blkdev_get_by_path" },
	{ 0xaee6d78e, "nfs_pageio_reset_write_mds" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xd83569d8, "rpc_d_lookup_sb" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x93f8b87c, "blkdev_get_by_dev" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xe40eb76e, "nfs4_put_deviceid_node" },
	{ 0xab2b89c5, "bio_put" },
	{ 0x1acd7981, "module_put" },
	{ 0xcbffc14e, "rpc_pipe_generic_upcall" },
	{ 0x6db40b69, "submit_bio" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0x387e1639, "rpc_pipefs_notifier_register" },
	{ 0xd4010db0, "__free_pages" },
	{ 0xab27bf97, "rpc_destroy_pipe_data" },
	{ 0x84c7a253, "blkdev_put" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x800e5a3f, "register_pernet_subsys" },
	{ 0x41d72109, "rpc_put_sb_net" },
	{ 0x2826de9a, "pnfs_generic_pg_readpages" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x448053d9, "page_cache_next_miss" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xf04ef00b, "pnfs_generic_pg_writepages" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbf3fd2f0, "pnfs_generic_pg_init_read" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb51a3724, "rpc_pipefs_notifier_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5d2ba061, "xdr_inline_decode" },
	{ 0xd9edceee, "vmalloc_to_page" },
	{ 0xbb25d5fb, "nfs_pageio_reset_read_mds" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x600092c4, "nfs4_init_deviceid_node" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x1a572ce5, "pnfs_set_lo_fail" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0x16c2ed71, "flush_dcache_page" },
	{ 0xd088c0cf, "pnfs_ld_read_done" },
	{ 0x17afb12f, "__put_page" },
	{ 0x68173019, "try_module_get" },
	{ 0x757564c, "pnfs_register_layoutdriver" },
	{ 0xff820f96, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7E62418A851FA0A43705342");
