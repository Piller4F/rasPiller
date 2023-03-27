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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0x4558a487, "single_open" },
	{ 0x83caedf8, "debugfs_create_u8" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xe6531659, "firmware_request_cache" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x68bae379, "single_release" },
	{ 0x2f07a679, "seq_puts" },
	{ 0x18fcb916, "no_llseek" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x393cac96, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xcbfa914e, "ieee80211_unregister_hw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x147d924f, "trace_event_buffer_reserve" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdcf25530, "seq_read" },
	{ 0x42d4bd02, "bpf_trace_run3" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x44afd3ff, "ieee80211_stop_queues" },
	{ 0xc5cfa4dc, "ieee80211_stop_queue" },
	{ 0xcd638257, "ieee80211_tx_status" },
	{ 0xcc17cb7b, "debugfs_create_u32" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x8fc79e3f, "ieee80211_rx_list" },
	{ 0xa691e503, "bpf_trace_run9" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xc059d234, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x89d873f9, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xabbc5665, "ieee80211_wake_queues" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x56837274, "trace_event_reg" },
	{ 0x2e77dd40, "usb_poison_urb" },
	{ 0xbd7b056, "seq_putc" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xbea4a48b, "simple_attr_release" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xb4af96ed, "usb_free_coherent" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x7fda8347, "perf_trace_run_bpf_submit" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xb41e3eae, "devm_kmemdup" },
	{ 0x6c1405a8, "ieee80211_queue_delayed_work" },
	{ 0x28dc9dc5, "debugfs_attr_read" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x54acd503, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x44239691, "_dev_info" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0xd4010db0, "__free_pages" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0x20a52f2, "trace_event_ignore_this_pid" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7241c452, "usb_reset_device" },
	{ 0xfaf1442c, "usb_bulk_msg" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x19734d49, "ieee80211_send_bar" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xfba4db8a, "ieee80211_get_tx_rates" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x18cc3332, "trace_event_buffer_commit" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x43782f6e, "ieee80211_wake_queue" },
	{ 0x24209a1a, "event_triggers_call" },
	{ 0x7ae81428, "ieee80211_get_hdrlen_from_skb" },
	{ 0x85c5a49d, "bpf_trace_run2" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xd065bc19, "ieee80211_register_hw" },
	{ 0xa1803e34, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x591c79cc, "trace_event_raw_init" },
	{ 0xdc1b8d4a, "ieee80211_tx_status_ext" },
	{ 0xc801188a, "skb_add_rx_frag" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x6970de83, "trace_event_printf" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x5294487b, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x6b8bf149, "netif_receive_skb_list" },
	{ 0x7ef23c67, "trace_raw_output_prep" },
	{ 0xa6257a2f, "complete" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x4fcafe41, "usb_alloc_coherent" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x290f67dd, "debugfs_attr_write" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xeddc14d5, "bpf_trace_run4" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x2eb0acab, "simple_attr_open" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x17afb12f, "__put_page" },
	{ 0x76f7ca05, "__skb_pad" },
	{ 0x7d7404bc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "cfg80211,mac80211");

MODULE_ALIAS("usb:v0B05p17D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3431d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3434d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp7601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2717p4106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2A5Fp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7710d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7DC7FDDFE7F3154D60A9472");
