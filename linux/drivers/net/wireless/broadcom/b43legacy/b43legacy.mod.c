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
	{ 0xb80e5f41, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe3c55dba, "ieee80211_rx_irqsafe" },
	{ 0x550d66f0, "ssb_dma_translation" },
	{ 0x6fe8451e, "device_remove_file" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf97dfac9, "generic_file_llseek" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x96e4c6eb, "ieee80211_queue_work" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x60ccffd4, "dma_set_mask" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x177c417b, "ieee80211_rts_get" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2e34abeb, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xcbfa914e, "ieee80211_unregister_hw" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6febbcd1, "ssb_bus_powerup" },
	{ 0x3919be46, "dma_free_attrs" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0xc962f319, "wiphy_rfkill_start_polling" },
	{ 0x8f56ef47, "__ieee80211_get_assoc_led_name" },
	{ 0x9d50b929, "wiphy_rfkill_set_hw_state_reason" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x5966c90b, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x5bc6d150, "__ssb_driver_register" },
	{ 0xe2bd2e91, "param_ops_string" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0xc5cfa4dc, "ieee80211_stop_queue" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xdcb764ad, "memset" },
	{ 0x2e80a424, "dma_sync_single_for_cpu" },
	{ 0xb8f3caa9, "ssb_driver_unregister" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc059d234, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x97308019, "led_classdev_register_ext" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xabbc5665, "ieee80211_wake_queues" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x20901b84, "ssb_device_enable" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0xe1e570f, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x81bb8729, "__dev_kfree_skb_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x6f7812f1, "ieee80211_ctstoself_get" },
	{ 0xe7f1fdf9, "simple_open" },
	{ 0x52c5e452, "debugfs_create_bool" },
	{ 0xb5617c05, "request_firmware_nowait" },
	{ 0x6c1405a8, "ieee80211_queue_delayed_work" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xa353aef4, "device_create_file" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x65003b36, "__ieee80211_get_rx_led_name" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0xc46ef937, "ssb_device_disable" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x15ea399c, "ieee80211_tx_status_irqsafe" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xb7219ef8, "dma_map_page_attrs" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xa44c2eb0, "dev_driver_string" },
	{ 0x617b026c, "hwrng_register" },
	{ 0x24f16b03, "__ieee80211_get_tx_led_name" },
	{ 0x7a0a2340, "ssb_set_devtypedata" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x43782f6e, "ieee80211_wake_queue" },
	{ 0xb97b51b0, "ieee80211_generic_frame_duration" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x79d39d9e, "__ieee80211_get_radio_led_name" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xd065bc19, "ieee80211_register_hw" },
	{ 0x5f3c0c17, "led_classdev_unregister" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4f336844, "dma_sync_single_for_device" },
	{ 0x96848186, "scnprintf" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0xc82329ad, "dma_unmap_page_attrs" },
	{ 0x5294487b, "ieee80211_free_hw" },
	{ 0x1f741098, "ssb_bus_may_powerdown" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x61827310, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x5ee0d61e, "debugfs_real_fops" },
	{ 0xd57fbd31, "hwrng_unregister" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x7343e48e, "ssb_device_is_enabled" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x81874735, "ieee80211_get_response_rate" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211,ssb,cfg80211");

MODULE_ALIAS("ssb:v4243id0812rev02*");
MODULE_ALIAS("ssb:v4243id0812rev04*");

MODULE_INFO(srcversion, "A73D4C0AB22E0079ABFC6AB");
