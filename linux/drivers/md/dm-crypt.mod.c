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
	{ 0xc6f7a634, "dm_unregister_target" },
	{ 0xaec5c24a, "dm_register_target" },
	{ 0x32ea0e27, "dm_accept_partial_bio" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x89172575, "bio_add_page" },
	{ 0x45cafb, "bio_alloc_bioset" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6d1b6f0b, "crypto_aead_encrypt" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x52544d6c, "crypto_skcipher_decrypt" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0xbcb8184a, "crypto_aead_decrypt" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xca4f1e22, "crypto_aead_setauthsize" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xd43a32bd, "dm_table_get_md" },
	{ 0x26be7716, "dm_get_device" },
	{ 0x9e86a9e5, "dm_table_get_mode" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xae2ed143, "bioset_init" },
	{ 0x85df9b6c, "strsep" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x93d992ee, "__percpu_counter_init" },
	{ 0x4d002d48, "dm_table_device_name" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x78e702c6, "key_type_logon" },
	{ 0xde31500c, "key_put" },
	{ 0x53b954a2, "up_read" },
	{ 0x668b19a1, "down_read" },
	{ 0xa75f581c, "request_key_tag" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xf512dd7f, "key_type_user" },
	{ 0x11089ac7, "_ctype" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x13802fbb, "bio_devname" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xa6257a2f, "complete" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xab2b89c5, "bio_put" },
	{ 0xff820f96, "bio_associate_blkg" },
	{ 0xaf611179, "bio_clone_fast" },
	{ 0x266a4b08, "tasklet_unlock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x24d18093, "crypto_alloc_shash" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa8404b06, "crypto_alloc_ahash" },
	{ 0x9166fada, "strncpy" },
	{ 0x5a921311, "strncmp" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f984513, "strrchr" },
	{ 0x3fade900, "crypto_aead_setkey" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xb4e826c3, "crypto_skcipher_encrypt" },
	{ 0x253260b9, "crypto_req_done" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x516258fd, "dm_put_device" },
	{ 0x7442f0f9, "percpu_counter_destroy" },
	{ 0x7d83fe99, "__percpu_counter_sum" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x42b55a56, "bioset_exit" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x6135b795, "crypto_shash_final" },
	{ 0x8995d3cf, "dm_per_bio_data" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f91e2b, "bio_integrity_add_page" },
	{ 0x37168699, "bio_integrity_alloc" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x158b2e1d, "crypto_shash_update" },
	{ 0xaafbe958, "crypto_alloc_skcipher" },
	{ 0x81094cb6, "crypto_alloc_aead" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x5da12a18, "percpu_counter_add_batch" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0xd4010db0, "__free_pages" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0xbdb28e0b, "submit_bio_noacct" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x37a0cba, "kfree" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0x2e48a46e, "bio_endio" },
	{ 0x96848186, "scnprintf" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x5c788f1c, "crypto_skcipher_setkey" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x349cba85, "strchr" },
	{ 0x98cf60b3, "strlen" },
	{ 0xdcb764ad, "memset" },
	{ 0x92997ed8, "_printk" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "FEC327FF4AB4CE3D2F1A54D");
