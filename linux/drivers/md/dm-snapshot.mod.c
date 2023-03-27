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
	{ 0xa24f23d8, "__request_module" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0x85cfcf82, "submit_bio_wait" },
	{ 0x42a6126c, "dm_bio_get_target_bio_nr" },
	{ 0xcd2ba798, "dm_bufio_forget" },
	{ 0x53b954a2, "up_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x98cf60b3, "strlen" },
	{ 0x26be7716, "dm_get_device" },
	{ 0x14c013f5, "dm_io" },
	{ 0xfc14bb2e, "dm_get_dev_t" },
	{ 0xd991e3b9, "dm_bufio_get_device_size" },
	{ 0xd43a32bd, "dm_table_get_md" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x72f07bf4, "dm_bufio_set_minimum_buffers" },
	{ 0x9e86a9e5, "dm_table_get_mode" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0x158e6191, "bio_uninit" },
	{ 0x999e8297, "vfree" },
	{ 0xaec5c24a, "dm_register_target" },
	{ 0x954d848b, "dm_kcopyd_copy" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0xd6f7acec, "dm_put" },
	{ 0xece784c2, "rb_first" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xa8b4d3fc, "bio_reset" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x283102c8, "dm_internal_suspend_fast" },
	{ 0xb1d6f509, "dm_table_event" },
	{ 0xdcb764ad, "memset" },
	{ 0x21309c7a, "dm_kcopyd_zero" },
	{ 0x1a66ef9b, "bio_init" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xfc605483, "dm_set_target_max_io_len" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc6f7a634, "dm_unregister_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x97918ad4, "dm_bufio_client_create" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xa1018fa2, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xbdb28e0b, "submit_bio_noacct" },
	{ 0xbe93cd2d, "dm_suspended" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2e48a46e, "bio_endio" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0x1acd7981, "module_put" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x9f984513, "strrchr" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x41314665, "kmem_cache_alloc" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x32ea0e27, "dm_accept_partial_bio" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x96b759ad, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0xb04f56ab, "dm_bufio_read" },
	{ 0x7880c781, "dm_kcopyd_prepare_callback" },
	{ 0x37a0cba, "kfree" },
	{ 0x8985d6cb, "dm_hold" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc90df7e5, "dm_bufio_prefetch" },
	{ 0x10942b84, "dm_table_get_size" },
	{ 0xca9360b5, "rb_next" },
	{ 0x516258fd, "dm_put_device" },
	{ 0x8995d3cf, "dm_per_bio_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4b5fd49e, "dm_kcopyd_do_callback" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x68173019, "try_module_get" },
	{ 0xa5da3c15, "dm_internal_resume_fast" },
	{ 0xff820f96, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-mod,dm-bufio");


MODULE_INFO(srcversion, "9FFD036378EC30021C3DB9F");
