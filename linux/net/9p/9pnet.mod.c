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
	{ 0x2d3385d3, "system_wq" },
	{ 0x33a860c8, "kmem_cache_destroy" },
	{ 0xb0ff696a, "kernel_write" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x25b5a5c9, "iov_iter_revert" },
	{ 0x98cf60b3, "strlen" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x2f07a679, "seq_puts" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x7b261aab, "sock_release" },
	{ 0xd577cabe, "_copy_from_iter" },
	{ 0x393cac96, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x44e9a829, "match_token" },
	{ 0x9ed538b6, "init_user_ns" },
	{ 0x85df9b6c, "strsep" },
	{ 0x147d924f, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdd64e639, "strscpy" },
	{ 0x42d4bd02, "bpf_trace_run3" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb880495f, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x157ba90a, "kernel_read" },
	{ 0xdcb764ad, "memset" },
	{ 0x2e188c54, "from_kuid" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x70f7050d, "iov_iter_kvec" },
	{ 0x56837274, "trace_event_reg" },
	{ 0x41fa1e0b, "from_kgid" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0xa1018fa2, "kmem_cache_free" },
	{ 0x954f099c, "idr_preload" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x49b3a51d, "kmem_cache_create_usercopy" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x4e3567f7, "match_int" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xe3056e58, "fput" },
	{ 0x7fda8347, "perf_trace_run_bpf_submit" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x1acd7981, "module_put" },
	{ 0x41314665, "kmem_cache_alloc" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xabaedbc4, "make_kuid" },
	{ 0x20a52f2, "trace_event_ignore_this_pid" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x18cc3332, "trace_event_buffer_commit" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xda68b735, "sock_alloc_file" },
	{ 0x96b759ad, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x24209a1a, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x85c5a49d, "bpf_trace_run2" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x591c79cc, "trace_event_raw_init" },
	{ 0x8ce9945b, "kernel_bind" },
	{ 0xa53005d9, "fget" },
	{ 0x6970de83, "trace_event_printf" },
	{ 0xd93c010f, "iov_iter_advance" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7ef23c67, "trace_raw_output_prep" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xeddc14d5, "bpf_trace_run4" },
	{ 0x43ad8cd7, "_copy_to_iter" },
	{ 0x17afb12f, "__put_page" },
	{ 0x68173019, "try_module_get" },
	{ 0x3f3978e7, "__sock_create" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "62590945ABB057896C429E1");
