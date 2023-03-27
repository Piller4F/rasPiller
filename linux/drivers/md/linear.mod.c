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
	{ 0x152f04ab, "bio_split" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc2f2190e, "mddev_suspend" },
	{ 0xae64f1dd, "__tracepoint_block_bio_remap" },
	{ 0x393cac96, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x136c163, "unregister_md_personality" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8d09a8a, "md_flush_request" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x431e0762, "disk_stack_limits" },
	{ 0x363458ca, "bio_chain" },
	{ 0xbdb28e0b, "submit_bio_noacct" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2e48a46e, "bio_endio" },
	{ 0x6b11e65c, "blk_queue_flag_clear" },
	{ 0x9ed8e34c, "blk_queue_flag_set" },
	{ 0xd8dfe5a8, "bdevname" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd8d9844, "md_set_array_sectors" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x891a00b4, "__traceiter_block_bio_remap" },
	{ 0x37a0cba, "kfree" },
	{ 0x10908b5b, "mddev_resume" },
	{ 0xcedb2a7c, "md_check_no_bitmap" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc070895d, "md_integrity_register" },
	{ 0xb6634242, "register_md_personality" },
	{ 0xff820f96, "bio_associate_blkg" },
	{ 0x22a6eede, "set_capacity_and_notify" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "62C2C79AD3D64FE6AE936A1");
