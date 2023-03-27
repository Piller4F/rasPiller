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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x147d924f, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x31a0f1a7, "freezing_slow_path" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x3e0da4e, "dma_buf_fd" },
	{ 0xefe1193d, "media_request_object_bind" },
	{ 0xbbc9af30, "dma_buf_put" },
	{ 0x56837274, "trace_event_reg" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xc29ff1ec, "dma_buf_get" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x34d854ac, "media_request_put" },
	{ 0x59c6833e, "v4l_vb2q_enable_media_source" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x7fda8347, "perf_trace_run_bpf_submit" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x8af99679, "media_request_object_put" },
	{ 0x20a52f2, "trace_event_ignore_this_pid" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x18cc3332, "trace_event_buffer_commit" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x24209a1a, "event_triggers_call" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x85c5a49d, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0x591c79cc, "trace_event_raw_init" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x3486be2f, "unpin_user_pages" },
	{ 0xd6fb9b79, "media_request_object_unbind" },
	{ 0x6970de83, "trace_event_printf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7ef23c67, "trace_raw_output_prep" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe75ac574, "media_request_object_init" },
	{ 0x9231ace9, "pin_user_pages_fast" },
};

MODULE_INFO(depends, "mc,videodev");


MODULE_INFO(srcversion, "028A09F5F88A494CDDD1827");
