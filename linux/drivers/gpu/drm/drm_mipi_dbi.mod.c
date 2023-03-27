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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4558a487, "single_open" },
	{ 0xe24abb5, "regulator_disable" },
	{ 0x549b40c6, "drm_atomic_helper_connector_reset" },
	{ 0x60ccffd4, "dma_set_mask" },
	{ 0x68bae379, "single_release" },
	{ 0x2f07a679, "seq_puts" },
	{ 0x8c329811, "drm_helper_probe_single_connector_modes" },
	{ 0x393cac96, "seq_printf" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xd4983d85, "drm_fb_swab" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x82273d30, "drm_gem_fb_begin_cpu_access" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x838a8fa0, "drm_fb_memcpy" },
	{ 0xdcf25530, "seq_read" },
	{ 0x5966c90b, "dma_set_coherent_mask" },
	{ 0xbf551c38, "drm_connector_cleanup" },
	{ 0x6f7b4375, "drm_simple_display_pipe_init" },
	{ 0xfa73fd87, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x9ce050be, "drm_mode_copy" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x96f04b2c, "drm_mode_duplicate" },
	{ 0x1f3e201d, "drm_gem_fb_get_obj" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x56ad9b70, "drm_gem_fb_create_with_dirty" },
	{ 0x2b6fb543, "drm_atomic_helper_damage_merged" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xc3b835de, "drm_connector_init" },
	{ 0x2715240, "spi_sync" },
	{ 0x51ba04f9, "drm_dev_printk" },
	{ 0x5d974791, "drm_atomic_helper_connector_destroy_state" },
	{ 0x50187de8, "drm_atomic_helper_check" },
	{ 0x18e9e607, "drm_atomic_helper_commit" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2e8ca0ec, "drmm_mode_config_init" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa1803e34, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0xd480a423, "drm_mode_probed_add" },
	{ 0x2c515b52, "drm_plane_enable_fb_damage_clips" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x39ce7ce, "drm_dev_enter" },
	{ 0xed6fd404, "drm_gem_fb_end_cpu_access" },
	{ 0x4e41ad5c, "drm_fb_xrgb8888_to_rgb565" },
	{ 0xde3fe2c3, "regulator_enable" },
};

MODULE_INFO(depends, "drm_kms_helper,drm");


MODULE_INFO(srcversion, "7391D9F9B7FA2F2C457A004");
