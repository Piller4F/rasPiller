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
	{ 0x13445e92, "param_ops_bool" },
	{ 0xc6f7a634, "dm_unregister_target" },
	{ 0xaec5c24a, "dm_register_target" },
	{ 0x990cd904, "raid5_set_cache_size" },
	{ 0x8e5654a1, "r5c_journal_mode_set" },
	{ 0x542a0c3b, "md_start" },
	{ 0xdd7ad920, "md_run" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0xfc605483, "dm_set_target_max_io_len" },
	{ 0x26be7716, "dm_get_device" },
	{ 0x9e86a9e5, "dm_table_get_mode" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xa8d1753, "md_rdev_init" },
	{ 0x2b5f458, "mddev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x96848186, "scnprintf" },
	{ 0x41f57101, "md_wakeup_thread" },
	{ 0x918102b2, "md_reap_sync_thread" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x97c4c0b8, "md_bitmap_resize" },
	{ 0xf4c68fdd, "md_update_sb" },
	{ 0xa9b68ee5, "md_bitmap_load" },
	{ 0x10908b5b, "mddev_resume" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xf2002715, "md_stop_writes" },
	{ 0xdb8f6f92, "mddev_unlock" },
	{ 0xc2f2190e, "mddev_suspend" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x22a6eede, "set_capacity_and_notify" },
	{ 0x5f960cc, "dm_disk" },
	{ 0xd43a32bd, "dm_table_get_md" },
	{ 0xb1d6f509, "dm_table_event" },
	{ 0xb9b37016, "md_error" },
	{ 0x92997ed8, "_printk" },
	{ 0xc460b3a7, "sync_page_io" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xcb1702fb, "md_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x516258fd, "dm_put_device" },
	{ 0x6816b032, "md_rdev_clear" },
	{ 0x498a8dcf, "md_handle_request" },
	{ 0x51f86a1a, "blk_limits_io_opt" },
	{ 0xd2779731, "blk_limits_io_min" },
};

MODULE_INFO(depends, "dm-mod,raid456,md-mod");


MODULE_INFO(srcversion, "4A24D35D59832659CB3F443");
