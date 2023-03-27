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
	{ 0x3d8baf3b, "zs_huge_class_size" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xc341ae6d, "zs_map_object" },
	{ 0xa7bfae19, "__cpuhp_remove_state" },
	{ 0x53b954a2, "up_read" },
	{ 0x11db660a, "blk_queue_io_opt" },
	{ 0x27864d57, "memparse" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc69b7ee5, "zs_destroy_pool" },
	{ 0x86912aaa, "blk_cleanup_disk" },
	{ 0xb29533ee, "zs_malloc" },
	{ 0xe818d096, "blk_queue_io_min" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x85df768e, "blk_queue_max_write_zeroes_sectors" },
	{ 0x5da67adc, "zs_compact" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xd1dd21a3, "fsync_bdev" },
	{ 0x958df3ac, "zs_free" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xdcb764ad, "memset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xa7e8db48, "blk_queue_max_discard_sectors" },
	{ 0xddba2ba6, "del_gendisk" },
	{ 0x97ac555e, "disk_end_io_acct" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xbbc1b23a, "class_unregister" },
	{ 0x91c1cdd0, "__cpuhp_state_add_instance" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbcf1f0e6, "zs_create_pool" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdd54a75d, "set_capacity" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x66b01bc6, "__cpuhp_setup_state" },
	{ 0xce807a25, "up_write" },
	{ 0xac97d5fa, "__class_register" },
	{ 0x57bc19d2, "down_write" },
	{ 0xed8a2d95, "memset64" },
	{ 0x2e48a46e, "bio_endio" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x77c7619a, "bio_start_io_acct" },
	{ 0x6b11e65c, "blk_queue_flag_clear" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x9ed8e34c, "blk_queue_flag_set" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xc3e06c6e, "blk_queue_physical_block_size" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x1bc57c3d, "__cpuhp_state_remove_instance" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xcbe56bc2, "zs_get_total_pages" },
	{ 0xc48b95a7, "bio_end_io_acct_remapped" },
	{ 0xb20e7236, "crypto_comp_compress" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7cceaf92, "zs_pool_stats" },
	{ 0x96848186, "scnprintf" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x48356d12, "device_add_disk" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x8228e911, "crypto_alloc_base" },
	{ 0x9902df29, "blk_queue_logical_block_size" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x924c46f8, "zs_unmap_object" },
	{ 0xa2a3efa2, "disk_start_io_acct" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x16c2ed71, "flush_dcache_page" },
	{ 0xb78138f0, "page_endio" },
	{ 0x17f8450f, "crypto_comp_decompress" },
	{ 0xe914e41e, "strcpy" },
	{ 0x970e7d79, "__blk_alloc_disk" },
	{ 0x22a6eede, "set_capacity_and_notify" },
};

MODULE_INFO(depends, "zsmalloc");


MODULE_INFO(srcversion, "62127EF5E38272DB6D0F58F");
