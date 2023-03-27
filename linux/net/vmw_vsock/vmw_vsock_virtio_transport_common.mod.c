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
	{ 0x2d3385d3, "system_wq" },
	{ 0xe1f7f753, "release_sock" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x25b5a5c9, "iov_iter_revert" },
	{ 0x1c883530, "vsock_assign_transport" },
	{ 0xba90c49e, "vsock_create_connected" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xd577cabe, "_copy_from_iter" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x147d924f, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xeebe6657, "vsock_stream_has_space" },
	{ 0xc9142f3d, "vsock_core_get_transport" },
	{ 0x1875561a, "bpf_trace_run10" },
	{ 0x37c2f96d, "vsock_find_connected_socket" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x63736b8f, "vsock_stream_has_data" },
	{ 0x2b548bcd, "lock_sock_nested" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x56837274, "trace_event_reg" },
	{ 0x27600d4d, "sk_free" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x7fda8347, "perf_trace_run_bpf_submit" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x3d4b0fca, "vsock_addr_init" },
	{ 0x20a52f2, "trace_event_ignore_this_pid" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc86acb6a, "vsock_find_bound_socket" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x18cc3332, "trace_event_buffer_commit" },
	{ 0xcad16848, "sk_error_report" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xddeaab78, "bpf_trace_run8" },
	{ 0x24209a1a, "event_triggers_call" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x591c79cc, "trace_event_raw_init" },
	{ 0x298d3941, "vsock_deliver_tap" },
	{ 0x6970de83, "trace_event_printf" },
	{ 0x25e04f91, "vsock_remove_sock" },
	{ 0x7ef23c67, "trace_raw_output_prep" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x28b23f99, "vsock_insert_connected" },
	{ 0x43ad8cd7, "_copy_to_iter" },
	{ 0x5f9038d9, "vsock_enqueue_accept" },
};

MODULE_INFO(depends, "vsock");


MODULE_INFO(srcversion, "30C85B8B79E7F7B5B7C67A3");
