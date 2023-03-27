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
	{ 0xec11806, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x537dd3d4, "ieee802154_hdr_push" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xbabe8df, "skb_clone" },
	{ 0xddb15a4a, "wpan_phy_new" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x147d924f, "trace_event_buffer_reserve" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x42d4bd02, "bpf_trace_run3" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0xe4493f55, "crypto_alloc_sync_skcipher" },
	{ 0xdc125ab4, "ieee802154_hdr_pull" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0xe2f5ce26, "bpf_trace_run1" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xc051115b, "free_netdev" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x56837274, "trace_event_reg" },
	{ 0x5682efd3, "netif_receive_skb" },
	{ 0xfe40526c, "wpan_phy_free" },
	{ 0x5792f848, "strlcpy" },
	{ 0xccb6a389, "ieee802154_hdr_peek" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x6d1b6f0b, "crypto_aead_encrypt" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x94cf33a0, "wpan_phy_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x7fda8347, "perf_trace_run_bpf_submit" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3fade900, "crypto_aead_setkey" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0x2425fd6f, "skb_copy_expand" },
	{ 0x52544d6c, "crypto_skcipher_decrypt" },
	{ 0x20a52f2, "trace_event_ignore_this_pid" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0x1caff506, "crypto_destroy_tfm" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x18cc3332, "trace_event_buffer_commit" },
	{ 0xe775d56e, "wpan_phy_unregister" },
	{ 0x2f9379e6, "ieee802154_hdr_peek_addrs" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x185f97af, "unregister_netdevice_queue" },
	{ 0x5c788f1c, "crypto_skcipher_setkey" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x24209a1a, "event_triggers_call" },
	{ 0xbcb8184a, "crypto_aead_decrypt" },
	{ 0xca4f1e22, "crypto_aead_setauthsize" },
	{ 0xc7f84d1b, "netdev_warn" },
	{ 0x85c5a49d, "bpf_trace_run2" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x81094cb6, "crypto_alloc_aead" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x4829a47e, "memcpy" },
	{ 0x591c79cc, "trace_event_raw_init" },
	{ 0x66495ece, "dev_alloc_name" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x6970de83, "trace_event_printf" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0x7ef23c67, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xeddc14d5, "bpf_trace_run4" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x87e2553b, "ieee802154_max_payload" },
	{ 0xb4e826c3, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "ieee802154,crc-ccitt");


MODULE_INFO(srcversion, "A576A87150F5BD093EED83C");
