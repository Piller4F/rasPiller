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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x33a860c8, "kmem_cache_destroy" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x14c013f5, "dm_io" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xb3687850, "out_of_line_wait_on_bit_lock" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x89172575, "bio_add_page" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xda853d34, "bio_kmalloc" },
	{ 0xa1018fa2, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xab2b89c5, "bio_put" },
	{ 0x58e3306d, "bit_wait_io" },
	{ 0x6db40b69, "submit_bio" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0x41314665, "kmem_cache_alloc" },
	{ 0x72ccbb38, "unregister_shrinker" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x96b759ad, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x93f2a68e, "register_shrinker" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x12b13c2c, "param_ops_ulong" },
	{ 0x6736b8b2, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xff820f96, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "6B16AF46FC335D26B2F023F");
