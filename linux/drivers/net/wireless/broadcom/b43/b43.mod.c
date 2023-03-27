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
	{ 0xdd650298, "ieee80211_rx_napi" },
	{ 0xb80e5f41, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x550d66f0, "ssb_dma_translation" },
	{ 0x6fe8451e, "device_remove_file" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4652dd25, "bcma_pmu_spuravoid_pllupdate" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x96e4c6eb, "ieee80211_queue_work" },
	{ 0x9d0b25f4, "bcma_host_pci_down" },
	{ 0x60ccffd4, "dma_set_mask" },
	{ 0x177c417b, "ieee80211_rts_get" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9932d8e6, "ssb_commit_settings" },
	{ 0xc1b99792, "ieee80211_channel_to_freq_khz" },
	{ 0x2e34abeb, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xcbfa914e, "ieee80211_unregister_hw" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6febbcd1, "ssb_bus_powerup" },
	{ 0x1c026300, "bcma_host_pci_up" },
	{ 0x3919be46, "dma_free_attrs" },
	{ 0xc962f319, "wiphy_rfkill_start_polling" },
	{ 0x8f56ef47, "__ieee80211_get_assoc_led_name" },
	{ 0x9d50b929, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x5966c90b, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5bc6d150, "__ssb_driver_register" },
	{ 0xe2bd2e91, "param_ops_string" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0xc5cfa4dc, "ieee80211_stop_queue" },
	{ 0xcd638257, "ieee80211_tx_status" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xdcb764ad, "memset" },
	{ 0x2e80a424, "dma_sync_single_for_cpu" },
	{ 0xb8f3caa9, "ssb_driver_unregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc059d234, "ieee80211_alloc_hw_nm" },
	{ 0xab20fcdc, "bcma_core_dma_translation" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x97308019, "led_classdev_register_ext" },
	{ 0x89d873f9, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xabbc5665, "ieee80211_wake_queues" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x20901b84, "ssb_device_enable" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0xe1e570f, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xbbe16a86, "bcma_core_set_clockmode" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x335e51ff, "__bcma_driver_register" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x6f7812f1, "ieee80211_ctstoself_get" },
	{ 0xb5617c05, "request_firmware_nowait" },
	{ 0x6c1405a8, "ieee80211_queue_delayed_work" },
	{ 0xa353aef4, "device_create_file" },
	{ 0x9a9076c5, "bcma_host_pci_irq_ctl" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9f9e8838, "bcma_chipco_gpio_control" },
	{ 0x65003b36, "__ieee80211_get_rx_led_name" },
	{ 0xe90e7431, "bcma_core_is_enabled" },
	{ 0xd12b75ab, "ssb_pmu_set_ldo_voltage" },
	{ 0xc46ef937, "ssb_device_disable" },
	{ 0xfa3532f, "bcma_core_enable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9d24a690, "bcma_driver_unregister" },
	{ 0x8e018b22, "bcma_core_pll_ctl" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xb7219ef8, "dma_map_page_attrs" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xa44c2eb0, "dev_driver_string" },
	{ 0x617b026c, "hwrng_register" },
	{ 0x24f16b03, "__ieee80211_get_tx_led_name" },
	{ 0x7a0a2340, "ssb_set_devtypedata" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x43782f6e, "ieee80211_wake_queue" },
	{ 0xb97b51b0, "ieee80211_generic_frame_duration" },
	{ 0x79d39d9e, "__ieee80211_get_radio_led_name" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xd065bc19, "ieee80211_register_hw" },
	{ 0x5f3c0c17, "led_classdev_unregister" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4f336844, "dma_sync_single_for_device" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0xc82329ad, "dma_unmap_page_attrs" },
	{ 0x5294487b, "ieee80211_free_hw" },
	{ 0x1f741098, "ssb_bus_may_powerdown" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x61827310, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0xa09025d0, "ssb_pmu_set_ldo_paref" },
	{ 0xd57fbd31, "hwrng_unregister" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x7343e48e, "ssb_device_is_enabled" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd76f0db7, "bcma_core_disable" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x63f5308, "ieee80211_get_tkip_p1k_iv" },
	{ 0x81874735, "ieee80211_get_response_rate" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211,ssb,bcma,cfg80211");

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev15cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ccl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ecl*");
MODULE_ALIAS("bcma:m04BFid0812rev28cl*");
MODULE_ALIAS("bcma:m04BFid0812rev2Acl*");
MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");

MODULE_INFO(srcversion, "33FC020D26BD2C01B19623F");
