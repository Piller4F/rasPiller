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
	{ 0x2d3385d3, "system_wq" },
	{ 0x33a860c8, "kmem_cache_destroy" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xa7bfae19, "__cpuhp_remove_state" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9aaf5964, "kill_anon_super" },
	{ 0x1971b2f3, "dec_zone_page_state" },
	{ 0xa861abb2, "kern_unmount" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x497c4ec, "zpool_register_driver" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x2c0571e8, "init_pseudo" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0xaf5f4a71, "__ClearPageMovable" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xa1018fa2, "kmem_cache_free" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x52df2f63, "wait_on_page_bit" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xfb63b8d7, "inc_zone_page_state" },
	{ 0x66b01bc6, "__cpuhp_setup_state" },
	{ 0x700c176b, "unlock_page" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcd6e9590, "kern_mount" },
	{ 0x41314665, "kmem_cache_alloc" },
	{ 0xd4010db0, "__free_pages" },
	{ 0x72ccbb38, "unregister_shrinker" },
	{ 0x27f4e2e4, "zpool_unregister_driver" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x96b759ad, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xbdfc304b, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x93f2a68e, "register_shrinker" },
	{ 0x6aab7803, "page_mapping" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x17f37bc, "__SetPageMovable" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2f87622f, "alloc_anon_inode" },
	{ 0x17afb12f, "__put_page" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CAAEFF48810A1FC902BBDA1");
