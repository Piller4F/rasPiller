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
	{ 0xf888ca21, "sg_init_table" },
	{ 0xf7a61aed, "skb_to_sgvec" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x50a5f46d, "usb_init_urb" },
	{ 0x1ec57b4f, "__mt76_worker_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x147d924f, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xec3c3ec8, "mt76_rx_poll_complete" },
	{ 0xf2e808b0, "__page_frag_cache_drain" },
	{ 0x42d4bd02, "bpf_trace_run3" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x3cdeffdf, "mt76_queue_tx_complete" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xc6634315, "mt76_ac_to_hwq" },
	{ 0xf3a0c3c8, "usb_unpoison_urb" },
	{ 0x56837274, "trace_event_reg" },
	{ 0x2e77dd40, "usb_poison_urb" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x7fda8347, "perf_trace_run_bpf_submit" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe1d5f7c7, "build_skb" },
	{ 0x3a604277, "kthread_unpark" },
	{ 0x2de125c0, "page_frag_alloc_align" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x20a52f2, "trace_event_ignore_this_pid" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x18cc3332, "trace_event_buffer_commit" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xa84765f4, "mt76_tx_status_check" },
	{ 0xfb9acf4c, "sched_set_fifo_low" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x6ea47834, "kthread_park" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x24209a1a, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x85c5a49d, "bpf_trace_run2" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xfd3bbae7, "mt76_has_tx_pending" },
	{ 0x4829a47e, "memcpy" },
	{ 0x591c79cc, "trace_event_raw_init" },
	{ 0xc801188a, "skb_add_rx_frag" },
	{ 0x6970de83, "trace_event_printf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7ef23c67, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e1b72d7, "usb_free_urb" },
};

MODULE_INFO(depends, "mt76");


MODULE_INFO(srcversion, "9E58AE3345C5A52E0E08491");
