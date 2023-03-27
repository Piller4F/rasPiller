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
	{ 0xe0cc4550, "drm_release" },
	{ 0x2fa803a0, "drm_open" },
	{ 0xd6168557, "drm_gem_mmap" },
	{ 0x9cb2b91b, "drm_compat_ioctl" },
	{ 0xd85dd0b7, "drm_ioctl" },
	{ 0x7a231395, "drm_poll" },
	{ 0x8e66549b, "drm_read" },
	{ 0x292268, "noop_llseek" },
	{ 0x5d974791, "drm_atomic_helper_connector_destroy_state" },
	{ 0xfa73fd87, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xbf551c38, "drm_connector_cleanup" },
	{ 0x8c329811, "drm_helper_probe_single_connector_modes" },
	{ 0x549b40c6, "drm_atomic_helper_connector_reset" },
	{ 0x18e9e607, "drm_atomic_helper_commit" },
	{ 0x50187de8, "drm_atomic_helper_check" },
	{ 0x56ad9b70, "drm_gem_fb_create_with_dirty" },
	{ 0x894a1895, "drm_gem_cma_dumb_create" },
	{ 0xc2c4c740, "drm_gem_prime_mmap" },
	{ 0xb22534a9, "drm_gem_cma_prime_import_sg_table_vmap" },
	{ 0xa00bf9e2, "drm_gem_prime_fd_to_handle" },
	{ 0xb51a7d00, "drm_gem_prime_handle_to_fd" },
	{ 0x20105980, "driver_unregister" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xfd457b8, "gpiod_get_value_cansleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xed6fd404, "drm_gem_fb_end_cpu_access" },
	{ 0x7ae669d0, "drm_fb_xrgb8888_to_gray8" },
	{ 0x82273d30, "drm_gem_fb_begin_cpu_access" },
	{ 0x26887181, "thermal_zone_get_temp" },
	{ 0x39ce7ce, "drm_dev_enter" },
	{ 0xfc654ab4, "drm_fb_cma_get_gem_obj" },
	{ 0x2b6fb543, "drm_atomic_helper_damage_merged" },
	{ 0xcdc86b55, "sched_clock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x37a0cba, "kfree" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd108a59b, "gpiod_set_value_cansleep" },
	{ 0xc8cbd20d, "spi_get_device_id" },
	{ 0x51ba04f9, "drm_dev_printk" },
	{ 0xe4af7141, "thermal_zone_get_zone_by_name" },
	{ 0xa9f34c05, "drm_fbdev_generic_setup" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0xc1404492, "drm_dev_register" },
	{ 0xe8e4f64d, "drm_mode_config_reset" },
	{ 0x6f7b4375, "drm_simple_display_pipe_init" },
	{ 0xc3b835de, "drm_connector_init" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x5926a33b, "device_property_read_string" },
	{ 0xd1d63978, "devm_gpiod_get" },
	{ 0x2e8ca0ec, "drmm_mode_config_init" },
	{ 0x174caabb, "__devm_drm_dev_alloc" },
	{ 0x5966c90b, "dma_set_coherent_mask" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0x60ccffd4, "dma_set_mask" },
	{ 0x92cd3d03, "device_get_match_data" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xd480a423, "drm_mode_probed_add" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x96f04b2c, "drm_mode_duplicate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2715240, "spi_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x7ba27b50, "drm_dev_unplug" },
	{ 0xe2dd2a55, "drm_atomic_helper_shutdown" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("spi:e1144cs021");
MODULE_ALIAS("spi:e1190cs021");
MODULE_ALIAS("spi:e2200cs021");
MODULE_ALIAS("spi:e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021C*");

MODULE_INFO(srcversion, "9373D706F735FF3A32CE696");
