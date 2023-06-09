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
	{ 0x1b696b22, "cdev_alloc" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xc793df81, "cdev_del" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd4632a81, "media_entity_find_link" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x98cf60b3, "strlen" },
	{ 0x5f29f894, "media_device_unregister_entity" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x903e2a53, "fwnode_handle_put" },
	{ 0x7331d901, "media_entity_get_fwnode_pad" },
	{ 0xaeaaf45e, "media_devnode_create" },
	{ 0x611be67c, "media_graph_walk_start" },
	{ 0x18fcb916, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x147d924f, "trace_event_buffer_reserve" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc54c3347, "media_get_pad_index" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x99078b39, "trace_print_flags_seq" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x6c289ab5, "device_register" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x6e1fa6b9, "i2c_new_client_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x4c260ee3, "media_graph_walk_next" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xbbc1b23a, "class_unregister" },
	{ 0xefe1193d, "media_request_object_bind" },
	{ 0x56837274, "trace_event_reg" },
	{ 0xe42ac201, "spi_new_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x34d854ac, "media_request_put" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xee25a3b1, "i2c_unregister_device" },
	{ 0xac97d5fa, "__class_register" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x7fda8347, "perf_trace_run_bpf_submit" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf355108, "cdev_add" },
	{ 0xcb051e93, "media_request_get_by_fd" },
	{ 0x90a2a75e, "media_device_register_entity" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x1acd7981, "module_put" },
	{ 0x8af99679, "media_request_object_put" },
	{ 0x2a74e094, "i2c_new_scanned_device" },
	{ 0x20a52f2, "trace_event_ignore_this_pid" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x18cc3332, "trace_event_buffer_commit" },
	{ 0x1ebc1762, "media_create_pad_link" },
	{ 0xfb348166, "media_create_intf_link" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb18f4e29, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x24209a1a, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x85c5a49d, "bpf_trace_run2" },
	{ 0x74b60436, "fwnode_graph_get_port_parent" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa7c1da1f, "media_request_object_complete" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x591c79cc, "trace_event_raw_init" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xc5cad677, "fwnode_graph_get_next_endpoint" },
	{ 0xd6fb9b79, "media_request_object_unbind" },
	{ 0xf496e46, "dev_fwnode" },
	{ 0x6970de83, "trace_event_printf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe71535d7, "device_unregister" },
	{ 0x29cdd63f, "spi_unregister_device" },
	{ 0x7ef23c67, "trace_raw_output_prep" },
	{ 0xc611ffca, "fwnode_graph_get_remote_endpoint" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe75ac574, "media_request_object_init" },
	{ 0x89e04524, "media_request_object_find" },
	{ 0x68173019, "try_module_get" },
	{ 0x59ca05ed, "media_devnode_remove" },
};

MODULE_INFO(depends, "mc");


MODULE_INFO(srcversion, "6FCD0DA04875581CF5D731D");
