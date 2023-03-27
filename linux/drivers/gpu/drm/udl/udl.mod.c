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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xc1404492, "drm_dev_register" },
	{ 0x9cb2b91b, "drm_compat_ioctl" },
	{ 0x4d8a3eb, "drm_mode_config_helper_resume" },
	{ 0xe8e4f64d, "drm_mode_config_reset" },
	{ 0x549b40c6, "drm_atomic_helper_connector_reset" },
	{ 0xd174079a, "drm_gem_simple_kms_reset_shadow_plane" },
	{ 0x821c29de, "drm_gem_prime_import_dev" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8c329811, "drm_helper_probe_single_connector_modes" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x82273d30, "drm_gem_fb_begin_cpu_access" },
	{ 0x95780381, "drm_gem_simple_kms_duplicate_shadow_plane_state" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0xbf551c38, "drm_connector_cleanup" },
	{ 0xaec02328, "drm_do_get_edid" },
	{ 0x6f7b4375, "drm_simple_display_pipe_init" },
	{ 0xfa73fd87, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x56e7ee3c, "usb_get_descriptor" },
	{ 0xa9f34c05, "drm_fbdev_generic_setup" },
	{ 0x2f358820, "drm_connector_update_edid_property" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x3d9453ea, "drm_gem_shmem_prime_import_sg_table" },
	{ 0x174caabb, "__devm_drm_dev_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x56ad9b70, "drm_gem_fb_create_with_dirty" },
	{ 0x6626afca, "down" },
	{ 0x8e66549b, "drm_read" },
	{ 0x292268, "noop_llseek" },
	{ 0x9a30a3ee, "drm_gem_simple_kms_prepare_shadow_fb" },
	{ 0x2b6fb543, "drm_atomic_helper_damage_merged" },
	{ 0x9f365d72, "drm_add_edid_modes" },
	{ 0xf1bc9c8d, "usb_intf_get_dma_device" },
	{ 0x89771b2f, "drm_mode_config_helper_suspend" },
	{ 0xb4af96ed, "usb_free_coherent" },
	{ 0xc3b835de, "drm_connector_init" },
	{ 0x7ba27b50, "drm_dev_unplug" },
	{ 0x78be5af, "drm_gem_simple_kms_destroy_shadow_plane_state" },
	{ 0xa00bf9e2, "drm_gem_prime_fd_to_handle" },
	{ 0xd85dd0b7, "drm_ioctl" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0xd6168557, "drm_gem_mmap" },
	{ 0x5d974791, "drm_atomic_helper_connector_destroy_state" },
	{ 0x50187de8, "drm_atomic_helper_check" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x18e9e607, "drm_atomic_helper_commit" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2e8ca0ec, "drmm_mode_config_init" },
	{ 0xb51a7d00, "drm_gem_prime_handle_to_fd" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6d2e27cc, "drm_gem_simple_kms_cleanup_shadow_fb" },
	{ 0xcf2a6966, "up" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0xc2c4c740, "drm_gem_prime_mmap" },
	{ 0x8c95cab9, "drm_gem_shmem_dumb_create" },
	{ 0x4fcafe41, "usb_alloc_coherent" },
	{ 0xb0a8876a, "drm_kms_helper_poll_init" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0x92e683f5, "down_timeout" },
	{ 0xed6fd404, "drm_gem_fb_end_cpu_access" },
	{ 0x7a231395, "drm_poll" },
	{ 0x7d7404bc, "usb_alloc_urb" },
	{ 0x2fa803a0, "drm_open" },
	{ 0x6c8ed9c1, "drm_kms_helper_poll_fini" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*icFFisc00ip00in*");

MODULE_INFO(srcversion, "94EDC0B0B51AA4C5F6AF045");
