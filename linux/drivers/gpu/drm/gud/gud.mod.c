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
	{ 0xe0cc4550, "drm_release" },
	{ 0x8bffee2b, "drm_atomic_get_connector_state" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc1404492, "drm_dev_register" },
	{ 0x9cb2b91b, "drm_compat_ioctl" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x4d8a3eb, "drm_mode_config_helper_resume" },
	{ 0x5e2e4e49, "usb_sg_wait" },
	{ 0x5f1afd22, "drm_modeset_drop_locks" },
	{ 0x6ef2f78e, "drm_format_info" },
	{ 0xe8e4f64d, "drm_mode_config_reset" },
	{ 0x549b40c6, "drm_atomic_helper_connector_reset" },
	{ 0xeda2997f, "drm_atomic_state_clear" },
	{ 0x2f07a679, "seq_puts" },
	{ 0x7ae669d0, "drm_fb_xrgb8888_to_gray8" },
	{ 0x1e793d25, "drm_mode_create_tv_margin_properties" },
	{ 0x825e7cc5, "backlight_device_register" },
	{ 0x821c29de, "drm_gem_prime_import_dev" },
	{ 0xa4aa4d70, "drm_modeset_backoff" },
	{ 0x48a63267, "drm_plane_create_rotation_property" },
	{ 0x8c329811, "drm_helper_probe_single_connector_modes" },
	{ 0x393cac96, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x82273d30, "drm_gem_fb_begin_cpu_access" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x2f3ffa2d, "drm_simple_encoder_init" },
	{ 0x38c1b55b, "drm_modeset_acquire_fini" },
	{ 0x3f9cbcbb, "drm_connector_list_iter_next" },
	{ 0x838a8fa0, "drm_fb_memcpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbf551c38, "drm_connector_cleanup" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xaec02328, "drm_do_get_edid" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x6f7b4375, "drm_simple_display_pipe_init" },
	{ 0xfa73fd87, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xa9f34c05, "drm_fbdev_generic_setup" },
	{ 0x2f358820, "drm_connector_update_edid_property" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2327a3a3, "drmm_kmalloc" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x3d9453ea, "drm_gem_shmem_prime_import_sg_table" },
	{ 0x2eb01a60, "drm_atomic_state_alloc" },
	{ 0x174caabb, "__devm_drm_dev_alloc" },
	{ 0x4f7eb381, "sg_alloc_table_from_pages_segment" },
	{ 0xc6015e09, "drm_atomic_commit" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x84e00d66, "drm_object_attach_property" },
	{ 0xfc751622, "drm_mode_create_tv_properties" },
	{ 0xe559213b, "drm_gem_fb_vunmap" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0xccc59759, "drm_format_info_block_width" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x56ad9b70, "drm_gem_fb_create_with_dirty" },
	{ 0x8e66549b, "drm_read" },
	{ 0x292268, "noop_llseek" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2b6fb543, "drm_atomic_helper_damage_merged" },
	{ 0x9f365d72, "drm_add_edid_modes" },
	{ 0xf1bc9c8d, "usb_intf_get_dma_device" },
	{ 0x48a91171, "string_get_size" },
	{ 0x89771b2f, "drm_mode_config_helper_suspend" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x8c1398da, "devm_kfree" },
	{ 0x5132ab54, "drm_debugfs_create_files" },
	{ 0xc3b835de, "drm_connector_init" },
	{ 0x7ba27b50, "drm_dev_unplug" },
	{ 0xb22dfd68, "drm_format_info_min_pitch" },
	{ 0xa00bf9e2, "drm_gem_prime_fd_to_handle" },
	{ 0xc9783b2, "drm_gem_fb_vmap" },
	{ 0x3d6a8166, "devm_add_action" },
	{ 0xd85dd0b7, "drm_ioctl" },
	{ 0x8f9718a1, "drm_mode_create" },
	{ 0xd6168557, "drm_gem_mmap" },
	{ 0xc2232eb3, "drm_connector_list_iter_end" },
	{ 0x5d974791, "drm_atomic_helper_connector_destroy_state" },
	{ 0x50187de8, "drm_atomic_helper_check" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x18e9e607, "drm_atomic_helper_commit" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x505c3f14, "usb_sg_cancel" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xed635ef4, "drm_connector_attach_encoder" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x16ef57ab, "drm_mode_object_put" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2e8ca0ec, "drmm_mode_config_init" },
	{ 0xb51a7d00, "drm_gem_prime_handle_to_fd" },
	{ 0xa8aa99d8, "drm_modeset_acquire_init" },
	{ 0x4f4d78c5, "LZ4_compress_default" },
	{ 0xfdee38ff, "drm_connector_list_iter_begin" },
	{ 0xb9cad492, "__drm_atomic_state_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbb7d79a9, "drm_mode_object_get" },
	{ 0x1622dfe2, "usb_sg_init" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xe2dd2a55, "drm_atomic_helper_shutdown" },
	{ 0xc2c4c740, "drm_gem_prime_mmap" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x8c95cab9, "drm_gem_shmem_dumb_create" },
	{ 0xd480a423, "drm_mode_probed_add" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd9edceee, "vmalloc_to_page" },
	{ 0x7f6e287, "drm_dev_dbg" },
	{ 0x2c515b52, "drm_plane_enable_fb_damage_clips" },
	{ 0xb0a8876a, "drm_kms_helper_poll_init" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x24f393f0, "backlight_device_unregister" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf88b1ff6, "drm_atomic_helper_connector_tv_reset" },
	{ 0x39ce7ce, "drm_dev_enter" },
	{ 0xed6fd404, "drm_gem_fb_end_cpu_access" },
	{ 0x7a231395, "drm_poll" },
	{ 0x4e41ad5c, "drm_fb_xrgb8888_to_rgb565" },
	{ 0x2fa803a0, "drm_open" },
	{ 0x6c8ed9c1, "drm_kms_helper_poll_fini" },
};

MODULE_INFO(depends, "drm,drm_kms_helper,backlight,lz4_compress");

MODULE_ALIAS("usb:v1D50p614Dd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v16D0p10A9d*dc*dsc*dp*icFFisc*ip*in*");

MODULE_INFO(srcversion, "440D743F4E5364FE285633A");
