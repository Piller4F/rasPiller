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
	{ 0x1bd03ce1, "class_find_device" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbeb202fd, "get_net_ns_by_fd" },
	{ 0x54475510, "register_pernet_device" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x6fbe8631, "__dev_change_net_namespace" },
	{ 0x3ac68802, "genl_register_family" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc8c04121, "genl_unregister_family" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x56a90618, "dev_get_by_name" },
	{ 0xb94969d9, "device_match_name" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x147d924f, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xea71e4ff, "get_net_ns_by_pid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2efece57, "__put_net" },
	{ 0x42d4bd02, "bpf_trace_run3" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x2db3364f, "dev_set_mac_address" },
	{ 0xa5a62d7e, "device_del" },
	{ 0xe2f5ce26, "bpf_trace_run1" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x435b23bf, "unregister_pernet_device" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xbbc1b23a, "class_unregister" },
	{ 0x56837274, "trace_event_reg" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x5792f848, "strlcpy" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xe99db1f6, "dev_get_by_index" },
	{ 0x3350c520, "netlink_unicast" },
	{ 0xbc41d96d, "device_add" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xadc5e3a, "init_net" },
	{ 0xac97d5fa, "__class_register" },
	{ 0x7fda8347, "perf_trace_run_bpf_submit" },
	{ 0xebe09d0c, "__dev_get_by_index" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x23522ebe, "class_for_each_device" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x43cd0ea3, "netlink_broadcast" },
	{ 0x20a52f2, "trace_event_ignore_this_pid" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x18cc3332, "trace_event_buffer_commit" },
	{ 0x4951059a, "device_rename" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb18f4e29, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x24209a1a, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x85c5a49d, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x591c79cc, "trace_event_raw_init" },
	{ 0x8ce4e137, "genlmsg_put" },
	{ 0x3055489f, "device_initialize" },
	{ 0x6970de83, "trace_event_printf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf942e76e, "nla_put_64bit" },
	{ 0x7ef23c67, "trace_raw_output_prep" },
	{ 0xbc34fb13, "trace_output_call" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xeddc14d5, "bpf_trace_run4" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C97F2867043A67D3F3E2091");
