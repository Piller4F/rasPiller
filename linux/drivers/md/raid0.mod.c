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
	{ 0x27339f09, "param_ops_int" },
	{ 0x136c163, "unregister_md_personality" },
	{ 0xb6634242, "register_md_personality" },
	{ 0xe64158c2, "acct_bioset_exit" },
	{ 0x6b11e65c, "blk_queue_flag_clear" },
	{ 0xc070895d, "md_integrity_register" },
	{ 0xd8d9844, "md_set_array_sectors" },
	{ 0x9ed8e34c, "blk_queue_flag_set" },
	{ 0x431e0762, "disk_stack_limits" },
	{ 0x11db660a, "blk_queue_io_opt" },
	{ 0xe818d096, "blk_queue_io_min" },
	{ 0xa7e8db48, "blk_queue_max_discard_sectors" },
	{ 0x85df768e, "blk_queue_max_write_zeroes_sectors" },
	{ 0x8d3568f1, "blk_queue_max_write_same_sectors" },
	{ 0x5b5a0fb0, "blk_queue_max_hw_sectors" },
	{ 0x380998b6, "acct_bioset_init" },
	{ 0xcedb2a7c, "md_check_no_bitmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x96848186, "scnprintf" },
	{ 0xd8dfe5a8, "bdevname" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9a1cab4b, "md_submit_discard_bio" },
	{ 0x8d09a8a, "md_flush_request" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x891a00b4, "__traceiter_block_bio_remap" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xae64f1dd, "__tracepoint_block_bio_remap" },
	{ 0xff820f96, "bio_associate_blkg" },
	{ 0xbdb28e0b, "submit_bio_noacct" },
	{ 0x363458ca, "bio_chain" },
	{ 0x152f04ab, "bio_split" },
	{ 0x2e48a46e, "bio_endio" },
	{ 0x3bda56c6, "md_account_bio" },
	{ 0x393cac96, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "22EC65396B0FDA46E2D7E39");
