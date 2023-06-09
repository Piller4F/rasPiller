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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x5df3f798, "cec_register_adapter" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbfd4b8d5, "drm_gem_prime_export" },
	{ 0xe0cc4550, "drm_release" },
	{ 0x77173f29, "drm_plane_create_color_properties" },
	{ 0x8bffee2b, "drm_atomic_get_connector_state" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x308f6f5b, "drm_gem_plane_helper_prepare_fb" },
	{ 0x4802dc5b, "drm_plane_create_zpos_immutable_property" },
	{ 0xae0ce2ef, "__pm_runtime_idle" },
	{ 0xc1404492, "drm_dev_register" },
	{ 0xc2662a37, "devm_snd_soc_register_card" },
	{ 0x9cb2b91b, "drm_compat_ioctl" },
	{ 0xa990f689, "platform_unregister_drivers" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x815588a6, "clk_enable" },
	{ 0x1b3a4ea7, "of_find_matching_node_and_match" },
	{ 0x164050e3, "of_find_i2c_adapter_by_node" },
	{ 0x4ba36189, "drm_get_edid" },
	{ 0x7622e1e0, "drm_atomic_helper_update_plane" },
	{ 0xd97de537, "drm_connector_attach_hdr_output_metadata_property" },
	{ 0x7dbc915a, "drm_scdc_get_scrambling_status" },
	{ 0xdbe69fd4, "of_dma_configure_id" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0xf1128625, "of_device_get_match_data" },
	{ 0x8509f32, "component_unbind_all" },
	{ 0x82d2c8ee, "drm_atomic_helper_bridge_duplicate_state" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x27339f09, "param_ops_int" },
	{ 0xadbeed61, "mipi_dsi_packet_format_is_long" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb55d3b93, "__pm_runtime_use_autosuspend" },
	{ 0xcc328a5c, "reservation_ww_class" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x339b70b6, "drm_plane_create_chroma_siting_properties" },
	{ 0x2b86d2ea, "drm_gem_cma_create" },
	{ 0xd5bf52eb, "clk_fixed_factor_ops" },
	{ 0x93da264c, "component_add" },
	{ 0x1ecf5d80, "cec_received_msg_ts" },
	{ 0x8e088522, "drmm_of_get_bridge" },
	{ 0x842bd345, "__pm_runtime_suspend" },
	{ 0x2ab36829, "drm_plane_create_blend_mode_property" },
	{ 0x693a304d, "of_parse_phandle" },
	{ 0xe8e4f64d, "drm_mode_config_reset" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xb0bbcb9a, "dev_err_probe" },
	{ 0x549b40c6, "drm_atomic_helper_connector_reset" },
	{ 0x6ed0f44d, "drm_atomic_helper_commit_hw_done" },
	{ 0x8144f04b, "cec_fill_conn_info_from_drm" },
	{ 0xec5e3616, "drm_atomic_helper_page_flip" },
	{ 0x4542922d, "devm_snd_dmaengine_pcm_register" },
	{ 0x20092403, "drm_bridge_attach" },
	{ 0xc2b56842, "drm_mode_destroy" },
	{ 0x2cc495c5, "rpi_firmware_property_list" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x9b285573, "drm_match_cea_mode" },
	{ 0x25379e73, "clk_set_min_rate" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xe317082a, "__drm_printfn_info" },
	{ 0x1e793d25, "drm_mode_create_tv_margin_properties" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xb096c1db, "drm_hdmi_avi_infoframe_quant_range" },
	{ 0x64108436, "drm_crtc_handle_vblank" },
	{ 0x65702bd6, "drm_default_rgb_quant_range" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9ec98d09, "__drm_atomic_helper_crtc_reset" },
	{ 0x48a63267, "drm_plane_create_rotation_property" },
	{ 0x8c329811, "drm_helper_probe_single_connector_modes" },
	{ 0x393cac96, "seq_printf" },
	{ 0x4b102195, "mipi_dsi_host_unregister" },
	{ 0x56470118, "__warn_printk" },
	{ 0x49995845, "drm_crtc_vblank_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x979f6137, "drm_atomic_helper_wait_for_flip_done" },
	{ 0x39c31d80, "drm_crtc_vblank_helper_get_vblank_timestamp" },
	{ 0xd88cb85b, "__of_get_address" },
	{ 0x4ace3bd5, "component_bind_all" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7faaff71, "devm_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x595d8002, "hdmi_infoframe_pack" },
	{ 0x72949630, "platform_find_device_by_driver" },
	{ 0x47c20f8a, "refcount_dec_not_one" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x7b9cb87e, "component_match_add_release" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0x65d72ad8, "drm_atomic_helper_bridge_destroy_state" },
	{ 0xa8bee638, "of_device_is_compatible" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0x147d924f, "trace_event_buffer_reserve" },
	{ 0x28779e52, "drm_printf" },
	{ 0x1f7bc15b, "drm_vblank_init" },
	{ 0x3919be46, "dma_free_attrs" },
	{ 0xe447e50b, "component_master_del" },
	{ 0x21012113, "platform_device_register_full" },
	{ 0x787e1bf2, "drm_encoder_init" },
	{ 0x3f9cbcbb, "drm_connector_list_iter_next" },
	{ 0x3bd1d42a, "drm_hdmi_avi_infoframe_bars" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x17d4bbaf, "__drm_atomic_helper_connector_duplicate_state" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x848cf6de, "drm_crtc_enable_color_mgmt" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xa4c3aa14, "__drm_atomic_helper_crtc_destroy_state" },
	{ 0x96b02e63, "drm_scdc_set_high_tmds_clock_ratio" },
	{ 0x42d4bd02, "bpf_trace_run3" },
	{ 0x265c90ab, "__devm_reset_control_get" },
	{ 0xf81ace0a, "drm_universal_plane_init" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x242020a, "cec_allocate_adapter" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbf551c38, "drm_connector_cleanup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaec02328, "drm_do_get_edid" },
	{ 0x11d80f6d, "__drm_atomic_helper_plane_duplicate_state" },
	{ 0xae277372, "__drm_crtc_commit_free" },
	{ 0xfa73fd87, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x513072fe, "__drm_puts_seq_file" },
	{ 0xd29a486a, "__drm_atomic_helper_crtc_duplicate_state" },
	{ 0xdce92598, "drm_gem_cma_dumb_create_internal" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa9f34c05, "drm_fbdev_generic_setup" },
	{ 0xa9bbc700, "drm_atomic_helper_set_config" },
	{ 0xb681aa76, "drmm_mutex_init" },
	{ 0xbe1ac421, "drm_gem_cma_get_sg_table" },
	{ 0xc2ded2db, "param_ops_charp" },
	{ 0xd0469b32, "drm_plane_create_alpha_property" },
	{ 0x2f358820, "drm_connector_update_edid_property" },
	{ 0x1a411479, "drm_syncobj_free" },
	{ 0x136ae280, "drm_print_regset32" },
	{ 0xf0517d7a, "drm_mm_init" },
	{ 0x2327a3a3, "drmm_kmalloc" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x2eb01a60, "drm_atomic_state_alloc" },
	{ 0x174caabb, "__devm_drm_dev_alloc" },
	{ 0xc6015e09, "drm_atomic_commit" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7bc7c44b, "__drm_atomic_helper_plane_reset" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x7f8cd848, "drm_atomic_get_old_private_obj_state" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0x8eadede1, "drm_crtc_vblank_put" },
	{ 0x5ba1eadb, "of_device_is_available" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x84e00d66, "drm_object_attach_property" },
	{ 0x60d9df4c, "dma_resv_add_shared_fence" },
	{ 0x96f04b2c, "drm_mode_duplicate" },
	{ 0xfc751622, "drm_mode_create_tv_properties" },
	{ 0x3802ed54, "cec_unregister_adapter" },
	{ 0x824c1591, "drm_crtc_init_with_planes" },
	{ 0x24f39c39, "reset_control_reset" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xd052fa36, "drmm_connector_init" },
	{ 0xb290cb5b, "drm_atomic_helper_check_plane_state" },
	{ 0x7dbd35d9, "drm_gem_fb_create" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0xe03327dc, "drm_gem_handle_create" },
	{ 0x63ddb9a6, "snd_dmaengine_pcm_prepare_slave_config" },
	{ 0x5eb7bfbd, "rpi_firmware_find_node" },
	{ 0x78a43f14, "drm_atomic_get_new_private_obj_state" },
	{ 0x263bd9df, "drm_crtc_vblank_on" },
	{ 0xa5d39ec, "dma_sync_wait" },
	{ 0xfc654ab4, "drm_fb_cma_get_gem_obj" },
	{ 0x2f9b8ab7, "drm_crtc_commit_wait" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x9166fada, "strncpy" },
	{ 0x56837274, "trace_event_reg" },
	{ 0xacdeff83, "drm_hdmi_infoframe_set_hdr_metadata" },
	{ 0xe1e570f, "dma_alloc_attrs" },
	{ 0x9b2a369c, "drm_gem_cma_mmap" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9018f67d, "drm_connector_attach_colorspace_property" },
	{ 0xf182e10e, "cec_transmit_done_ts" },
	{ 0x5ff38fa7, "platform_get_resource" },
	{ 0x8e66549b, "drm_read" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0x292268, "noop_llseek" },
	{ 0x63e9296, "rpi_firmware_put" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9b62b37c, "__drm_atomic_helper_connector_destroy_state" },
	{ 0x9f365d72, "drm_add_edid_modes" },
	{ 0xd195cebf, "__drm_atomic_helper_connector_reset" },
	{ 0xefbfd9c, "platform_device_unregister" },
	{ 0xad981c12, "dma_request_chan_by_mask" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xe3fa57ea, "of_clk_add_hw_provider" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xc403628, "of_clk_hw_onecell_get" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x4520c77d, "drm_atomic_set_fb_for_plane" },
	{ 0x52c5e452, "debugfs_create_bool" },
	{ 0xfbaf73d9, "drmm_crtc_init_with_planes" },
	{ 0x41482d8b, "strndup_user" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xb6824e42, "__drmm_universal_plane_alloc" },
	{ 0x5132ab54, "drm_debugfs_create_files" },
	{ 0x7dabf916, "drm_atomic_helper_fake_vblank" },
	{ 0x7fda8347, "perf_trace_run_bpf_submit" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xc3b835de, "drm_connector_init" },
	{ 0x26559349, "of_match_device" },
	{ 0x7ba27b50, "drm_dev_unplug" },
	{ 0xbc7bc123, "drm_gem_vm_open" },
	{ 0xda22abd4, "drm_gem_vm_close" },
	{ 0xc4ce4803, "drm_modeset_lock" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xea46324a, "drm_writeback_connector_init" },
	{ 0xdf666902, "drm_rotation_simplify" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x97213ade, "drm_atomic_get_crtc_state" },
	{ 0xa00bf9e2, "drm_gem_prime_fd_to_handle" },
	{ 0x3d6a8166, "devm_add_action" },
	{ 0x51ba04f9, "drm_dev_printk" },
	{ 0x5e579025, "drm_connector_attach_tv_margin_properties" },
	{ 0x2a8dd4cc, "drm_plane_cleanup" },
	{ 0xd85dd0b7, "drm_ioctl" },
	{ 0x26152c1e, "drm_property_create_enum" },
	{ 0xd6168557, "drm_gem_mmap" },
	{ 0x992953c5, "drm_syncobj_replace_fence" },
	{ 0xc2232eb3, "drm_connector_list_iter_end" },
	{ 0x5d974791, "drm_atomic_helper_connector_destroy_state" },
	{ 0x4344bb8c, "__drm_atomic_helper_plane_destroy_state" },
	{ 0x4c1ea8b7, "drm_atomic_private_obj_fini" },
	{ 0x20a52f2, "trace_event_ignore_this_pid" },
	{ 0x50187de8, "drm_atomic_helper_check" },
	{ 0xdb6d48b2, "put_device" },
	{ 0xe98ae58e, "dma_resv_reserve_shared" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x18e9e607, "drm_atomic_helper_commit" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe4473b99, "__drm_atomic_helper_private_obj_duplicate_state" },
	{ 0xa2a96a86, "platform_get_irq_byname" },
	{ 0x79491136, "__drmm_add_action_or_reset" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x8b1dde94, "drm_hdmi_avi_infoframe_colorimetry" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3bfaf863, "devm_snd_soc_register_component" },
	{ 0x2aaf3a54, "__platform_register_drivers" },
	{ 0x2ed3c600, "drm_mode_debug_printmodeline" },
	{ 0x9a0209d1, "drm_atomic_get_new_connector_for_encoder" },
	{ 0x588b621b, "drm_atomic_helper_commit_modeset_disables" },
	{ 0xed635ef4, "drm_connector_attach_encoder" },
	{ 0xcceae405, "drm_crtc_send_vblank_event" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0x2de33816, "drm_gem_object_lookup" },
	{ 0x7efb095e, "drm_crtc_vblank_get" },
	{ 0xdf316014, "of_find_compatible_node" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x18cc3332, "trace_event_buffer_commit" },
	{ 0x8f443827, "drm_gem_cma_vmap" },
	{ 0xa44c2eb0, "dev_driver_string" },
	{ 0x7ff8535f, "drm_gem_handle_delete" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x16ef57ab, "drm_mode_object_put" },
	{ 0x69db02fc, "drm_bridge_remove" },
	{ 0x95b31a0d, "drm_add_modes_noedid" },
	{ 0x98c039dc, "dma_fence_wait_timeout" },
	{ 0x53cc38d2, "drm_atomic_helper_bridge_reset" },
	{ 0xb2695aa6, "drm_plane_create_zpos_property" },
	{ 0x3830ac1f, "drm_scdc_read" },
	{ 0x86cd1836, "devm_clk_get" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xdd671fc8, "drm_detect_hdmi_monitor" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2e8ca0ec, "drmm_mode_config_init" },
	{ 0xb51a7d00, "drm_gem_prime_handle_to_fd" },
	{ 0xed549a5f, "rpi_firmware_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x44693ee3, "platform_get_resource_byname" },
	{ 0xfeb953b1, "__drm_printfn_seq_file" },
	{ 0xb41151c4, "drm_gem_cma_prime_import_sg_table" },
	{ 0x8e21c9a1, "dma_fence_add_callback" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x24209a1a, "event_triggers_call" },
	{ 0x36645d3c, "drm_connector_unregister" },
	{ 0x151c3d8, "drm_encoder_cleanup" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0x85c5a49d, "bpf_trace_run2" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfdee38ff, "drm_connector_list_iter_begin" },
	{ 0x7e9bc726, "devm_clk_hw_register" },
	{ 0x855bc6ac, "drm_aperture_remove_conflicting_framebuffers" },
	{ 0x5d16cc95, "drm_writeback_signal_completion" },
	{ 0x37cef887, "drm_crtc_cleanup" },
	{ 0xd7f03073, "drm_atomic_helper_commit_planes" },
	{ 0xc95fd56d, "dma_release_channel" },
	{ 0x7fa18ba3, "cec_s_phys_addr_from_edid" },
	{ 0xb9cad492, "__drm_atomic_state_free" },
	{ 0xc1d32d51, "drm_writeback_queue_job" },
	{ 0x163b20af, "drm_atomic_helper_crtc_destroy_state" },
	{ 0x37a0cba, "kfree" },
	{ 0xd693d664, "drm_modeset_lock_init" },
	{ 0x3aee9f10, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0xc86e9826, "unmap_mapping_range" },
	{ 0x36ff47cb, "component_del" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbb7d79a9, "drm_mode_object_get" },
	{ 0x591c79cc, "trace_event_raw_init" },
	{ 0xaa9bd001, "cec_s_conn_info" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xd3d31e05, "drm_mode_create_hdmi_colorspace_property" },
	{ 0x6a106884, "ww_mutex_unlock" },
	{ 0x7a86a83a, "devm_ioremap" },
	{ 0xcdf08f98, "cec_s_phys_addr" },
	{ 0x1dc2ca85, "drm_connector_atomic_hdr_metadata_equal" },
	{ 0x23daa989, "mipi_dsi_create_packet" },
	{ 0xb4032484, "drm_mm_insert_node_in_range" },
	{ 0x31e68cfb, "drm_atomic_helper_cleanup_planes" },
	{ 0x6970de83, "trace_event_printf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x2946f7e7, "drm_atomic_private_obj_init" },
	{ 0xe2dd2a55, "drm_atomic_helper_shutdown" },
	{ 0x57698a50, "drm_mm_takedown" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xbd2dccc3, "pm_runtime_set_autosuspend_delay" },
	{ 0xc2c4c740, "drm_gem_prime_mmap" },
	{ 0xa1d9354b, "drm_atomic_helper_disable_plane" },
	{ 0x309b72f4, "drm_connector_helper_hpd_irq_event" },
	{ 0xacaa4c72, "dma_fence_match_context" },
	{ 0x7ef23c67, "trace_raw_output_prep" },
	{ 0xd480a423, "drm_mode_probed_add" },
	{ 0x5679ec62, "component_master_add_with_match" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0a0da0c, "rational_best_approximation" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2d4c773a, "hdmi_spd_infoframe_init" },
	{ 0x9470e356, "drm_syncobj_find_fence" },
	{ 0x66c2c10f, "of_property_match_string" },
	{ 0x7606362, "platform_get_irq" },
	{ 0x928ac43e, "drm_atomic_get_private_obj_state" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f6e287, "drm_dev_dbg" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x4b7ebf95, "drm_mm_remove_node" },
	{ 0xb0a8876a, "drm_kms_helper_poll_init" },
	{ 0x64d85af5, "drm_gem_cma_free_object" },
	{ 0x82c3f6d, "devm_pm_runtime_enable" },
	{ 0x4c45b997, "devm_rpi_firmware_get" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf88b1ff6, "drm_atomic_helper_connector_tv_reset" },
	{ 0x692ee7ec, "dma_resv_add_excl_fence" },
	{ 0xabfbd3df, "drm_syncobj_find" },
	{ 0x20afa643, "drm_atomic_helper_commit_modeset_enables" },
	{ 0x13f7e497, "drm_bridge_add" },
	{ 0xbbd8b668, "drm_connector_attach_max_bpc_property" },
	{ 0x2af171c3, "drm_mode_crtc_set_gamma_size" },
	{ 0xbe8b813f, "mipi_dsi_host_register" },
	{ 0x39ce7ce, "drm_dev_enter" },
	{ 0xc3ccaaec, "drm_scdc_set_scrambling" },
	{ 0xcef322a3, "ww_mutex_lock_interruptible" },
	{ 0x7a231395, "drm_poll" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x3d02cd70, "dma_fence_signal_locked" },
	{ 0xa0c4cf2b, "rpi_firmware_clk_get_max_rate" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2fa803a0, "drm_open" },
	{ 0xfd457b8, "gpiod_get_value_cansleep" },
	{ 0x83fef475, "drm_atomic_helper_plane_destroy_state" },
	{ 0xe865c4ed, "cec_delete_adapter" },
	{ 0xb6ae0944, "drmm_encoder_init" },
};

MODULE_INFO(depends, "cec,drm,drm_kms_helper,snd-soc-core");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-vc5");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-vc5C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-vc4");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-vc4C*");
MODULE_ALIAS("of:N*T*Cbrcm,cygnus-vc4");
MODULE_ALIAS("of:N*T*Cbrcm,cygnus-vc4C*");

MODULE_INFO(srcversion, "B7DFC0D016F1DDC1FDFE5A6");
