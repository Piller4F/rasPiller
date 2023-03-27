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
	{ 0x3918325d, "nonseekable_open" },
	{ 0x18fcb916, "no_llseek" },
	{ 0x68bae379, "single_release" },
	{ 0xdcf25530, "seq_read" },
	{ 0xa1803e34, "seq_lseek" },
	{ 0x35ff02a6, "blkdev_compat_ptr_ioctl" },
	{ 0xd4c8974a, "misc_deregister" },
	{ 0x42b55a56, "bioset_exit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x5a0baca8, "proc_mkdir" },
	{ 0xa0e0c9b1, "misc_register" },
	{ 0xac97d5fa, "__class_register" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0xae2ed143, "bioset_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0xda853d34, "bio_kmalloc" },
	{ 0x22a6eede, "set_capacity_and_notify" },
	{ 0xdd54a75d, "set_capacity" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x31a0f1a7, "freezing_slow_path" },
	{ 0x4513e055, "bio_copy_data_iter" },
	{ 0xece784c2, "rb_first" },
	{ 0x3944fe19, "clear_bdi_congested" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xf782b356, "set_user_nice" },
	{ 0x89172575, "bio_add_page" },
	{ 0xa8b4d3fc, "bio_reset" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xbdb28e0b, "submit_bio_noacct" },
	{ 0xdcb764ad, "memset" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x68173019, "try_module_get" },
	{ 0xe61d59d0, "proc_create_single_data" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x5b5a0fb0, "blk_queue_max_hw_sectors" },
	{ 0x9902df29, "blk_queue_logical_block_size" },
	{ 0xab831974, "set_blocksize" },
	{ 0xd0148e6c, "__module_get" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0x12284cf8, "device_create" },
	{ 0x48356d12, "device_add_disk" },
	{ 0x93f8b87c, "blkdev_get_by_dev" },
	{ 0xe914e41e, "strcpy" },
	{ 0x970e7d79, "__blk_alloc_disk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x683f20ea, "kobject_uevent" },
	{ 0xc438e3f9, "kobject_init_and_add" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x2e48a46e, "bio_endio" },
	{ 0x13802fbb, "bio_devname" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xff820f96, "bio_associate_blkg" },
	{ 0xaf611179, "bio_clone_fast" },
	{ 0x64999478, "congestion_wait" },
	{ 0x2c40b171, "set_bdi_congested" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x363458ca, "bio_chain" },
	{ 0x152f04ab, "bio_split" },
	{ 0xfac8f498, "blk_queue_split" },
	{ 0xd4010db0, "__free_pages" },
	{ 0xab2b89c5, "bio_put" },
	{ 0x551ab123, "class_destroy" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1acd7981, "module_put" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x86912aaa, "blk_cleanup_disk" },
	{ 0xddba2ba6, "del_gendisk" },
	{ 0x99cbe2dc, "remove_proc_entry" },
	{ 0x84c7a253, "blkdev_put" },
	{ 0xe71535d7, "device_unregister" },
	{ 0xd103296d, "kobject_put" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0x4558a487, "single_open" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xca9360b5, "rb_next" },
	{ 0x393cac96, "seq_printf" },
	{ 0xd8dfe5a8, "bdevname" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbb24f607, "init_cdrom_command" },
	{ 0x7e9807de, "blk_put_request" },
	{ 0x8726d47a, "blk_execute_rq" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xdd4c0b6a, "blk_rq_map_kern" },
	{ 0xf8ebb170, "blk_get_request" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x92997ed8, "_printk" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "ED1D41E5F76DDF013D511F9");
