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
	{ 0xcc445ceb, "__sg_page_iter_dma_next" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe0cc4550, "drm_release" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc1404492, "drm_dev_register" },
	{ 0x9cb2b91b, "drm_compat_ioctl" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0xc922921b, "drm_gem_shmem_free" },
	{ 0x60ccffd4, "dma_set_mask" },
	{ 0x25379e73, "clk_set_min_rate" },
	{ 0xf5687e49, "drm_gem_shmem_mmap" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf3cc39f1, "drm_sched_resubmit_jobs" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x4f66f641, "platform_get_irq_optional" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x812fefe5, "drm_gem_shmem_get_pages_sgt" },
	{ 0x393cac96, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2f292b72, "drm_gem_unlock_reservations" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0x8fa25c24, "xa_find" },
	{ 0x7faaff71, "devm_ioremap_resource" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0x147d924f, "trace_event_buffer_reserve" },
	{ 0x3919be46, "dma_free_attrs" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x42d4bd02, "bpf_trace_run3" },
	{ 0x265c90ab, "__devm_reset_control_get" },
	{ 0x745a981, "xa_erase" },
	{ 0x5966c90b, "dma_set_coherent_mask" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x1eb77c55, "drm_sched_increase_karma" },
	{ 0xc8809758, "drm_gem_shmem_pin" },
	{ 0x1a411479, "drm_syncobj_free" },
	{ 0xf0517d7a, "drm_mm_init" },
	{ 0xdcb764ad, "memset" },
	{ 0x3d9453ea, "drm_gem_shmem_prime_import_sg_table" },
	{ 0xdf6875f4, "drm_gem_shmem_print_info" },
	{ 0x174caabb, "__devm_drm_dev_alloc" },
	{ 0xe162b4ca, "drm_sched_stop" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xe2f5ce26, "bpf_trace_run1" },
	{ 0x642f992f, "drm_dev_unregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x81772372, "drm_gem_dma_resv_wait" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x24f39c39, "reset_control_reset" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xe03327dc, "drm_gem_handle_create" },
	{ 0x5eb7bfbd, "rpi_firmware_find_node" },
	{ 0xfbbe86b5, "drm_sched_fini" },
	{ 0x56837274, "trace_event_reg" },
	{ 0x37bba187, "drm_sched_init" },
	{ 0xe1e570f, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x683f500e, "bpf_trace_run5" },
	{ 0x8e66549b, "drm_read" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0x292268, "noop_llseek" },
	{ 0x63e9296, "rpi_firmware_put" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x5132ab54, "drm_debugfs_create_files" },
	{ 0x7fda8347, "perf_trace_run_bpf_submit" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x18ccc233, "drm_sched_entity_destroy" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0xe38478e8, "drm_gem_shmem_vunmap" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xa00bf9e2, "drm_gem_prime_fd_to_handle" },
	{ 0x51ba04f9, "drm_dev_printk" },
	{ 0xd85dd0b7, "drm_ioctl" },
	{ 0xd6168557, "drm_gem_mmap" },
	{ 0x3e50b109, "drm_gem_fence_array_add" },
	{ 0xa1c663d7, "drm_gem_fence_array_add_implicit" },
	{ 0x992953c5, "drm_syncobj_replace_fence" },
	{ 0x20a52f2, "trace_event_ignore_this_pid" },
	{ 0x91bcd71b, "drm_sched_start" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2de33816, "drm_gem_object_lookup" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x18cc3332, "trace_event_buffer_commit" },
	{ 0x86cd1836, "devm_clk_get" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb51a7d00, "drm_gem_prime_handle_to_fd" },
	{ 0xed549a5f, "rpi_firmware_get" },
	{ 0x44693ee3, "platform_get_resource_byname" },
	{ 0xe296f0d5, "drm_sched_job_init" },
	{ 0x24209a1a, "event_triggers_call" },
	{ 0x85c5a49d, "bpf_trace_run2" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x591c79cc, "trace_event_raw_init" },
	{ 0x75d0deb9, "nsecs_to_jiffies64" },
	{ 0xea571b41, "drm_sched_job_cleanup" },
	{ 0x99d7122e, "drm_gem_shmem_unpin" },
	{ 0xb4032484, "drm_mm_insert_node_in_range" },
	{ 0x3b99f266, "drm_gem_lock_reservations" },
	{ 0x6970de83, "trace_event_printf" },
	{ 0xf28a7f08, "drm_gem_shmem_create" },
	{ 0x57698a50, "drm_mm_takedown" },
	{ 0xc2c4c740, "drm_gem_prime_mmap" },
	{ 0x7ef23c67, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9470e356, "drm_syncobj_find_fence" },
	{ 0x7606362, "platform_get_irq" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x4b7ebf95, "drm_mm_remove_node" },
	{ 0x599d09a4, "drm_sched_entity_init" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x20978fb9, "idr_find" },
	{ 0x9af14a1c, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x692ee7ec, "dma_resv_add_excl_fence" },
	{ 0xabfbd3df, "drm_syncobj_find" },
	{ 0xe3ef931e, "drm_gem_shmem_get_sg_table" },
	{ 0xaa6d6f4e, "drm_gem_shmem_vmap" },
	{ 0x7a231395, "drm_poll" },
	{ 0x5f11f600, "drm_sched_entity_push_job" },
	{ 0xa0c4cf2b, "rpi_firmware_clk_get_max_rate" },
	{ 0x2fa803a0, "drm_open" },
};

MODULE_INFO(depends, "drm,gpu-sched");

MODULE_ALIAS("of:N*T*Cbrcm,7268-v3d");
MODULE_ALIAS("of:N*T*Cbrcm,7268-v3dC*");
MODULE_ALIAS("of:N*T*Cbrcm,7278-v3d");
MODULE_ALIAS("of:N*T*Cbrcm,7278-v3dC*");
MODULE_ALIAS("of:N*T*Cbrcm,2711-v3d");
MODULE_ALIAS("of:N*T*Cbrcm,2711-v3dC*");

MODULE_INFO(srcversion, "3B9894E4EA1334D9A4A9986");
