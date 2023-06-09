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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0xe247157e, "regmap_raw_write" },
	{ 0x9a5ca6a7, "regmap_multi_reg_write" },
	{ 0xf538c801, "regmap_update_bits_base" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xd526ec4b, "snd_soc_bytes_tlv_callback" },
	{ 0x1ddda2f4, "snd_soc_component_disable_pin" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0xea764101, "regmap_bulk_read" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x176d31a7, "debugfs_create_x32" },
	{ 0x2cc71b34, "regmap_read" },
	{ 0x999e8297, "vfree" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0x37ebf39e, "devm_kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x11089ac7, "_ctype" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2a22511d, "snd_soc_add_component_controls" },
	{ 0xafff5a6f, "regmap_async_complete" },
	{ 0xca9b9930, "snd_ctl_notify" },
	{ 0x5a921311, "strncmp" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe7f1fdf9, "simple_open" },
	{ 0x52c5e452, "debugfs_create_bool" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x44239691, "_dev_info" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5f9abf, "devm_kstrdup" },
	{ 0x62becdf4, "snd_soc_dapm_sync" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x482d3162, "regmap_raw_write_async" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x66dbf813, "regmap_raw_read" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8e254650, "snd_compr_stop_error" },
	{ 0x4be8383b, "snd_soc_component_force_enable_pin" },
	{ 0xf89a697a, "regmap_write" },
	{ 0xa0a7f6, "snd_soc_card_get_kcontrol" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "snd-soc-core,snd,snd-compress");


MODULE_INFO(srcversion, "138DDE08B4779A19E1367F4");
